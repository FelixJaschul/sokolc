#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <GLUT/glut.h>

#define MAXOBJS 10000
#define MAXSELECT 100
#define MAXFEED 300
#define	SOLID 1
#define	LINE 2
#define	POINT 3

GLint windW = 300, windH = 300;

GLuint selectBuf[MAXSELECT];
GLfloat feedBuf[MAXFEED];
GLint vp[4];
float zRotation = 90.0f;
float zoom = 1.0f;
GLint objectCount;
GLint numObjects;

struct Object {
	float v1[2];
	float v2[2];
	float v3[2];
	float color[3];
} objects[MAXOBJS];

GLenum linePoly = GL_FALSE;

static void init_objects(GLint num) {
	objectCount = num;

	srand((unsigned int) time(NULL));
	for (GLint i = 0; i < num; i++) {
		const float x = (rand() % 300) - 150;
		const float y = (rand() % 300) - 150;

		objects[i].v1[0] = x + (rand() % 50) - 25;
		objects[i].v2[0] = x + (rand() % 50) - 25;
		objects[i].v3[0] = x + (rand() % 50) - 25;
		objects[i].v1[1] = y + (rand() % 50) - 25;
		objects[i].v2[1] = y + (rand() % 50) - 25;
		objects[i].v3[1] = y + (rand() % 50) - 25;
		objects[i].color[0] = ((rand() % 100) + 50) / 150.0f;
		objects[i].color[1] = ((rand() % 100) + 50) / 150.0f;
		objects[i].color[2] = ((rand() % 100) + 50) / 150.0f;
	}
}

static void init() {
	init_objects(10);
}

static void reshape(const int width, const int height) {
	windW = width;
	windH = height;
	glViewport(0, 0, windW, windH);
	glGetIntegerv(GL_VIEWPORT, vp);
}

static void render(const GLenum mode) {
	for (GLint i = 0; i < objectCount; i++) {
		if (mode == GL_SELECT) glLoadName(i);

		glColor3fv(objects[i].color);
		glBegin(GL_POLYGON);
		glVertex2fv(objects[i].v1);
		glVertex2fv(objects[i].v2);
		glVertex2fv(objects[i].v3);
		glEnd();
	}
}

static GLint do_select(const GLint x, const GLint y) {
	glSelectBuffer(MAXSELECT, selectBuf);
	glRenderMode(GL_SELECT);
	glInitNames();
	glPushName(~0);

	glPushMatrix();

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPickMatrix(x, windH - y, 4, 4, vp);
	gluOrtho2D(-175, 175, -175, 175);
	glMatrixMode(GL_MODELVIEW);

	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glScalef(zoom, zoom, zoom);
	glRotatef(zRotation, 0, 0, 1);

	render(GL_SELECT);

	glPopMatrix();

	const GLint hits = glRenderMode(GL_RENDER);
	if (hits <= 0) return -1;
	return selectBuf[(hits - 1) * 4 + 3];
}

static void recolor_triangle(const GLint h) {
	objects[h].color[0] = ((rand() % 100) + 50) / 150.0f;
	objects[h].color[1] = ((rand() % 100) + 50) / 150.0f;
	objects[h].color[2] = ((rand() % 100) + 50) / 150.0f;
}

static void delete_triangle(const GLint h) {
	objects[h] = objects[objectCount - 1];
	objectCount--;
}

static void grow_triangle(const GLint h) {
	float v[2];
	float *oldV;

	v[0] = objects[h].v1[0] + objects[h].v2[0] + objects[h].v3[0];
	v[1] = objects[h].v1[1] + objects[h].v2[1] + objects[h].v3[1];
	v[0] /= 3;
	v[1] /= 3;

	for (GLint i = 0; i < 3; i++) {
		switch (i) {
			case 0:
				oldV = objects[h].v1;
				break;
			case 1:
				oldV = objects[h].v2;
				break;
			case 2:
				oldV = objects[h].v3;
				break;
		}
		oldV[0] = 1.5f * (oldV[0] - v[0]) + v[0];
		oldV[1] = 1.5f * (oldV[1] - v[1]) + v[1];
	}
}

static void mouse(const int button, const int state, const int mouseX, const int mouseY) {
	if (state == GLUT_DOWN) {
		GLint hit = do_select(mouseX, mouseY);
		if (hit != -1) {
			if (button == GLUT_LEFT_BUTTON) recolor_triangle(hit);
			else if (button == GLUT_MIDDLE_BUTTON) grow_triangle(hit);
			else if (button == GLUT_RIGHT_BUTTON) delete_triangle(hit);
			glutPostRedisplay();
		}
	}
}

static void draw(void) {
	glPushMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-175, 175, -175, 175);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glScalef(zoom, zoom, zoom);
	glRotatef(zRotation, 0, 0, 1);
	render(GL_RENDER);
	glPopMatrix();
	glutSwapBuffers();
}

static void key(const unsigned char key, int x, int y) {
	switch (key) {
		case 'z':
			zoom /= 0.75f;
			glutPostRedisplay();
			break;
		case 'Z':
			zoom *= 0.75f;
			glutPostRedisplay();
			break;
		case 'l':
			linePoly = !linePoly;
			if (linePoly) glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
			else glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
			glutPostRedisplay();
			break;
		case 27:
			exit(0);
	}
}

static void special_key(int key, int x, int y) {
	switch (key) {
		case GLUT_KEY_LEFT:
			zRotation += 0.5f;
			glutPostRedisplay();
			break;
		case GLUT_KEY_RIGHT:
			zRotation -= 0.5f;
			glutPostRedisplay();
			break;
	}
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutCreateWindow("TEST");

	init();

	glutReshapeFunc(reshape);
	glutKeyboardFunc(key);
	glutSpecialFunc(special_key);
	glutMouseFunc(mouse);
	glutDisplayFunc(draw);
	glutMainLoop();

	return 0;
}
