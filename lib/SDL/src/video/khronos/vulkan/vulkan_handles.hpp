// Copyright 2015-2022 The Khronos Group Inc.
//
// SPDX-License-Identifier: Apache-2.0 OR MIT
//

// This header is generated from the Khronos Vulkan XML API Registry.

#ifndef VULKAN_HANDLES_HPP
#define VULKAN_HANDLES_HPP

namespace VULKAN_HPP_NAMESPACE
{
  //===================================
  //=== STRUCT forward declarations ===
  //===================================

  //=== VK_VERSION_1_0 ===
  struct Extent2D;
  struct Extent3D;
  struct Offset2D;
  struct Offset3D;
  struct Rect2D;
  struct BaseInStructure;
  struct BaseOutStructure;
  struct BufferMemoryBarrier;
  struct DispatchIndirectCommand;
  struct DrawIndexedIndirectCommand;
  struct DrawIndirectCommand;
  struct ImageMemoryBarrier;
  struct MemoryBarrier;
  struct PipelineCacheHeaderVersionOne;
  struct AllocationCallbacks;
  struct ApplicationInfo;
  struct FormatProperties;
  struct ImageFormatProperties;
  struct InstanceCreateInfo;
  struct MemoryHeap;
  struct MemoryType;
  struct PhysicalDeviceFeatures;
  struct PhysicalDeviceLimits;
  struct PhysicalDeviceMemoryProperties;
  struct PhysicalDeviceProperties;
  struct PhysicalDeviceSparseProperties;
  struct QueueFamilyProperties;
  struct DeviceCreateInfo;
  struct DeviceQueueCreateInfo;
  struct ExtensionProperties;
  struct LayerProperties;
  struct SubmitInfo;
  struct MappedMemoryRange;
  struct MemoryAllocateInfo;
  struct MemoryRequirements;
  struct BindSparseInfo;
  struct ImageSubresource;
  struct SparseBufferMemoryBindInfo;
  struct SparseImageFormatProperties;
  struct SparseImageMemoryBind;
  struct SparseImageMemoryBindInfo;
  struct SparseImageMemoryRequirements;
  struct SparseImageOpaqueMemoryBindInfo;
  struct SparseMemoryBind;
  struct FenceCreateInfo;
  struct SemaphoreCreateInfo;
  struct EventCreateInfo;
  struct QueryPoolCreateInfo;
  struct BufferCreateInfo;
  struct BufferViewCreateInfo;
  struct ImageCreateInfo;
  struct SubresourceLayout;
  struct ComponentMapping;
  struct ImageSubresourceRange;
  struct ImageViewCreateInfo;
  struct ShaderModuleCreateInfo;
  struct PipelineCacheCreateInfo;
  struct ComputePipelineCreateInfo;
  struct GraphicsPipelineCreateInfo;
  struct PipelineColorBlendAttachmentState;
  struct PipelineColorBlendStateCreateInfo;
  struct PipelineDepthStencilStateCreateInfo;
  struct PipelineDynamicStateCreateInfo;
  struct PipelineInputAssemblyStateCreateInfo;
  struct PipelineMultisampleStateCreateInfo;
  struct PipelineRasterizationStateCreateInfo;
  struct PipelineShaderStageCreateInfo;
  struct PipelineTessellationStateCreateInfo;
  struct PipelineVertexInputStateCreateInfo;
  struct PipelineViewportStateCreateInfo;
  struct SpecializationInfo;
  struct SpecializationMapEntry;
  struct StencilOpState;
  struct VertexInputAttributeDescription;
  struct VertexInputBindingDescription;
  struct Viewport;
  struct PipelineLayoutCreateInfo;
  struct PushConstantRange;
  struct SamplerCreateInfo;
  struct CopyDescriptorSet;
  struct DescriptorBufferInfo;
  struct DescriptorImageInfo;
  struct DescriptorPoolCreateInfo;
  struct DescriptorPoolSize;
  struct DescriptorSetAllocateInfo;
  struct DescriptorSetLayoutBinding;
  struct DescriptorSetLayoutCreateInfo;
  struct WriteDescriptorSet;
  struct AttachmentDescription;
  struct AttachmentReference;
  struct FramebufferCreateInfo;
  struct RenderPassCreateInfo;
  struct SubpassDependency;
  struct SubpassDescription;
  struct CommandPoolCreateInfo;
  struct CommandBufferAllocateInfo;
  struct CommandBufferBeginInfo;
  struct CommandBufferInheritanceInfo;
  struct BufferCopy;
  struct BufferImageCopy;
  struct ClearAttachment;
  union ClearColorValue;
  struct ClearDepthStencilValue;
  struct ClearRect;
  union ClearValue;
  struct ImageBlit;
  struct ImageCopy;
  struct ImageResolve;
  struct ImageSubresourceLayers;
  struct RenderPassBeginInfo;

  //=== VK_VERSION_1_1 ===
  struct PhysicalDeviceSubgroupProperties;
  struct BindBufferMemoryInfo;
  using BindBufferMemoryInfoKHR = BindBufferMemoryInfo;
  struct BindImageMemoryInfo;
  using BindImageMemoryInfoKHR = BindImageMemoryInfo;
  struct PhysicalDevice16BitStorageFeatures;
  using PhysicalDevice16BitStorageFeaturesKHR = PhysicalDevice16BitStorageFeatures;
  struct MemoryDedicatedRequirements;
  using MemoryDedicatedRequirementsKHR = MemoryDedicatedRequirements;
  struct MemoryDedicatedAllocateInfo;
  using MemoryDedicatedAllocateInfoKHR = MemoryDedicatedAllocateInfo;
  struct MemoryAllocateFlagsInfo;
  using MemoryAllocateFlagsInfoKHR = MemoryAllocateFlagsInfo;
  struct DeviceGroupRenderPassBeginInfo;
  using DeviceGroupRenderPassBeginInfoKHR = DeviceGroupRenderPassBeginInfo;
  struct DeviceGroupCommandBufferBeginInfo;
  using DeviceGroupCommandBufferBeginInfoKHR = DeviceGroupCommandBufferBeginInfo;
  struct DeviceGroupSubmitInfo;
  using DeviceGroupSubmitInfoKHR = DeviceGroupSubmitInfo;
  struct DeviceGroupBindSparseInfo;
  using DeviceGroupBindSparseInfoKHR = DeviceGroupBindSparseInfo;
  struct BindBufferMemoryDeviceGroupInfo;
  using BindBufferMemoryDeviceGroupInfoKHR = BindBufferMemoryDeviceGroupInfo;
  struct BindImageMemoryDeviceGroupInfo;
  using BindImageMemoryDeviceGroupInfoKHR = BindImageMemoryDeviceGroupInfo;
  struct PhysicalDeviceGroupProperties;
  using PhysicalDeviceGroupPropertiesKHR = PhysicalDeviceGroupProperties;
  struct DeviceGroupDeviceCreateInfo;
  using DeviceGroupDeviceCreateInfoKHR = DeviceGroupDeviceCreateInfo;
  struct BufferMemoryRequirementsInfo2;
  using BufferMemoryRequirementsInfo2KHR = BufferMemoryRequirementsInfo2;
  struct ImageMemoryRequirementsInfo2;
  using ImageMemoryRequirementsInfo2KHR = ImageMemoryRequirementsInfo2;
  struct ImageSparseMemoryRequirementsInfo2;
  using ImageSparseMemoryRequirementsInfo2KHR = ImageSparseMemoryRequirementsInfo2;
  struct MemoryRequirements2;
  using MemoryRequirements2KHR = MemoryRequirements2;
  struct SparseImageMemoryRequirements2;
  using SparseImageMemoryRequirements2KHR = SparseImageMemoryRequirements2;
  struct PhysicalDeviceFeatures2;
  using PhysicalDeviceFeatures2KHR = PhysicalDeviceFeatures2;
  struct PhysicalDeviceProperties2;
  using PhysicalDeviceProperties2KHR = PhysicalDeviceProperties2;
  struct FormatProperties2;
  using FormatProperties2KHR = FormatProperties2;
  struct ImageFormatProperties2;
  using ImageFormatProperties2KHR = ImageFormatProperties2;
  struct PhysicalDeviceImageFormatInfo2;
  using PhysicalDeviceImageFormatInfo2KHR = PhysicalDeviceImageFormatInfo2;
  struct QueueFamilyProperties2;
  using QueueFamilyProperties2KHR = QueueFamilyProperties2;
  struct PhysicalDeviceMemoryProperties2;
  using PhysicalDeviceMemoryProperties2KHR = PhysicalDeviceMemoryProperties2;
  struct SparseImageFormatProperties2;
  using SparseImageFormatProperties2KHR = SparseImageFormatProperties2;
  struct PhysicalDeviceSparseImageFormatInfo2;
  using PhysicalDeviceSparseImageFormatInfo2KHR = PhysicalDeviceSparseImageFormatInfo2;
  struct PhysicalDevicePointClippingProperties;
  using PhysicalDevicePointClippingPropertiesKHR = PhysicalDevicePointClippingProperties;
  struct RenderPassInputAttachmentAspectCreateInfo;
  using RenderPassInputAttachmentAspectCreateInfoKHR = RenderPassInputAttachmentAspectCreateInfo;
  struct InputAttachmentAspectReference;
  using InputAttachmentAspectReferenceKHR = InputAttachmentAspectReference;
  struct ImageViewUsageCreateInfo;
  using ImageViewUsageCreateInfoKHR = ImageViewUsageCreateInfo;
  struct PipelineTessellationDomainOriginStateCreateInfo;
  using PipelineTessellationDomainOriginStateCreateInfoKHR = PipelineTessellationDomainOriginStateCreateInfo;
  struct RenderPassMultiviewCreateInfo;
  using RenderPassMultiviewCreateInfoKHR = RenderPassMultiviewCreateInfo;
  struct PhysicalDeviceMultiviewFeatures;
  using PhysicalDeviceMultiviewFeaturesKHR = PhysicalDeviceMultiviewFeatures;
  struct PhysicalDeviceMultiviewProperties;
  using PhysicalDeviceMultiviewPropertiesKHR = PhysicalDeviceMultiviewProperties;
  struct PhysicalDeviceVariablePointersFeatures;
  using PhysicalDeviceVariablePointerFeatures     = PhysicalDeviceVariablePointersFeatures;
  using PhysicalDeviceVariablePointerFeaturesKHR  = PhysicalDeviceVariablePointersFeatures;
  using PhysicalDeviceVariablePointersFeaturesKHR = PhysicalDeviceVariablePointersFeatures;
  struct PhysicalDeviceProtectedMemoryFeatures;
  struct PhysicalDeviceProtectedMemoryProperties;
  struct DeviceQueueInfo2;
  struct ProtectedSubmitInfo;
  struct SamplerYcbcrConversionCreateInfo;
  using SamplerYcbcrConversionCreateInfoKHR = SamplerYcbcrConversionCreateInfo;
  struct SamplerYcbcrConversionInfo;
  using SamplerYcbcrConversionInfoKHR = SamplerYcbcrConversionInfo;
  struct BindImagePlaneMemoryInfo;
  using BindImagePlaneMemoryInfoKHR = BindImagePlaneMemoryInfo;
  struct ImagePlaneMemoryRequirementsInfo;
  using ImagePlaneMemoryRequirementsInfoKHR = ImagePlaneMemoryRequirementsInfo;
  struct PhysicalDeviceSamplerYcbcrConversionFeatures;
  using PhysicalDeviceSamplerYcbcrConversionFeaturesKHR = PhysicalDeviceSamplerYcbcrConversionFeatures;
  struct SamplerYcbcrConversionImageFormatProperties;
  using SamplerYcbcrConversionImageFormatPropertiesKHR = SamplerYcbcrConversionImageFormatProperties;
  struct DescriptorUpdateTemplateEntry;
  using DescriptorUpdateTemplateEntryKHR = DescriptorUpdateTemplateEntry;
  struct DescriptorUpdateTemplateCreateInfo;
  using DescriptorUpdateTemplateCreateInfoKHR = DescriptorUpdateTemplateCreateInfo;
  struct ExternalMemoryProperties;
  using ExternalMemoryPropertiesKHR = ExternalMemoryProperties;
  struct PhysicalDeviceExternalImageFormatInfo;
  using PhysicalDeviceExternalImageFormatInfoKHR = PhysicalDeviceExternalImageFormatInfo;
  struct ExternalImageFormatProperties;
  using ExternalImageFormatPropertiesKHR = ExternalImageFormatProperties;
  struct PhysicalDeviceExternalBufferInfo;
  using PhysicalDeviceExternalBufferInfoKHR = PhysicalDeviceExternalBufferInfo;
  struct ExternalBufferProperties;
  using ExternalBufferPropertiesKHR = ExternalBufferProperties;
  struct PhysicalDeviceIDProperties;
  using PhysicalDeviceIDPropertiesKHR = PhysicalDeviceIDProperties;
  struct ExternalMemoryImageCreateInfo;
  using ExternalMemoryImageCreateInfoKHR = ExternalMemoryImageCreateInfo;
  struct ExternalMemoryBufferCreateInfo;
  using ExternalMemoryBufferCreateInfoKHR = ExternalMemoryBufferCreateInfo;
  struct ExportMemoryAllocateInfo;
  using ExportMemoryAllocateInfoKHR = ExportMemoryAllocateInfo;
  struct PhysicalDeviceExternalFenceInfo;
  using PhysicalDeviceExternalFenceInfoKHR = PhysicalDeviceExternalFenceInfo;
  struct ExternalFenceProperties;
  using ExternalFencePropertiesKHR = ExternalFenceProperties;
  struct ExportFenceCreateInfo;
  using ExportFenceCreateInfoKHR = ExportFenceCreateInfo;
  struct ExportSemaphoreCreateInfo;
  using ExportSemaphoreCreateInfoKHR = ExportSemaphoreCreateInfo;
  struct PhysicalDeviceExternalSemaphoreInfo;
  using PhysicalDeviceExternalSemaphoreInfoKHR = PhysicalDeviceExternalSemaphoreInfo;
  struct ExternalSemaphoreProperties;
  using ExternalSemaphorePropertiesKHR = ExternalSemaphoreProperties;
  struct PhysicalDeviceMaintenance3Properties;
  using PhysicalDeviceMaintenance3PropertiesKHR = PhysicalDeviceMaintenance3Properties;
  struct DescriptorSetLayoutSupport;
  using DescriptorSetLayoutSupportKHR = DescriptorSetLayoutSupport;
  struct PhysicalDeviceShaderDrawParametersFeatures;
  using PhysicalDeviceShaderDrawParameterFeatures = PhysicalDeviceShaderDrawParametersFeatures;

  //=== VK_VERSION_1_2 ===
  struct PhysicalDeviceVulkan11Features;
  struct PhysicalDeviceVulkan11Properties;
  struct PhysicalDeviceVulkan12Features;
  struct PhysicalDeviceVulkan12Properties;
  struct ImageFormatListCreateInfo;
  using ImageFormatListCreateInfoKHR = ImageFormatListCreateInfo;
  struct RenderPassCreateInfo2;
  using RenderPassCreateInfo2KHR = RenderPassCreateInfo2;
  struct AttachmentDescription2;
  using AttachmentDescription2KHR = AttachmentDescription2;
  struct AttachmentReference2;
  using AttachmentReference2KHR = AttachmentReference2;
  struct SubpassDescription2;
  using SubpassDescription2KHR = SubpassDescription2;
  struct SubpassDependency2;
  using SubpassDependency2KHR = SubpassDependency2;
  struct SubpassBeginInfo;
  using SubpassBeginInfoKHR = SubpassBeginInfo;
  struct SubpassEndInfo;
  using SubpassEndInfoKHR = SubpassEndInfo;
  struct PhysicalDevice8BitStorageFeatures;
  using PhysicalDevice8BitStorageFeaturesKHR = PhysicalDevice8BitStorageFeatures;
  struct ConformanceVersion;
  using ConformanceVersionKHR = ConformanceVersion;
  struct PhysicalDeviceDriverProperties;
  using PhysicalDeviceDriverPropertiesKHR = PhysicalDeviceDriverProperties;
  struct PhysicalDeviceShaderAtomicInt64Features;
  using PhysicalDeviceShaderAtomicInt64FeaturesKHR = PhysicalDeviceShaderAtomicInt64Features;
  struct PhysicalDeviceShaderFloat16Int8Features;
  using PhysicalDeviceFloat16Int8FeaturesKHR       = PhysicalDeviceShaderFloat16Int8Features;
  using PhysicalDeviceShaderFloat16Int8FeaturesKHR = PhysicalDeviceShaderFloat16Int8Features;
  struct PhysicalDeviceFloatControlsProperties;
  using PhysicalDeviceFloatControlsPropertiesKHR = PhysicalDeviceFloatControlsProperties;
  struct DescriptorSetLayoutBindingFlagsCreateInfo;
  using DescriptorSetLayoutBindingFlagsCreateInfoEXT = DescriptorSetLayoutBindingFlagsCreateInfo;
  struct PhysicalDeviceDescriptorIndexingFeatures;
  using PhysicalDeviceDescriptorIndexingFeaturesEXT = PhysicalDeviceDescriptorIndexingFeatures;
  struct PhysicalDeviceDescriptorIndexingProperties;
  using PhysicalDeviceDescriptorIndexingPropertiesEXT = PhysicalDeviceDescriptorIndexingProperties;
  struct DescriptorSetVariableDescriptorCountAllocateInfo;
  using DescriptorSetVariableDescriptorCountAllocateInfoEXT = DescriptorSetVariableDescriptorCountAllocateInfo;
  struct DescriptorSetVariableDescriptorCountLayoutSupport;
  using DescriptorSetVariableDescriptorCountLayoutSupportEXT = DescriptorSetVariableDescriptorCountLayoutSupport;
  struct SubpassDescriptionDepthStencilResolve;
  using SubpassDescriptionDepthStencilResolveKHR = SubpassDescriptionDepthStencilResolve;
  struct PhysicalDeviceDepthStencilResolveProperties;
  using PhysicalDeviceDepthStencilResolvePropertiesKHR = PhysicalDeviceDepthStencilResolveProperties;
  struct PhysicalDeviceScalarBlockLayoutFeatures;
  using PhysicalDeviceScalarBlockLayoutFeaturesEXT = PhysicalDeviceScalarBlockLayoutFeatures;
  struct ImageStencilUsageCreateInfo;
  using ImageStencilUsageCreateInfoEXT = ImageStencilUsageCreateInfo;
  struct SamplerReductionModeCreateInfo;
  using SamplerReductionModeCreateInfoEXT = SamplerReductionModeCreateInfo;
  struct PhysicalDeviceSamplerFilterMinmaxProperties;
  using PhysicalDeviceSamplerFilterMinmaxPropertiesEXT = PhysicalDeviceSamplerFilterMinmaxProperties;
  struct PhysicalDeviceVulkanMemoryModelFeatures;
  using PhysicalDeviceVulkanMemoryModelFeaturesKHR = PhysicalDeviceVulkanMemoryModelFeatures;
  struct PhysicalDeviceImagelessFramebufferFeatures;
  using PhysicalDeviceImagelessFramebufferFeaturesKHR = PhysicalDeviceImagelessFramebufferFeatures;
  struct FramebufferAttachmentsCreateInfo;
  using FramebufferAttachmentsCreateInfoKHR = FramebufferAttachmentsCreateInfo;
  struct FramebufferAttachmentImageInfo;
  using FramebufferAttachmentImageInfoKHR = FramebufferAttachmentImageInfo;
  struct RenderPassAttachmentBeginInfo;
  using RenderPassAttachmentBeginInfoKHR = RenderPassAttachmentBeginInfo;
  struct PhysicalDeviceUniformBufferStandardLayoutFeatures;
  using PhysicalDeviceUniformBufferStandardLayoutFeaturesKHR = PhysicalDeviceUniformBufferStandardLayoutFeatures;
  struct PhysicalDeviceShaderSubgroupExtendedTypesFeatures;
  using PhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR = PhysicalDeviceShaderSubgroupExtendedTypesFeatures;
  struct PhysicalDeviceSeparateDepthStencilLayoutsFeatures;
  using PhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR = PhysicalDeviceSeparateDepthStencilLayoutsFeatures;
  struct AttachmentReferenceStencilLayout;
  using AttachmentReferenceStencilLayoutKHR = AttachmentReferenceStencilLayout;
  struct AttachmentDescriptionStencilLayout;
  using AttachmentDescriptionStencilLayoutKHR = AttachmentDescriptionStencilLayout;
  struct PhysicalDeviceHostQueryResetFeatures;
  using PhysicalDeviceHostQueryResetFeaturesEXT = PhysicalDeviceHostQueryResetFeatures;
  struct PhysicalDeviceTimelineSemaphoreFeatures;
  using PhysicalDeviceTimelineSemaphoreFeaturesKHR = PhysicalDeviceTimelineSemaphoreFeatures;
  struct PhysicalDeviceTimelineSemaphoreProperties;
  using PhysicalDeviceTimelineSemaphorePropertiesKHR = PhysicalDeviceTimelineSemaphoreProperties;
  struct SemaphoreTypeCreateInfo;
  using SemaphoreTypeCreateInfoKHR = SemaphoreTypeCreateInfo;
  struct TimelineSemaphoreSubmitInfo;
  using TimelineSemaphoreSubmitInfoKHR = TimelineSemaphoreSubmitInfo;
  struct SemaphoreWaitInfo;
  using SemaphoreWaitInfoKHR = SemaphoreWaitInfo;
  struct SemaphoreSignalInfo;
  using SemaphoreSignalInfoKHR = SemaphoreSignalInfo;
  struct PhysicalDeviceBufferDeviceAddressFeatures;
  using PhysicalDeviceBufferDeviceAddressFeaturesKHR = PhysicalDeviceBufferDeviceAddressFeatures;
  struct BufferDeviceAddressInfo;
  using BufferDeviceAddressInfoEXT = BufferDeviceAddressInfo;
  using BufferDeviceAddressInfoKHR = BufferDeviceAddressInfo;
  struct BufferOpaqueCaptureAddressCreateInfo;
  using BufferOpaqueCaptureAddressCreateInfoKHR = BufferOpaqueCaptureAddressCreateInfo;
  struct MemoryOpaqueCaptureAddressAllocateInfo;
  using MemoryOpaqueCaptureAddressAllocateInfoKHR = MemoryOpaqueCaptureAddressAllocateInfo;
  struct DeviceMemoryOpaqueCaptureAddressInfo;
  using DeviceMemoryOpaqueCaptureAddressInfoKHR = DeviceMemoryOpaqueCaptureAddressInfo;

  //=== VK_VERSION_1_3 ===
  struct PhysicalDeviceVulkan13Features;
  struct PhysicalDeviceVulkan13Properties;
  struct PipelineCreationFeedbackCreateInfo;
  using PipelineCreationFeedbackCreateInfoEXT = PipelineCreationFeedbackCreateInfo;
  struct PipelineCreationFeedback;
  using PipelineCreationFeedbackEXT = PipelineCreationFeedback;
  struct PhysicalDeviceShaderTerminateInvocationFeatures;
  using PhysicalDeviceShaderTerminateInvocationFeaturesKHR = PhysicalDeviceShaderTerminateInvocationFeatures;
  struct PhysicalDeviceToolProperties;
  using PhysicalDeviceToolPropertiesEXT = PhysicalDeviceToolProperties;
  struct PhysicalDeviceShaderDemoteToHelperInvocationFeatures;
  using PhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT = PhysicalDeviceShaderDemoteToHelperInvocationFeatures;
  struct PhysicalDevicePrivateDataFeatures;
  using PhysicalDevicePrivateDataFeaturesEXT = PhysicalDevicePrivateDataFeatures;
  struct DevicePrivateDataCreateInfo;
  using DevicePrivateDataCreateInfoEXT = DevicePrivateDataCreateInfo;
  struct PrivateDataSlotCreateInfo;
  using PrivateDataSlotCreateInfoEXT = PrivateDataSlotCreateInfo;
  struct PhysicalDevicePipelineCreationCacheControlFeatures;
  using PhysicalDevicePipelineCreationCacheControlFeaturesEXT = PhysicalDevicePipelineCreationCacheControlFeatures;
  struct MemoryBarrier2;
  using MemoryBarrier2KHR = MemoryBarrier2;
  struct BufferMemoryBarrier2;
  using BufferMemoryBarrier2KHR = BufferMemoryBarrier2;
  struct ImageMemoryBarrier2;
  using ImageMemoryBarrier2KHR = ImageMemoryBarrier2;
  struct DependencyInfo;
  using DependencyInfoKHR = DependencyInfo;
  struct SubmitInfo2;
  using SubmitInfo2KHR = SubmitInfo2;
  struct SemaphoreSubmitInfo;
  using SemaphoreSubmitInfoKHR = SemaphoreSubmitInfo;
  struct CommandBufferSubmitInfo;
  using CommandBufferSubmitInfoKHR = CommandBufferSubmitInfo;
  struct PhysicalDeviceSynchronization2Features;
  using PhysicalDeviceSynchronization2FeaturesKHR = PhysicalDeviceSynchronization2Features;
  struct PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;
  using PhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR = PhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;
  struct PhysicalDeviceImageRobustnessFeatures;
  using PhysicalDeviceImageRobustnessFeaturesEXT = PhysicalDeviceImageRobustnessFeatures;
  struct CopyBufferInfo2;
  using CopyBufferInfo2KHR = CopyBufferInfo2;
  struct CopyImageInfo2;
  using CopyImageInfo2KHR = CopyImageInfo2;
  struct CopyBufferToImageInfo2;
  using CopyBufferToImageInfo2KHR = CopyBufferToImageInfo2;
  struct CopyImageToBufferInfo2;
  using CopyImageToBufferInfo2KHR = CopyImageToBufferInfo2;
  struct BlitImageInfo2;
  using BlitImageInfo2KHR = BlitImageInfo2;
  struct ResolveImageInfo2;
  using ResolveImageInfo2KHR = ResolveImageInfo2;
  struct BufferCopy2;
  using BufferCopy2KHR = BufferCopy2;
  struct ImageCopy2;
  using ImageCopy2KHR = ImageCopy2;
  struct ImageBlit2;
  using ImageBlit2KHR = ImageBlit2;
  struct BufferImageCopy2;
  using BufferImageCopy2KHR = BufferImageCopy2;
  struct ImageResolve2;
  using ImageResolve2KHR = ImageResolve2;
  struct PhysicalDeviceSubgroupSizeControlFeatures;
  using PhysicalDeviceSubgroupSizeControlFeaturesEXT = PhysicalDeviceSubgroupSizeControlFeatures;
  struct PhysicalDeviceSubgroupSizeControlProperties;
  using PhysicalDeviceSubgroupSizeControlPropertiesEXT = PhysicalDeviceSubgroupSizeControlProperties;
  struct PipelineShaderStageRequiredSubgroupSizeCreateInfo;
  using PipelineShaderStageRequiredSubgroupSizeCreateInfoEXT = PipelineShaderStageRequiredSubgroupSizeCreateInfo;
  struct PhysicalDeviceInlineUniformBlockFeatures;
  using PhysicalDeviceInlineUniformBlockFeaturesEXT = PhysicalDeviceInlineUniformBlockFeatures;
  struct PhysicalDeviceInlineUniformBlockProperties;
  using PhysicalDeviceInlineUniformBlockPropertiesEXT = PhysicalDeviceInlineUniformBlockProperties;
  struct WriteDescriptorSetInlineUniformBlock;
  using WriteDescriptorSetInlineUniformBlockEXT = WriteDescriptorSetInlineUniformBlock;
  struct DescriptorPoolInlineUniformBlockCreateInfo;
  using DescriptorPoolInlineUniformBlockCreateInfoEXT = DescriptorPoolInlineUniformBlockCreateInfo;
  struct PhysicalDeviceTextureCompressionASTCHDRFeatures;
  using PhysicalDeviceTextureCompressionASTCHDRFeaturesEXT = PhysicalDeviceTextureCompressionASTCHDRFeatures;
  struct RenderingInfo;
  using RenderingInfoKHR = RenderingInfo;
  struct RenderingAttachmentInfo;
  using RenderingAttachmentInfoKHR = RenderingAttachmentInfo;
  struct PipelineRenderingCreateInfo;
  using PipelineRenderingCreateInfoKHR = PipelineRenderingCreateInfo;
  struct PhysicalDeviceDynamicRenderingFeatures;
  using PhysicalDeviceDynamicRenderingFeaturesKHR = PhysicalDeviceDynamicRenderingFeatures;
  struct CommandBufferInheritanceRenderingInfo;
  using CommandBufferInheritanceRenderingInfoKHR = CommandBufferInheritanceRenderingInfo;
  struct PhysicalDeviceShaderIntegerDotProductFeatures;
  using PhysicalDeviceShaderIntegerDotProductFeaturesKHR = PhysicalDeviceShaderIntegerDotProductFeatures;
  struct PhysicalDeviceShaderIntegerDotProductProperties;
  using PhysicalDeviceShaderIntegerDotProductPropertiesKHR = PhysicalDeviceShaderIntegerDotProductProperties;
  struct PhysicalDeviceTexelBufferAlignmentProperties;
  using PhysicalDeviceTexelBufferAlignmentPropertiesEXT = PhysicalDeviceTexelBufferAlignmentProperties;
  struct FormatProperties3;
  using FormatProperties3KHR = FormatProperties3;
  struct PhysicalDeviceMaintenance4Features;
  using PhysicalDeviceMaintenance4FeaturesKHR = PhysicalDeviceMaintenance4Features;
  struct PhysicalDeviceMaintenance4Properties;
  using PhysicalDeviceMaintenance4PropertiesKHR = PhysicalDeviceMaintenance4Properties;
  struct DeviceBufferMemoryRequirements;
  using DeviceBufferMemoryRequirementsKHR = DeviceBufferMemoryRequirements;
  struct DeviceImageMemoryRequirements;
  using DeviceImageMemoryRequirementsKHR = DeviceImageMemoryRequirements;

  //=== VK_KHR_surface ===
  struct SurfaceCapabilitiesKHR;
  struct SurfaceFormatKHR;

  //=== VK_KHR_swapchain ===
  struct SwapchainCreateInfoKHR;
  struct PresentInfoKHR;
  struct ImageSwapchainCreateInfoKHR;
  struct BindImageMemorySwapchainInfoKHR;
  struct AcquireNextImageInfoKHR;
  struct DeviceGroupPresentCapabilitiesKHR;
  struct DeviceGroupPresentInfoKHR;
  struct DeviceGroupSwapchainCreateInfoKHR;

  //=== VK_KHR_display ===
  struct DisplayModeCreateInfoKHR;
  struct DisplayModeParametersKHR;
  struct DisplayModePropertiesKHR;
  struct DisplayPlaneCapabilitiesKHR;
  struct DisplayPlanePropertiesKHR;
  struct DisplayPropertiesKHR;
  struct DisplaySurfaceCreateInfoKHR;

  //=== VK_KHR_display_swapchain ===
  struct DisplayPresentInfoKHR;

#if defined( VK_USE_PLATFORM_XLIB_KHR )
  //=== VK_KHR_xlib_surface ===
  struct XlibSurfaceCreateInfoKHR;
#endif /*VK_USE_PLATFORM_XLIB_KHR*/

#if defined( VK_USE_PLATFORM_XCB_KHR )
  //=== VK_KHR_xcb_surface ===
  struct XcbSurfaceCreateInfoKHR;
#endif /*VK_USE_PLATFORM_XCB_KHR*/

#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
  //=== VK_KHR_wayland_surface ===
  struct WaylandSurfaceCreateInfoKHR;
#endif /*VK_USE_PLATFORM_WAYLAND_KHR*/

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  //=== VK_KHR_android_surface ===
  struct AndroidSurfaceCreateInfoKHR;
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_win32_surface ===
  struct Win32SurfaceCreateInfoKHR;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_EXT_debug_report ===
  struct DebugReportCallbackCreateInfoEXT;

  //=== VK_AMD_rasterization_order ===
  struct PipelineRasterizationStateRasterizationOrderAMD;

  //=== VK_EXT_debug_marker ===
  struct DebugMarkerObjectNameInfoEXT;
  struct DebugMarkerObjectTagInfoEXT;
  struct DebugMarkerMarkerInfoEXT;

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  //=== VK_KHR_video_queue ===
  struct QueueFamilyQueryResultStatusPropertiesKHR;
  struct QueueFamilyVideoPropertiesKHR;
  struct VideoProfileInfoKHR;
  struct VideoProfileListInfoKHR;
  struct VideoCapabilitiesKHR;
  struct PhysicalDeviceVideoFormatInfoKHR;
  struct VideoFormatPropertiesKHR;
  struct VideoPictureResourceInfoKHR;
  struct VideoReferenceSlotInfoKHR;
  struct VideoSessionMemoryRequirementsKHR;
  struct BindVideoSessionMemoryInfoKHR;
  struct VideoSessionCreateInfoKHR;
  struct VideoSessionParametersCreateInfoKHR;
  struct VideoSessionParametersUpdateInfoKHR;
  struct VideoBeginCodingInfoKHR;
  struct VideoEndCodingInfoKHR;
  struct VideoCodingControlInfoKHR;
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  //=== VK_KHR_video_decode_queue ===
  struct VideoDecodeCapabilitiesKHR;
  struct VideoDecodeUsageInfoKHR;
  struct VideoDecodeInfoKHR;
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

  //=== VK_NV_dedicated_allocation ===
  struct DedicatedAllocationImageCreateInfoNV;
  struct DedicatedAllocationBufferCreateInfoNV;
  struct DedicatedAllocationMemoryAllocateInfoNV;

  //=== VK_EXT_transform_feedback ===
  struct PhysicalDeviceTransformFeedbackFeaturesEXT;
  struct PhysicalDeviceTransformFeedbackPropertiesEXT;
  struct PipelineRasterizationStateStreamCreateInfoEXT;

  //=== VK_NVX_binary_import ===
  struct CuModuleCreateInfoNVX;
  struct CuFunctionCreateInfoNVX;
  struct CuLaunchInfoNVX;

  //=== VK_NVX_image_view_handle ===
  struct ImageViewHandleInfoNVX;
  struct ImageViewAddressPropertiesNVX;

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  //=== VK_EXT_video_encode_h264 ===
  struct VideoEncodeH264CapabilitiesEXT;
  struct VideoEncodeH264SessionParametersCreateInfoEXT;
  struct VideoEncodeH264SessionParametersAddInfoEXT;
  struct VideoEncodeH264VclFrameInfoEXT;
  struct VideoEncodeH264ReferenceListsInfoEXT;
  struct VideoEncodeH264EmitPictureParametersInfoEXT;
  struct VideoEncodeH264DpbSlotInfoEXT;
  struct VideoEncodeH264NaluSliceInfoEXT;
  struct VideoEncodeH264ProfileInfoEXT;
  struct VideoEncodeH264RateControlInfoEXT;
  struct VideoEncodeH264RateControlLayerInfoEXT;
  struct VideoEncodeH264QpEXT;
  struct VideoEncodeH264FrameSizeEXT;
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  //=== VK_EXT_video_encode_h265 ===
  struct VideoEncodeH265CapabilitiesEXT;
  struct VideoEncodeH265SessionParametersCreateInfoEXT;
  struct VideoEncodeH265SessionParametersAddInfoEXT;
  struct VideoEncodeH265VclFrameInfoEXT;
  struct VideoEncodeH265EmitPictureParametersInfoEXT;
  struct VideoEncodeH265DpbSlotInfoEXT;
  struct VideoEncodeH265NaluSliceSegmentInfoEXT;
  struct VideoEncodeH265ProfileInfoEXT;
  struct VideoEncodeH265ReferenceListsInfoEXT;
  struct VideoEncodeH265RateControlInfoEXT;
  struct VideoEncodeH265RateControlLayerInfoEXT;
  struct VideoEncodeH265QpEXT;
  struct VideoEncodeH265FrameSizeEXT;
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  //=== VK_EXT_video_decode_h264 ===
  struct VideoDecodeH264ProfileInfoEXT;
  struct VideoDecodeH264CapabilitiesEXT;
  struct VideoDecodeH264SessionParametersCreateInfoEXT;
  struct VideoDecodeH264SessionParametersAddInfoEXT;
  struct VideoDecodeH264PictureInfoEXT;
  struct VideoDecodeH264MvcInfoEXT;
  struct VideoDecodeH264DpbSlotInfoEXT;
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

  //=== VK_AMD_texture_gather_bias_lod ===
  struct TextureLODGatherFormatPropertiesAMD;

  //=== VK_AMD_shader_info ===
  struct ShaderResourceUsageAMD;
  struct ShaderStatisticsInfoAMD;

  //=== VK_KHR_dynamic_rendering ===
  struct RenderingFragmentShadingRateAttachmentInfoKHR;
  struct RenderingFragmentDensityMapAttachmentInfoEXT;
  struct AttachmentSampleCountInfoAMD;
  using AttachmentSampleCountInfoNV = AttachmentSampleCountInfoAMD;
  struct MultiviewPerViewAttributesInfoNVX;

#if defined( VK_USE_PLATFORM_GGP )
  //=== VK_GGP_stream_descriptor_surface ===
  struct StreamDescriptorSurfaceCreateInfoGGP;
#endif /*VK_USE_PLATFORM_GGP*/

  //=== VK_NV_corner_sampled_image ===
  struct PhysicalDeviceCornerSampledImageFeaturesNV;

  //=== VK_NV_external_memory_capabilities ===
  struct ExternalImageFormatPropertiesNV;

  //=== VK_NV_external_memory ===
  struct ExternalMemoryImageCreateInfoNV;
  struct ExportMemoryAllocateInfoNV;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_NV_external_memory_win32 ===
  struct ImportMemoryWin32HandleInfoNV;
  struct ExportMemoryWin32HandleInfoNV;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_NV_win32_keyed_mutex ===
  struct Win32KeyedMutexAcquireReleaseInfoNV;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_EXT_validation_flags ===
  struct ValidationFlagsEXT;

#if defined( VK_USE_PLATFORM_VI_NN )
  //=== VK_NN_vi_surface ===
  struct ViSurfaceCreateInfoNN;
#endif /*VK_USE_PLATFORM_VI_NN*/

  //=== VK_EXT_astc_decode_mode ===
  struct ImageViewASTCDecodeModeEXT;
  struct PhysicalDeviceASTCDecodeFeaturesEXT;

  //=== VK_EXT_pipeline_robustness ===
  struct PhysicalDevicePipelineRobustnessFeaturesEXT;
  struct PhysicalDevicePipelineRobustnessPropertiesEXT;
  struct PipelineRobustnessCreateInfoEXT;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_memory_win32 ===
  struct ImportMemoryWin32HandleInfoKHR;
  struct ExportMemoryWin32HandleInfoKHR;
  struct MemoryWin32HandlePropertiesKHR;
  struct MemoryGetWin32HandleInfoKHR;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_memory_fd ===
  struct ImportMemoryFdInfoKHR;
  struct MemoryFdPropertiesKHR;
  struct MemoryGetFdInfoKHR;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_win32_keyed_mutex ===
  struct Win32KeyedMutexAcquireReleaseInfoKHR;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_semaphore_win32 ===
  struct ImportSemaphoreWin32HandleInfoKHR;
  struct ExportSemaphoreWin32HandleInfoKHR;
  struct D3D12FenceSubmitInfoKHR;
  struct SemaphoreGetWin32HandleInfoKHR;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_semaphore_fd ===
  struct ImportSemaphoreFdInfoKHR;
  struct SemaphoreGetFdInfoKHR;

  //=== VK_KHR_push_descriptor ===
  struct PhysicalDevicePushDescriptorPropertiesKHR;

  //=== VK_EXT_conditional_rendering ===
  struct ConditionalRenderingBeginInfoEXT;
  struct PhysicalDeviceConditionalRenderingFeaturesEXT;
  struct CommandBufferInheritanceConditionalRenderingInfoEXT;

  //=== VK_KHR_incremental_present ===
  struct PresentRegionsKHR;
  struct PresentRegionKHR;
  struct RectLayerKHR;

  //=== VK_NV_clip_space_w_scaling ===
  struct ViewportWScalingNV;
  struct PipelineViewportWScalingStateCreateInfoNV;

  //=== VK_EXT_display_surface_counter ===
  struct SurfaceCapabilities2EXT;

  //=== VK_EXT_display_control ===
  struct DisplayPowerInfoEXT;
  struct DeviceEventInfoEXT;
  struct DisplayEventInfoEXT;
  struct SwapchainCounterCreateInfoEXT;

  //=== VK_GOOGLE_display_timing ===
  struct RefreshCycleDurationGOOGLE;
  struct PastPresentationTimingGOOGLE;
  struct PresentTimesInfoGOOGLE;
  struct PresentTimeGOOGLE;

  //=== VK_NVX_multiview_per_view_attributes ===
  struct PhysicalDeviceMultiviewPerViewAttributesPropertiesNVX;

  //=== VK_NV_viewport_swizzle ===
  struct ViewportSwizzleNV;
  struct PipelineViewportSwizzleStateCreateInfoNV;

  //=== VK_EXT_discard_rectangles ===
  struct PhysicalDeviceDiscardRectanglePropertiesEXT;
  struct PipelineDiscardRectangleStateCreateInfoEXT;

  //=== VK_EXT_conservative_rasterization ===
  struct PhysicalDeviceConservativeRasterizationPropertiesEXT;
  struct PipelineRasterizationConservativeStateCreateInfoEXT;

  //=== VK_EXT_depth_clip_enable ===
  struct PhysicalDeviceDepthClipEnableFeaturesEXT;
  struct PipelineRasterizationDepthClipStateCreateInfoEXT;

  //=== VK_EXT_hdr_metadata ===
  struct HdrMetadataEXT;
  struct XYColorEXT;

  //=== VK_KHR_shared_presentable_image ===
  struct SharedPresentSurfaceCapabilitiesKHR;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_KHR_external_fence_win32 ===
  struct ImportFenceWin32HandleInfoKHR;
  struct ExportFenceWin32HandleInfoKHR;
  struct FenceGetWin32HandleInfoKHR;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_KHR_external_fence_fd ===
  struct ImportFenceFdInfoKHR;
  struct FenceGetFdInfoKHR;

  //=== VK_KHR_performance_query ===
  struct PhysicalDevicePerformanceQueryFeaturesKHR;
  struct PhysicalDevicePerformanceQueryPropertiesKHR;
  struct PerformanceCounterKHR;
  struct PerformanceCounterDescriptionKHR;
  struct QueryPoolPerformanceCreateInfoKHR;
  union PerformanceCounterResultKHR;
  struct AcquireProfilingLockInfoKHR;
  struct PerformanceQuerySubmitInfoKHR;

  //=== VK_KHR_get_surface_capabilities2 ===
  struct PhysicalDeviceSurfaceInfo2KHR;
  struct SurfaceCapabilities2KHR;
  struct SurfaceFormat2KHR;

  //=== VK_KHR_get_display_properties2 ===
  struct DisplayProperties2KHR;
  struct DisplayPlaneProperties2KHR;
  struct DisplayModeProperties2KHR;
  struct DisplayPlaneInfo2KHR;
  struct DisplayPlaneCapabilities2KHR;

#if defined( VK_USE_PLATFORM_IOS_MVK )
  //=== VK_MVK_ios_surface ===
  struct IOSSurfaceCreateInfoMVK;
#endif /*VK_USE_PLATFORM_IOS_MVK*/

#if defined( VK_USE_PLATFORM_MACOS_MVK )
  //=== VK_MVK_macos_surface ===
  struct MacOSSurfaceCreateInfoMVK;
#endif /*VK_USE_PLATFORM_MACOS_MVK*/

  //=== VK_EXT_debug_utils ===
  struct DebugUtilsLabelEXT;
  struct DebugUtilsMessengerCallbackDataEXT;
  struct DebugUtilsMessengerCreateInfoEXT;
  struct DebugUtilsObjectNameInfoEXT;
  struct DebugUtilsObjectTagInfoEXT;

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
  //=== VK_ANDROID_external_memory_android_hardware_buffer ===
  struct AndroidHardwareBufferUsageANDROID;
  struct AndroidHardwareBufferPropertiesANDROID;
  struct AndroidHardwareBufferFormatPropertiesANDROID;
  struct ImportAndroidHardwareBufferInfoANDROID;
  struct MemoryGetAndroidHardwareBufferInfoANDROID;
  struct ExternalFormatANDROID;
  struct AndroidHardwareBufferFormatProperties2ANDROID;
#endif /*VK_USE_PLATFORM_ANDROID_KHR*/

  //=== VK_EXT_sample_locations ===
  struct SampleLocationEXT;
  struct SampleLocationsInfoEXT;
  struct AttachmentSampleLocationsEXT;
  struct SubpassSampleLocationsEXT;
  struct RenderPassSampleLocationsBeginInfoEXT;
  struct PipelineSampleLocationsStateCreateInfoEXT;
  struct PhysicalDeviceSampleLocationsPropertiesEXT;
  struct MultisamplePropertiesEXT;

  //=== VK_EXT_blend_operation_advanced ===
  struct PhysicalDeviceBlendOperationAdvancedFeaturesEXT;
  struct PhysicalDeviceBlendOperationAdvancedPropertiesEXT;
  struct PipelineColorBlendAdvancedStateCreateInfoEXT;

  //=== VK_NV_fragment_coverage_to_color ===
  struct PipelineCoverageToColorStateCreateInfoNV;

  //=== VK_KHR_acceleration_structure ===
  union DeviceOrHostAddressKHR;
  union DeviceOrHostAddressConstKHR;
  struct AccelerationStructureBuildRangeInfoKHR;
  struct AabbPositionsKHR;
  using AabbPositionsNV = AabbPositionsKHR;
  struct AccelerationStructureGeometryTrianglesDataKHR;
  struct TransformMatrixKHR;
  using TransformMatrixNV = TransformMatrixKHR;
  struct AccelerationStructureBuildGeometryInfoKHR;
  struct AccelerationStructureGeometryAabbsDataKHR;
  struct AccelerationStructureInstanceKHR;
  using AccelerationStructureInstanceNV = AccelerationStructureInstanceKHR;
  struct AccelerationStructureGeometryInstancesDataKHR;
  union AccelerationStructureGeometryDataKHR;
  struct AccelerationStructureGeometryKHR;
  struct AccelerationStructureCreateInfoKHR;
  struct WriteDescriptorSetAccelerationStructureKHR;
  struct PhysicalDeviceAccelerationStructureFeaturesKHR;
  struct PhysicalDeviceAccelerationStructurePropertiesKHR;
  struct AccelerationStructureDeviceAddressInfoKHR;
  struct AccelerationStructureVersionInfoKHR;
  struct CopyAccelerationStructureToMemoryInfoKHR;
  struct CopyMemoryToAccelerationStructureInfoKHR;
  struct CopyAccelerationStructureInfoKHR;
  struct AccelerationStructureBuildSizesInfoKHR;

  //=== VK_NV_framebuffer_mixed_samples ===
  struct PipelineCoverageModulationStateCreateInfoNV;

  //=== VK_NV_shader_sm_builtins ===
  struct PhysicalDeviceShaderSMBuiltinsPropertiesNV;
  struct PhysicalDeviceShaderSMBuiltinsFeaturesNV;

  //=== VK_EXT_image_drm_format_modifier ===
  struct DrmFormatModifierPropertieslist_extend;
  struct DrmFormatModifierPropertiesEXT;
  struct PhysicalDeviceImageDrmFormatModifierInfoEXT;
  struct ImageDrmFormatModifierListCreateInfoEXT;
  struct ImageDrmFormatModifierExplicitCreateInfoEXT;
  struct ImageDrmFormatModifierPropertiesEXT;
  struct DrmFormatModifierPropertiesList2EXT;
  struct DrmFormatModifierProperties2EXT;

  //=== VK_EXT_validation_cache ===
  struct ValidationCacheCreateInfoEXT;
  struct ShaderModuleValidationCacheCreateInfoEXT;

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  //=== VK_KHR_portability_subset ===
  struct PhysicalDevicePortabilitySubsetFeaturesKHR;
  struct PhysicalDevicePortabilitySubsetPropertiesKHR;
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

  //=== VK_NV_shading_rate_image ===
  struct ShadingRatePaletteNV;
  struct PipelineViewportShadingRateImageStateCreateInfoNV;
  struct PhysicalDeviceShadingRateImageFeaturesNV;
  struct PhysicalDeviceShadingRateImagePropertiesNV;
  struct CoarseSampleLocationNV;
  struct CoarseSampleOrderCustomNV;
  struct PipelineViewportCoarseSampleOrderStateCreateInfoNV;

  //=== VK_NV_ray_tracing ===
  struct RayTracingShaderGroupCreateInfoNV;
  struct RayTracingPipelineCreateInfoNV;
  struct GeometryTrianglesNV;
  struct GeometryAABBNV;
  struct GeometryDataNV;
  struct GeometryNV;
  struct AccelerationStructureInfoNV;
  struct AccelerationStructureCreateInfoNV;
  struct BindAccelerationStructureMemoryInfoNV;
  struct WriteDescriptorSetAccelerationStructureNV;
  struct AccelerationStructureMemoryRequirementsInfoNV;
  struct PhysicalDeviceRayTracingPropertiesNV;

  //=== VK_NV_representative_fragment_test ===
  struct PhysicalDeviceRepresentativeFragmentTestFeaturesNV;
  struct PipelineRepresentativeFragmentTestStateCreateInfoNV;

  //=== VK_EXT_filter_cubic ===
  struct PhysicalDeviceImageViewImageFormatInfoEXT;
  struct FilterCubicImageViewImageFormatPropertiesEXT;

  //=== VK_EXT_external_memory_host ===
  struct ImportMemoryHostPointerInfoEXT;
  struct MemoryHostPointerPropertiesEXT;
  struct PhysicalDeviceExternalMemoryHostPropertiesEXT;

  //=== VK_KHR_shader_clock ===
  struct PhysicalDeviceShaderClockFeaturesKHR;

  //=== VK_AMD_pipeline_compiler_control ===
  struct PipelineCompilerControlCreateInfoAMD;

  //=== VK_EXT_calibrated_timestamps ===
  struct CalibratedTimestampInfoEXT;

  //=== VK_AMD_shader_core_properties ===
  struct PhysicalDeviceShaderCorePropertiesAMD;

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  //=== VK_EXT_video_decode_h265 ===
  struct VideoDecodeH265ProfileInfoEXT;
  struct VideoDecodeH265CapabilitiesEXT;
  struct VideoDecodeH265SessionParametersCreateInfoEXT;
  struct VideoDecodeH265SessionParametersAddInfoEXT;
  struct VideoDecodeH265PictureInfoEXT;
  struct VideoDecodeH265DpbSlotInfoEXT;
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

  //=== VK_KHR_global_priority ===
  struct DeviceQueueGlobalPriorityCreateInfoKHR;
  using DeviceQueueGlobalPriorityCreateInfoEXT = DeviceQueueGlobalPriorityCreateInfoKHR;
  struct PhysicalDeviceGlobalPriorityQueryFeaturesKHR;
  using PhysicalDeviceGlobalPriorityQueryFeaturesEXT = PhysicalDeviceGlobalPriorityQueryFeaturesKHR;
  struct QueueFamilyGlobalPriorityPropertiesKHR;
  using QueueFamilyGlobalPriorityPropertiesEXT = QueueFamilyGlobalPriorityPropertiesKHR;

  //=== VK_AMD_memory_overallocation_behavior ===
  struct DeviceMemoryOverallocationCreateInfoAMD;

  //=== VK_EXT_vertex_attribute_divisor ===
  struct PhysicalDeviceVertexAttributeDivisorPropertiesEXT;
  struct VertexInputBindingDivisorDescriptionEXT;
  struct PipelineVertexInputDivisorStateCreateInfoEXT;
  struct PhysicalDeviceVertexAttributeDivisorFeaturesEXT;

#if defined( VK_USE_PLATFORM_GGP )
  //=== VK_GGP_frame_token ===
  struct PresentFrameTokenGGP;
#endif /*VK_USE_PLATFORM_GGP*/

  //=== VK_NV_compute_shader_derivatives ===
  struct PhysicalDeviceComputeShaderDerivativesFeaturesNV;

  //=== VK_NV_mesh_shader ===
  struct PhysicalDeviceMeshShaderFeaturesNV;
  struct PhysicalDeviceMeshShaderPropertiesNV;
  struct DrawMeshTasksIndirectCommandNV;

  //=== VK_NV_shader_image_footprint ===
  struct PhysicalDeviceShaderImageFootprintFeaturesNV;

  //=== VK_NV_scissor_exclusive ===
  struct PipelineViewportExclusiveScissorStateCreateInfoNV;
  struct PhysicalDeviceExclusiveScissorFeaturesNV;

  //=== VK_NV_device_diagnostic_checkpoints ===
  struct QueueFamilyCheckpointPropertiesNV;
  struct CheckpointDataNV;

  //=== VK_INTEL_shader_integer_functions2 ===
  struct PhysicalDeviceShaderIntegerFunctions2FeaturesINTEL;

  //=== VK_INTEL_performance_query ===
  union PerformanceValueDataINTEL;
  struct PerformanceValueINTEL;
  struct InitializePerformanceApiInfoINTEL;
  struct QueryPoolPerformanceQueryCreateInfoINTEL;
  using QueryPoolCreateInfoINTEL = QueryPoolPerformanceQueryCreateInfoINTEL;
  struct PerformanceMarkerInfoINTEL;
  struct PerformanceStreamMarkerInfoINTEL;
  struct PerformanceOverrideInfoINTEL;
  struct PerformanceConfigurationAcquireInfoINTEL;

  //=== VK_EXT_pci_bus_info ===
  struct PhysicalDevicePCIBusInfoPropertiesEXT;

  //=== VK_AMD_display_native_hdr ===
  struct DisplayNativeHdrSurfaceCapabilitiesAMD;
  struct SwapchainDisplayNativeHdrCreateInfoAMD;

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_imagepipe_surface ===
  struct ImagePipeSurfaceCreateInfoFUCHSIA;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_METAL_EXT )
  //=== VK_EXT_metal_surface ===
  struct MetalSurfaceCreateInfoEXT;
#endif /*VK_USE_PLATFORM_METAL_EXT*/

  //=== VK_EXT_fragment_density_map ===
  struct PhysicalDeviceFragmentDensityMapFeaturesEXT;
  struct PhysicalDeviceFragmentDensityMapPropertiesEXT;
  struct RenderPassFragmentDensityMapCreateInfoEXT;

  //=== VK_KHR_fragment_shading_rate ===
  struct FragmentShadingRateAttachmentInfoKHR;
  struct PipelineFragmentShadingRateStateCreateInfoKHR;
  struct PhysicalDeviceFragmentShadingRateFeaturesKHR;
  struct PhysicalDeviceFragmentShadingRatePropertiesKHR;
  struct PhysicalDeviceFragmentShadingRateKHR;

  //=== VK_AMD_shader_core_properties2 ===
  struct PhysicalDeviceShaderCoreProperties2AMD;

  //=== VK_AMD_device_coherent_memory ===
  struct PhysicalDeviceCoherentMemoryFeaturesAMD;

  //=== VK_EXT_shader_image_atomic_int64 ===
  struct PhysicalDeviceShaderImageAtomicInt64FeaturesEXT;

  //=== VK_EXT_memory_budget ===
  struct PhysicalDeviceMemoryBudgetPropertiesEXT;

  //=== VK_EXT_memory_priority ===
  struct PhysicalDeviceMemoryPriorityFeaturesEXT;
  struct MemoryPriorityAllocateInfoEXT;

  //=== VK_KHR_surface_protected_capabilities ===
  struct SurfaceProtectedCapabilitiesKHR;

  //=== VK_NV_dedicated_allocation_image_aliasing ===
  struct PhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;

  //=== VK_EXT_buffer_device_address ===
  struct PhysicalDeviceBufferDeviceAddressFeaturesEXT;
  using PhysicalDeviceBufferAddressFeaturesEXT = PhysicalDeviceBufferDeviceAddressFeaturesEXT;
  struct BufferDeviceAddressCreateInfoEXT;

  //=== VK_EXT_validation_features ===
  struct ValidationFeaturesEXT;

  //=== VK_KHR_present_wait ===
  struct PhysicalDevicePresentWaitFeaturesKHR;

  //=== VK_NV_cooperative_matrix ===
  struct CooperativeMatrixPropertiesNV;
  struct PhysicalDeviceCooperativeMatrixFeaturesNV;
  struct PhysicalDeviceCooperativeMatrixPropertiesNV;

  //=== VK_NV_coverage_reduction_mode ===
  struct PhysicalDeviceCoverageReductionModeFeaturesNV;
  struct PipelineCoverageReductionStateCreateInfoNV;
  struct FramebufferMixedSamplesCombinationNV;

  //=== VK_EXT_fragment_shader_interlock ===
  struct PhysicalDeviceFragmentShaderInterlockFeaturesEXT;

  //=== VK_EXT_ycbcr_image_arrays ===
  struct PhysicalDeviceYcbcrImageArraysFeaturesEXT;

  //=== VK_EXT_provoking_vertex ===
  struct PhysicalDeviceProvokingVertexFeaturesEXT;
  struct PhysicalDeviceProvokingVertexPropertiesEXT;
  struct PipelineRasterizationProvokingVertexStateCreateInfoEXT;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
  //=== VK_EXT_full_screen_exclusive ===
  struct SurfaceFullScreenExclusiveInfoEXT;
  struct SurfaceCapabilitiesFullScreenExclusiveEXT;
  struct SurfaceFullScreenExclusiveWin32InfoEXT;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

  //=== VK_EXT_headless_surface ===
  struct HeadlessSurfaceCreateInfoEXT;

  //=== VK_EXT_line_rasterization ===
  struct PhysicalDeviceLineRasterizationFeaturesEXT;
  struct PhysicalDeviceLineRasterizationPropertiesEXT;
  struct PipelineRasterizationLineStateCreateInfoEXT;

  //=== VK_EXT_shader_atomic_float ===
  struct PhysicalDeviceShaderAtomicFloatFeaturesEXT;

  //=== VK_EXT_index_type_uint8 ===
  struct PhysicalDeviceIndexTypeUint8FeaturesEXT;

  //=== VK_EXT_extended_dynamic_state ===
  struct PhysicalDeviceExtendedDynamicStateFeaturesEXT;

  //=== VK_KHR_pipeline_executable_properties ===
  struct PhysicalDevicePipelineExecutablePropertiesFeaturesKHR;
  struct PipelineInfoKHR;
  using PipelineInfoEXT = PipelineInfoKHR;
  struct PipelineExecutablePropertiesKHR;
  struct PipelineExecutableInfoKHR;
  union PipelineExecutableStatisticValueKHR;
  struct PipelineExecutableStatisticKHR;
  struct PipelineExecutableInternalRepresentationKHR;

  //=== VK_EXT_shader_atomic_float2 ===
  struct PhysicalDeviceShaderAtomicFloat2FeaturesEXT;

  //=== VK_NV_device_generated_commands ===
  struct PhysicalDeviceDeviceGeneratedCommandsPropertiesNV;
  struct PhysicalDeviceDeviceGeneratedCommandsFeaturesNV;
  struct GraphicsShaderGroupCreateInfoNV;
  struct GraphicsPipelineShaderGroupsCreateInfoNV;
  struct BindShaderGroupIndirectCommandNV;
  struct BindIndexBufferIndirectCommandNV;
  struct BindVertexBufferIndirectCommandNV;
  struct SetStateFlagsIndirectCommandNV;
  struct IndirectCommandsStreamNV;
  struct IndirectCommandsLayoutTokenNV;
  struct IndirectCommandsLayoutCreateInfoNV;
  struct GeneratedCommandsInfoNV;
  struct GeneratedCommandsMemoryRequirementsInfoNV;

  //=== VK_NV_inherited_viewport_scissor ===
  struct PhysicalDeviceInheritedViewportScissorFeaturesNV;
  struct CommandBufferInheritanceViewportScissorInfoNV;

  //=== VK_EXT_texel_buffer_alignment ===
  struct PhysicalDeviceTexelBufferAlignmentFeaturesEXT;

  //=== VK_QCOM_render_pass_transform ===
  struct RenderPassTransformBeginInfoQCOM;
  struct CommandBufferInheritanceRenderPassTransformInfoQCOM;

  //=== VK_EXT_device_memory_report ===
  struct PhysicalDeviceDeviceMemoryReportFeaturesEXT;
  struct DeviceDeviceMemoryReportCreateInfoEXT;
  struct DeviceMemoryReportCallbackDataEXT;

  //=== VK_EXT_robustness2 ===
  struct PhysicalDeviceRobustness2FeaturesEXT;
  struct PhysicalDeviceRobustness2PropertiesEXT;

  //=== VK_EXT_custom_border_color ===
  struct SamplerCustomBorderColorCreateInfoEXT;
  struct PhysicalDeviceCustomBorderColorPropertiesEXT;
  struct PhysicalDeviceCustomBorderColorFeaturesEXT;

  //=== VK_KHR_pipeline_library ===
  struct PipelineLibraryCreateInfoKHR;

  //=== VK_KHR_present_id ===
  struct PresentIdKHR;
  struct PhysicalDevicePresentIdFeaturesKHR;

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  //=== VK_KHR_video_encode_queue ===
  struct VideoEncodeInfoKHR;
  struct VideoEncodeCapabilitiesKHR;
  struct VideoEncodeUsageInfoKHR;
  struct VideoEncodeRateControlInfoKHR;
  struct VideoEncodeRateControlLayerInfoKHR;
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

  //=== VK_NV_device_diagnostics_config ===
  struct PhysicalDeviceDiagnosticsConfigFeaturesNV;
  struct DeviceDiagnosticsConfigCreateInfoNV;

#if defined( VK_USE_PLATFORM_METAL_EXT )
  //=== VK_EXT_metal_objects ===
  struct ExportMetalObjectCreateInfoEXT;
  struct ExportMetalObjectsInfoEXT;
  struct ExportMetalDeviceInfoEXT;
  struct ExportMetalCommandQueueInfoEXT;
  struct ExportMetalBufferInfoEXT;
  struct ImportMetalBufferInfoEXT;
  struct ExportMetalTextureInfoEXT;
  struct ImportMetalTextureInfoEXT;
  struct ExportMetalIOSurfaceInfoEXT;
  struct ImportMetalIOSurfaceInfoEXT;
  struct ExportMetalSharedEventInfoEXT;
  struct ImportMetalSharedEventInfoEXT;
#endif /*VK_USE_PLATFORM_METAL_EXT*/

  //=== VK_KHR_synchronization2 ===
  struct QueueFamilyCheckpointProperties2NV;
  struct CheckpointData2NV;

  //=== VK_EXT_graphics_pipeline_library ===
  struct PhysicalDeviceGraphicsPipelineLibraryFeaturesEXT;
  struct PhysicalDeviceGraphicsPipelineLibraryPropertiesEXT;
  struct GraphicsPipelineLibraryCreateInfoEXT;

  //=== VK_AMD_shader_early_and_late_fragment_tests ===
  struct PhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD;

  //=== VK_KHR_fragment_shader_barycentric ===
  struct PhysicalDeviceFragmentShaderBarycentricFeaturesKHR;
  using PhysicalDeviceFragmentShaderBarycentricFeaturesNV = PhysicalDeviceFragmentShaderBarycentricFeaturesKHR;
  struct PhysicalDeviceFragmentShaderBarycentricPropertiesKHR;

  //=== VK_KHR_shader_subgroup_uniform_control_flow ===
  struct PhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR;

  //=== VK_NV_fragment_shading_rate_enums ===
  struct PhysicalDeviceFragmentShadingRateEnumsFeaturesNV;
  struct PhysicalDeviceFragmentShadingRateEnumsPropertiesNV;
  struct PipelineFragmentShadingRateEnumStateCreateInfoNV;

  //=== VK_NV_ray_tracing_motion_blur ===
  struct AccelerationStructureGeometryMotionTrianglesDataNV;
  struct AccelerationStructureMotionInfoNV;
  struct AccelerationStructureMotionInstanceNV;
  union AccelerationStructureMotionInstanceDataNV;
  struct AccelerationStructureMatrixMotionInstanceNV;
  struct AccelerationStructureSRTMotionInstanceNV;
  struct SRTDataNV;
  struct PhysicalDeviceRayTracingMotionBlurFeaturesNV;

  //=== VK_EXT_mesh_shader ===
  struct PhysicalDeviceMeshShaderFeaturesEXT;
  struct PhysicalDeviceMeshShaderPropertiesEXT;
  struct DrawMeshTasksIndirectCommandEXT;

  //=== VK_EXT_ycbcr_2plane_444_formats ===
  struct PhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT;

  //=== VK_EXT_fragment_density_map2 ===
  struct PhysicalDeviceFragmentDensityMap2FeaturesEXT;
  struct PhysicalDeviceFragmentDensityMap2PropertiesEXT;

  //=== VK_QCOM_rotated_copy_commands ===
  struct CopyCommandTransformInfoQCOM;

  //=== VK_KHR_workgroup_memory_explicit_layout ===
  struct PhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR;

  //=== VK_EXT_image_compression_control ===
  struct PhysicalDeviceImageCompressionControlFeaturesEXT;
  struct ImageCompressionControlEXT;
  struct SubresourceLayout2EXT;
  struct ImageSubresource2EXT;
  struct ImageCompressionPropertiesEXT;

  //=== VK_EXT_attachment_feedback_loop_layout ===
  struct PhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT;

  //=== VK_EXT_4444_formats ===
  struct PhysicalDevice4444FormatsFeaturesEXT;

  //=== VK_EXT_rgba10x6_formats ===
  struct PhysicalDeviceRGBA10X6FormatsFeaturesEXT;

#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
  //=== VK_EXT_directfb_surface ===
  struct DirectFBSurfaceCreateInfoEXT;
#endif /*VK_USE_PLATFORM_DIRECTFB_EXT*/

  //=== VK_KHR_ray_tracing_pipeline ===
  struct RayTracingShaderGroupCreateInfoKHR;
  struct RayTracingPipelineCreateInfoKHR;
  struct PhysicalDeviceRayTracingPipelineFeaturesKHR;
  struct PhysicalDeviceRayTracingPipelinePropertiesKHR;
  struct StridedDeviceAddressRegionKHR;
  struct TraceRaysIndirectCommandKHR;
  struct RayTracingPipelineInterfaceCreateInfoKHR;

  //=== VK_KHR_ray_query ===
  struct PhysicalDeviceRayQueryFeaturesKHR;

  //=== VK_VALVE_mutable_descriptor_type ===
  struct PhysicalDeviceMutableDescriptorTypeFeaturesVALVE;
  struct MutableDescriptorTypeListVALVE;
  struct MutableDescriptorTypeCreateInfoVALVE;

  //=== VK_EXT_vertex_input_dynamic_state ===
  struct PhysicalDeviceVertexInputDynamicStateFeaturesEXT;
  struct VertexInputBindingDescription2EXT;
  struct VertexInputAttributeDescription2EXT;

  //=== VK_EXT_physical_device_drm ===
  struct PhysicalDeviceDrmPropertiesEXT;

  //=== VK_EXT_depth_clip_control ===
  struct PhysicalDeviceDepthClipControlFeaturesEXT;
  struct PipelineViewportDepthClipControlCreateInfoEXT;

  //=== VK_EXT_primitive_topology_list_restart ===
  struct PhysicalDevicePrimitiveTopologyListRestartFeaturesEXT;

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_external_memory ===
  struct ImportMemoryZirconHandleInfoFUCHSIA;
  struct MemoryZirconHandlePropertiesFUCHSIA;
  struct MemoryGetZirconHandleInfoFUCHSIA;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_external_semaphore ===
  struct ImportSemaphoreZirconHandleInfoFUCHSIA;
  struct SemaphoreGetZirconHandleInfoFUCHSIA;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
  //=== VK_FUCHSIA_buffer_collection ===
  struct BufferCollectionCreateInfoFUCHSIA;
  struct ImportMemoryBufferCollectionFUCHSIA;
  struct BufferCollectionImageCreateInfoFUCHSIA;
  struct BufferConstraintsInfoFUCHSIA;
  struct BufferCollectionBufferCreateInfoFUCHSIA;
  struct BufferCollectionPropertiesFUCHSIA;
  struct SysmemColorSpaceFUCHSIA;
  struct ImageConstraintsInfoFUCHSIA;
  struct ImageFormatConstraintsInfoFUCHSIA;
  struct BufferCollectionConstraintsInfoFUCHSIA;
#endif /*VK_USE_PLATFORM_FUCHSIA*/

  //=== VK_HUAWEI_subpass_shading ===
  struct SubpassShadingPipelineCreateInfoHUAWEI;
  struct PhysicalDeviceSubpassShadingFeaturesHUAWEI;
  struct PhysicalDeviceSubpassShadingPropertiesHUAWEI;

  //=== VK_HUAWEI_invocation_mask ===
  struct PhysicalDeviceInvocationMaskFeaturesHUAWEI;

  //=== VK_NV_external_memory_rdma ===
  struct MemoryGetRemoteAddressInfoNV;
  struct PhysicalDeviceExternalMemoryRDMAFeaturesNV;

  //=== VK_EXT_pipeline_properties ===
  struct PipelinePropertiesIdentifierEXT;
  struct PhysicalDevicePipelinePropertiesFeaturesEXT;

  //=== VK_EXT_multisampled_render_to_single_sampled ===
  struct PhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT;
  struct SubpassResolvePerformanceQueryEXT;
  struct MultisampledRenderToSingleSampledInfoEXT;

  //=== VK_EXT_extended_dynamic_state2 ===
  struct PhysicalDeviceExtendedDynamicState2FeaturesEXT;

#if defined( VK_USE_PLATFORM_SCREEN_QNX )
  //=== VK_QNX_screen_surface ===
  struct ScreenSurfaceCreateInfoQNX;
#endif /*VK_USE_PLATFORM_SCREEN_QNX*/

  //=== VK_EXT_color_write_enable ===
  struct PhysicalDeviceColorWriteEnableFeaturesEXT;
  struct PipelineColorWriteCreateInfoEXT;

  //=== VK_EXT_primitives_generated_query ===
  struct PhysicalDevicePrimitivesGeneratedQueryFeaturesEXT;

  //=== VK_KHR_ray_tracing_maintenance1 ===
  struct PhysicalDeviceRayTracingMaintenance1FeaturesKHR;
  struct TraceRaysIndirectCommand2KHR;

  //=== VK_EXT_image_view_min_lod ===
  struct PhysicalDeviceImageViewMinLodFeaturesEXT;
  struct ImageViewMinLodCreateInfoEXT;

  //=== VK_EXT_multi_draw ===
  struct PhysicalDeviceMultiDrawFeaturesEXT;
  struct PhysicalDeviceMultiDrawPropertiesEXT;
  struct MultiDrawInfoEXT;
  struct MultiDrawIndexedInfoEXT;

  //=== VK_EXT_image_2d_view_of_3d ===
  struct PhysicalDeviceImage2DViewOf3DFeaturesEXT;

  //=== VK_EXT_border_color_swizzle ===
  struct PhysicalDeviceBorderColorSwizzleFeaturesEXT;
  struct SamplerBorderColorComponentMappingCreateInfoEXT;

  //=== VK_EXT_pageable_device_local_memory ===
  struct PhysicalDevicePageableDeviceLocalMemoryFeaturesEXT;

  //=== VK_VALVE_descriptor_set_host_mapping ===
  struct PhysicalDeviceDescriptorSetHostMappingFeaturesVALVE;
  struct DescriptorSetBindingReferenceVALVE;
  struct DescriptorSetLayoutHostMappingInfoVALVE;

  //=== VK_EXT_depth_clamp_zero_one ===
  struct PhysicalDeviceDepthClampZeroOneFeaturesEXT;

  //=== VK_EXT_non_seamless_cube_map ===
  struct PhysicalDeviceNonSeamlessCubeMapFeaturesEXT;

  //=== VK_QCOM_fragment_density_map_offset ===
  struct PhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM;
  struct PhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM;
  struct SubpassFragmentDensityMapOffsetEndInfoQCOM;

  //=== VK_NV_linear_color_attachment ===
  struct PhysicalDeviceLinearColorAttachmentFeaturesNV;

  //=== VK_EXT_image_compression_control_swapchain ===
  struct PhysicalDeviceImageCompressionControlSwapchainFeaturesEXT;

  //=== VK_QCOM_image_processing ===
  struct ImageViewSampleWeightCreateInfoQCOM;
  struct PhysicalDeviceImageProcessingFeaturesQCOM;
  struct PhysicalDeviceImageProcessingPropertiesQCOM;

  //=== VK_EXT_subpass_merge_feedback ===
  struct PhysicalDeviceSubpassMergeFeedbackFeaturesEXT;
  struct RenderPassCreationControlEXT;
  struct RenderPassCreationFeedbackInfoEXT;
  struct RenderPassCreationFeedbackCreateInfoEXT;
  struct RenderPassSubpassFeedbackInfoEXT;
  struct RenderPassSubpassFeedbackCreateInfoEXT;

  //=== VK_EXT_shader_module_identifier ===
  struct PhysicalDeviceShaderModuleIdentifierFeaturesEXT;
  struct PhysicalDeviceShaderModuleIdentifierPropertiesEXT;
  struct PipelineShaderStageModuleIdentifierCreateInfoEXT;
  struct ShaderModuleIdentifierEXT;

  //=== VK_EXT_rasterization_order_attachment_access ===
  struct PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT;
  using PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM = PhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT;

  //=== VK_EXT_legacy_dithering ===
  struct PhysicalDeviceLegacyDitheringFeaturesEXT;

  //=== VK_QCOM_tile_properties ===
  struct PhysicalDeviceTilePropertiesFeaturesQCOM;
  struct TilePropertiesQCOM;

  //=== VK_SEC_amigo_profiling ===
  struct PhysicalDeviceAmigoProfilingFeaturesSEC;
  struct AmigoProfilingSubmitInfoSEC;

  //===============
  //=== HANDLEs ===
  //===============

  class SurfaceKHR
  {
  public:
    using CType      = VkSurfaceKHR;
    using NativeType = VkSurfaceKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eSurfaceKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSurfaceKHR;

  public:
    VULKAN_HPP_CONSTEXPR         SurfaceKHR() = default;
    VULKAN_HPP_CONSTEXPR         SurfaceKHR( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT SurfaceKHR( VkSurfaceKHR surfaceKHR ) VULKAN_HPP_NOEXCEPT : m_surfaceKHR( surfaceKHR ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    SurfaceKHR & operator=( VkSurfaceKHR surfaceKHR ) VULKAN_HPP_NOEXCEPT
    {
      m_surfaceKHR = surfaceKHR;
      return *this;
    }
#endif

    SurfaceKHR & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_surfaceKHR = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( SurfaceKHR const & ) const = default;
#else
    bool operator==( SurfaceKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_surfaceKHR == rhs.m_surfaceKHR;
    }

    bool operator!=( SurfaceKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_surfaceKHR != rhs.m_surfaceKHR;
    }

    bool operator<( SurfaceKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_surfaceKHR < rhs.m_surfaceKHR;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkSurfaceKHR() const VULKAN_HPP_NOEXCEPT
    {
      return m_surfaceKHR;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_surfaceKHR != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_surfaceKHR == VK_NULL_HANDLE;
    }

  private:
    VkSurfaceKHR m_surfaceKHR = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eSurfaceKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::SurfaceKHR;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSurfaceKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::SurfaceKHR;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::SurfaceKHR>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class DebugReportCallbackEXT
  {
  public:
    using CType      = VkDebugReportCallbackEXT;
    using NativeType = VkDebugReportCallbackEXT;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDebugReportCallbackEXT;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDebugReportCallbackEXT;

  public:
    VULKAN_HPP_CONSTEXPR         DebugReportCallbackEXT() = default;
    VULKAN_HPP_CONSTEXPR         DebugReportCallbackEXT( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT DebugReportCallbackEXT( VkDebugReportCallbackEXT debugReportCallbackEXT ) VULKAN_HPP_NOEXCEPT
      : m_debugReportCallbackEXT( debugReportCallbackEXT )
    {
    }

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    DebugReportCallbackEXT & operator=( VkDebugReportCallbackEXT debugReportCallbackEXT ) VULKAN_HPP_NOEXCEPT
    {
      m_debugReportCallbackEXT = debugReportCallbackEXT;
      return *this;
    }
#endif

    DebugReportCallbackEXT & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_debugReportCallbackEXT = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( DebugReportCallbackEXT const & ) const = default;
#else
    bool operator==( DebugReportCallbackEXT const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_debugReportCallbackEXT == rhs.m_debugReportCallbackEXT;
    }

    bool operator!=( DebugReportCallbackEXT const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_debugReportCallbackEXT != rhs.m_debugReportCallbackEXT;
    }

    bool operator<( DebugReportCallbackEXT const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_debugReportCallbackEXT < rhs.m_debugReportCallbackEXT;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkDebugReportCallbackEXT() const VULKAN_HPP_NOEXCEPT
    {
      return m_debugReportCallbackEXT;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_debugReportCallbackEXT != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_debugReportCallbackEXT == VK_NULL_HANDLE;
    }

  private:
    VkDebugReportCallbackEXT m_debugReportCallbackEXT = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eDebugReportCallbackEXT>
  {
    using Type = VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDebugReportCallbackEXT>
  {
    using Type = VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class DebugUtilsMessengerEXT
  {
  public:
    using CType      = VkDebugUtilsMessengerEXT;
    using NativeType = VkDebugUtilsMessengerEXT;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDebugUtilsMessengerEXT;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:
    VULKAN_HPP_CONSTEXPR         DebugUtilsMessengerEXT() = default;
    VULKAN_HPP_CONSTEXPR         DebugUtilsMessengerEXT( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT DebugUtilsMessengerEXT( VkDebugUtilsMessengerEXT debugUtilsMessengerEXT ) VULKAN_HPP_NOEXCEPT
      : m_debugUtilsMessengerEXT( debugUtilsMessengerEXT )
    {
    }

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    DebugUtilsMessengerEXT & operator=( VkDebugUtilsMessengerEXT debugUtilsMessengerEXT ) VULKAN_HPP_NOEXCEPT
    {
      m_debugUtilsMessengerEXT = debugUtilsMessengerEXT;
      return *this;
    }
#endif

    DebugUtilsMessengerEXT & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_debugUtilsMessengerEXT = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( DebugUtilsMessengerEXT const & ) const = default;
#else
    bool operator==( DebugUtilsMessengerEXT const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_debugUtilsMessengerEXT == rhs.m_debugUtilsMessengerEXT;
    }

    bool operator!=( DebugUtilsMessengerEXT const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_debugUtilsMessengerEXT != rhs.m_debugUtilsMessengerEXT;
    }

    bool operator<( DebugUtilsMessengerEXT const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_debugUtilsMessengerEXT < rhs.m_debugUtilsMessengerEXT;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkDebugUtilsMessengerEXT() const VULKAN_HPP_NOEXCEPT
    {
      return m_debugUtilsMessengerEXT;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_debugUtilsMessengerEXT != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_debugUtilsMessengerEXT == VK_NULL_HANDLE;
    }

  private:
    VkDebugUtilsMessengerEXT m_debugUtilsMessengerEXT = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eDebugUtilsMessengerEXT>
  {
    using Type = VULKAN_HPP_NAMESPACE::DebugUtilsMessengerEXT;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::DebugUtilsMessengerEXT>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class DisplayKHR
  {
  public:
    using CType      = VkDisplayKHR;
    using NativeType = VkDisplayKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDisplayKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDisplayKHR;

  public:
    VULKAN_HPP_CONSTEXPR         DisplayKHR() = default;
    VULKAN_HPP_CONSTEXPR         DisplayKHR( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT DisplayKHR( VkDisplayKHR displayKHR ) VULKAN_HPP_NOEXCEPT : m_displayKHR( displayKHR ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    DisplayKHR & operator=( VkDisplayKHR displayKHR ) VULKAN_HPP_NOEXCEPT
    {
      m_displayKHR = displayKHR;
      return *this;
    }
#endif

    DisplayKHR & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_displayKHR = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( DisplayKHR const & ) const = default;
#else
    bool operator==( DisplayKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_displayKHR == rhs.m_displayKHR;
    }

    bool operator!=( DisplayKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_displayKHR != rhs.m_displayKHR;
    }

    bool operator<( DisplayKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_displayKHR < rhs.m_displayKHR;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkDisplayKHR() const VULKAN_HPP_NOEXCEPT
    {
      return m_displayKHR;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_displayKHR != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_displayKHR == VK_NULL_HANDLE;
    }

  private:
    VkDisplayKHR m_displayKHR = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eDisplayKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::DisplayKHR;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDisplayKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::DisplayKHR;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::DisplayKHR>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class SwapchainKHR
  {
  public:
    using CType      = VkSwapchainKHR;
    using NativeType = VkSwapchainKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eSwapchainKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSwapchainKHR;

  public:
    VULKAN_HPP_CONSTEXPR         SwapchainKHR() = default;
    VULKAN_HPP_CONSTEXPR         SwapchainKHR( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT SwapchainKHR( VkSwapchainKHR swapchainKHR ) VULKAN_HPP_NOEXCEPT : m_swapchainKHR( swapchainKHR ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    SwapchainKHR & operator=( VkSwapchainKHR swapchainKHR ) VULKAN_HPP_NOEXCEPT
    {
      m_swapchainKHR = swapchainKHR;
      return *this;
    }
#endif

    SwapchainKHR & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_swapchainKHR = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( SwapchainKHR const & ) const = default;
#else
    bool operator==( SwapchainKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_swapchainKHR == rhs.m_swapchainKHR;
    }

    bool operator!=( SwapchainKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_swapchainKHR != rhs.m_swapchainKHR;
    }

    bool operator<( SwapchainKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_swapchainKHR < rhs.m_swapchainKHR;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkSwapchainKHR() const VULKAN_HPP_NOEXCEPT
    {
      return m_swapchainKHR;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_swapchainKHR != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_swapchainKHR == VK_NULL_HANDLE;
    }

  private:
    VkSwapchainKHR m_swapchainKHR = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eSwapchainKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::SwapchainKHR;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSwapchainKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::SwapchainKHR;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::SwapchainKHR>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class Semaphore
  {
  public:
    using CType      = VkSemaphore;
    using NativeType = VkSemaphore;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eSemaphore;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSemaphore;

  public:
    VULKAN_HPP_CONSTEXPR         Semaphore() = default;
    VULKAN_HPP_CONSTEXPR         Semaphore( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT Semaphore( VkSemaphore semaphore ) VULKAN_HPP_NOEXCEPT : m_semaphore( semaphore ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    Semaphore & operator=( VkSemaphore semaphore ) VULKAN_HPP_NOEXCEPT
    {
      m_semaphore = semaphore;
      return *this;
    }
#endif

    Semaphore & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_semaphore = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( Semaphore const & ) const = default;
#else
    bool operator==( Semaphore const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_semaphore == rhs.m_semaphore;
    }

    bool operator!=( Semaphore const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_semaphore != rhs.m_semaphore;
    }

    bool operator<( Semaphore const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_semaphore < rhs.m_semaphore;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkSemaphore() const VULKAN_HPP_NOEXCEPT
    {
      return m_semaphore;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_semaphore != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_semaphore == VK_NULL_HANDLE;
    }

  private:
    VkSemaphore m_semaphore = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eSemaphore>
  {
    using Type = VULKAN_HPP_NAMESPACE::Semaphore;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSemaphore>
  {
    using Type = VULKAN_HPP_NAMESPACE::Semaphore;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::Semaphore>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class Fence
  {
  public:
    using CType      = VkFence;
    using NativeType = VkFence;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eFence;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eFence;

  public:
    VULKAN_HPP_CONSTEXPR         Fence() = default;
    VULKAN_HPP_CONSTEXPR         Fence( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT Fence( VkFence fence ) VULKAN_HPP_NOEXCEPT : m_fence( fence ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    Fence & operator=( VkFence fence ) VULKAN_HPP_NOEXCEPT
    {
      m_fence = fence;
      return *this;
    }
#endif

    Fence & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_fence = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( Fence const & ) const = default;
#else
    bool operator==( Fence const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_fence == rhs.m_fence;
    }

    bool operator!=( Fence const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_fence != rhs.m_fence;
    }

    bool operator<( Fence const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_fence < rhs.m_fence;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkFence() const VULKAN_HPP_NOEXCEPT
    {
      return m_fence;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_fence != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_fence == VK_NULL_HANDLE;
    }

  private:
    VkFence m_fence = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eFence>
  {
    using Type = VULKAN_HPP_NAMESPACE::Fence;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eFence>
  {
    using Type = VULKAN_HPP_NAMESPACE::Fence;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::Fence>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class PerformanceConfigurationINTEL
  {
  public:
    using CType      = VkPerformanceConfigurationINTEL;
    using NativeType = VkPerformanceConfigurationINTEL;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::ePerformanceConfigurationINTEL;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:
    VULKAN_HPP_CONSTEXPR         PerformanceConfigurationINTEL() = default;
    VULKAN_HPP_CONSTEXPR         PerformanceConfigurationINTEL( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT PerformanceConfigurationINTEL( VkPerformanceConfigurationINTEL performanceConfigurationINTEL ) VULKAN_HPP_NOEXCEPT
      : m_performanceConfigurationINTEL( performanceConfigurationINTEL )
    {
    }

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    PerformanceConfigurationINTEL & operator=( VkPerformanceConfigurationINTEL performanceConfigurationINTEL ) VULKAN_HPP_NOEXCEPT
    {
      m_performanceConfigurationINTEL = performanceConfigurationINTEL;
      return *this;
    }
#endif

    PerformanceConfigurationINTEL & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_performanceConfigurationINTEL = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( PerformanceConfigurationINTEL const & ) const = default;
#else
    bool operator==( PerformanceConfigurationINTEL const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_performanceConfigurationINTEL == rhs.m_performanceConfigurationINTEL;
    }

    bool operator!=( PerformanceConfigurationINTEL const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_performanceConfigurationINTEL != rhs.m_performanceConfigurationINTEL;
    }

    bool operator<( PerformanceConfigurationINTEL const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_performanceConfigurationINTEL < rhs.m_performanceConfigurationINTEL;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkPerformanceConfigurationINTEL() const VULKAN_HPP_NOEXCEPT
    {
      return m_performanceConfigurationINTEL;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_performanceConfigurationINTEL != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_performanceConfigurationINTEL == VK_NULL_HANDLE;
    }

  private:
    VkPerformanceConfigurationINTEL m_performanceConfigurationINTEL = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::ePerformanceConfigurationINTEL>
  {
    using Type = VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class QueryPool
  {
  public:
    using CType      = VkQueryPool;
    using NativeType = VkQueryPool;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eQueryPool;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eQueryPool;

  public:
    VULKAN_HPP_CONSTEXPR         QueryPool() = default;
    VULKAN_HPP_CONSTEXPR         QueryPool( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT QueryPool( VkQueryPool queryPool ) VULKAN_HPP_NOEXCEPT : m_queryPool( queryPool ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    QueryPool & operator=( VkQueryPool queryPool ) VULKAN_HPP_NOEXCEPT
    {
      m_queryPool = queryPool;
      return *this;
    }
#endif

    QueryPool & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_queryPool = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( QueryPool const & ) const = default;
#else
    bool operator==( QueryPool const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_queryPool == rhs.m_queryPool;
    }

    bool operator!=( QueryPool const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_queryPool != rhs.m_queryPool;
    }

    bool operator<( QueryPool const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_queryPool < rhs.m_queryPool;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkQueryPool() const VULKAN_HPP_NOEXCEPT
    {
      return m_queryPool;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_queryPool != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_queryPool == VK_NULL_HANDLE;
    }

  private:
    VkQueryPool m_queryPool = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eQueryPool>
  {
    using Type = VULKAN_HPP_NAMESPACE::QueryPool;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eQueryPool>
  {
    using Type = VULKAN_HPP_NAMESPACE::QueryPool;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::QueryPool>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class Buffer
  {
  public:
    using CType      = VkBuffer;
    using NativeType = VkBuffer;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eBuffer;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eBuffer;

  public:
    VULKAN_HPP_CONSTEXPR         Buffer() = default;
    VULKAN_HPP_CONSTEXPR         Buffer( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT Buffer( VkBuffer buffer ) VULKAN_HPP_NOEXCEPT : m_buffer( buffer ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    Buffer & operator=( VkBuffer buffer ) VULKAN_HPP_NOEXCEPT
    {
      m_buffer = buffer;
      return *this;
    }
#endif

    Buffer & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_buffer = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( Buffer const & ) const = default;
#else
    bool operator==( Buffer const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_buffer == rhs.m_buffer;
    }

    bool operator!=( Buffer const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_buffer != rhs.m_buffer;
    }

    bool operator<( Buffer const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_buffer < rhs.m_buffer;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkBuffer() const VULKAN_HPP_NOEXCEPT
    {
      return m_buffer;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_buffer != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_buffer == VK_NULL_HANDLE;
    }

  private:
    VkBuffer m_buffer = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eBuffer>
  {
    using Type = VULKAN_HPP_NAMESPACE::Buffer;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eBuffer>
  {
    using Type = VULKAN_HPP_NAMESPACE::Buffer;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::Buffer>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class PipelineLayout
  {
  public:
    using CType      = VkPipelineLayout;
    using NativeType = VkPipelineLayout;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::ePipelineLayout;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::ePipelineLayout;

  public:
    VULKAN_HPP_CONSTEXPR         PipelineLayout() = default;
    VULKAN_HPP_CONSTEXPR         PipelineLayout( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT PipelineLayout( VkPipelineLayout pipelineLayout ) VULKAN_HPP_NOEXCEPT : m_pipelineLayout( pipelineLayout ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    PipelineLayout & operator=( VkPipelineLayout pipelineLayout ) VULKAN_HPP_NOEXCEPT
    {
      m_pipelineLayout = pipelineLayout;
      return *this;
    }
#endif

    PipelineLayout & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_pipelineLayout = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( PipelineLayout const & ) const = default;
#else
    bool operator==( PipelineLayout const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineLayout == rhs.m_pipelineLayout;
    }

    bool operator!=( PipelineLayout const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineLayout != rhs.m_pipelineLayout;
    }

    bool operator<( PipelineLayout const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineLayout < rhs.m_pipelineLayout;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkPipelineLayout() const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineLayout;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineLayout != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineLayout == VK_NULL_HANDLE;
    }

  private:
    VkPipelineLayout m_pipelineLayout = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::ePipelineLayout>
  {
    using Type = VULKAN_HPP_NAMESPACE::PipelineLayout;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::ePipelineLayout>
  {
    using Type = VULKAN_HPP_NAMESPACE::PipelineLayout;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::PipelineLayout>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class DescriptorSet
  {
  public:
    using CType      = VkDescriptorSet;
    using NativeType = VkDescriptorSet;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDescriptorSet;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDescriptorSet;

  public:
    VULKAN_HPP_CONSTEXPR         DescriptorSet() = default;
    VULKAN_HPP_CONSTEXPR         DescriptorSet( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT DescriptorSet( VkDescriptorSet descriptorSet ) VULKAN_HPP_NOEXCEPT : m_descriptorSet( descriptorSet ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    DescriptorSet & operator=( VkDescriptorSet descriptorSet ) VULKAN_HPP_NOEXCEPT
    {
      m_descriptorSet = descriptorSet;
      return *this;
    }
#endif

    DescriptorSet & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_descriptorSet = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( DescriptorSet const & ) const = default;
#else
    bool operator==( DescriptorSet const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSet == rhs.m_descriptorSet;
    }

    bool operator!=( DescriptorSet const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSet != rhs.m_descriptorSet;
    }

    bool operator<( DescriptorSet const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSet < rhs.m_descriptorSet;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkDescriptorSet() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSet;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSet != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSet == VK_NULL_HANDLE;
    }

  private:
    VkDescriptorSet m_descriptorSet = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eDescriptorSet>
  {
    using Type = VULKAN_HPP_NAMESPACE::DescriptorSet;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDescriptorSet>
  {
    using Type = VULKAN_HPP_NAMESPACE::DescriptorSet;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::DescriptorSet>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class ImageView
  {
  public:
    using CType      = VkImageView;
    using NativeType = VkImageView;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eImageView;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eImageView;

  public:
    VULKAN_HPP_CONSTEXPR         ImageView() = default;
    VULKAN_HPP_CONSTEXPR         ImageView( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT ImageView( VkImageView imageView ) VULKAN_HPP_NOEXCEPT : m_imageView( imageView ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    ImageView & operator=( VkImageView imageView ) VULKAN_HPP_NOEXCEPT
    {
      m_imageView = imageView;
      return *this;
    }
#endif

    ImageView & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_imageView = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( ImageView const & ) const = default;
#else
    bool operator==( ImageView const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_imageView == rhs.m_imageView;
    }

    bool operator!=( ImageView const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_imageView != rhs.m_imageView;
    }

    bool operator<( ImageView const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_imageView < rhs.m_imageView;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkImageView() const VULKAN_HPP_NOEXCEPT
    {
      return m_imageView;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_imageView != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_imageView == VK_NULL_HANDLE;
    }

  private:
    VkImageView m_imageView = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eImageView>
  {
    using Type = VULKAN_HPP_NAMESPACE::ImageView;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eImageView>
  {
    using Type = VULKAN_HPP_NAMESPACE::ImageView;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::ImageView>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class Pipeline
  {
  public:
    using CType      = VkPipeline;
    using NativeType = VkPipeline;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::ePipeline;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::ePipeline;

  public:
    VULKAN_HPP_CONSTEXPR         Pipeline() = default;
    VULKAN_HPP_CONSTEXPR         Pipeline( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT Pipeline( VkPipeline pipeline ) VULKAN_HPP_NOEXCEPT : m_pipeline( pipeline ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    Pipeline & operator=( VkPipeline pipeline ) VULKAN_HPP_NOEXCEPT
    {
      m_pipeline = pipeline;
      return *this;
    }
#endif

    Pipeline & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_pipeline = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( Pipeline const & ) const = default;
#else
    bool operator==( Pipeline const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_pipeline == rhs.m_pipeline;
    }

    bool operator!=( Pipeline const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_pipeline != rhs.m_pipeline;
    }

    bool operator<( Pipeline const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_pipeline < rhs.m_pipeline;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkPipeline() const VULKAN_HPP_NOEXCEPT
    {
      return m_pipeline;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_pipeline != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_pipeline == VK_NULL_HANDLE;
    }

  private:
    VkPipeline m_pipeline = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::ePipeline>
  {
    using Type = VULKAN_HPP_NAMESPACE::Pipeline;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::ePipeline>
  {
    using Type = VULKAN_HPP_NAMESPACE::Pipeline;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::Pipeline>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class Image
  {
  public:
    using CType      = VkImage;
    using NativeType = VkImage;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eImage;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eImage;

  public:
    VULKAN_HPP_CONSTEXPR         Image() = default;
    VULKAN_HPP_CONSTEXPR         Image( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT Image( VkImage image ) VULKAN_HPP_NOEXCEPT : m_image( image ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    Image & operator=( VkImage image ) VULKAN_HPP_NOEXCEPT
    {
      m_image = image;
      return *this;
    }
#endif

    Image & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_image = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( Image const & ) const = default;
#else
    bool operator==( Image const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_image == rhs.m_image;
    }

    bool operator!=( Image const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_image != rhs.m_image;
    }

    bool operator<( Image const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_image < rhs.m_image;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkImage() const VULKAN_HPP_NOEXCEPT
    {
      return m_image;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_image != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_image == VK_NULL_HANDLE;
    }

  private:
    VkImage m_image = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eImage>
  {
    using Type = VULKAN_HPP_NAMESPACE::Image;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eImage>
  {
    using Type = VULKAN_HPP_NAMESPACE::Image;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::Image>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class AccelerationStructureNV
  {
  public:
    using CType      = VkAccelerationStructureNV;
    using NativeType = VkAccelerationStructureNV;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eAccelerationStructureNV;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eAccelerationStructureNV;

  public:
    VULKAN_HPP_CONSTEXPR         AccelerationStructureNV() = default;
    VULKAN_HPP_CONSTEXPR         AccelerationStructureNV( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT AccelerationStructureNV( VkAccelerationStructureNV accelerationStructureNV ) VULKAN_HPP_NOEXCEPT
      : m_accelerationStructureNV( accelerationStructureNV )
    {
    }

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    AccelerationStructureNV & operator=( VkAccelerationStructureNV accelerationStructureNV ) VULKAN_HPP_NOEXCEPT
    {
      m_accelerationStructureNV = accelerationStructureNV;
      return *this;
    }
#endif

    AccelerationStructureNV & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_accelerationStructureNV = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( AccelerationStructureNV const & ) const = default;
#else
    bool operator==( AccelerationStructureNV const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructureNV == rhs.m_accelerationStructureNV;
    }

    bool operator!=( AccelerationStructureNV const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructureNV != rhs.m_accelerationStructureNV;
    }

    bool operator<( AccelerationStructureNV const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructureNV < rhs.m_accelerationStructureNV;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkAccelerationStructureNV() const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructureNV;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructureNV != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructureNV == VK_NULL_HANDLE;
    }

  private:
    VkAccelerationStructureNV m_accelerationStructureNV = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eAccelerationStructureNV>
  {
    using Type = VULKAN_HPP_NAMESPACE::AccelerationStructureNV;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eAccelerationStructureNV>
  {
    using Type = VULKAN_HPP_NAMESPACE::AccelerationStructureNV;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::AccelerationStructureNV>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class DescriptorUpdateTemplate
  {
  public:
    using CType      = VkDescriptorUpdateTemplate;
    using NativeType = VkDescriptorUpdateTemplate;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDescriptorUpdateTemplate;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDescriptorUpdateTemplate;

  public:
    VULKAN_HPP_CONSTEXPR         DescriptorUpdateTemplate() = default;
    VULKAN_HPP_CONSTEXPR         DescriptorUpdateTemplate( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT DescriptorUpdateTemplate( VkDescriptorUpdateTemplate descriptorUpdateTemplate ) VULKAN_HPP_NOEXCEPT
      : m_descriptorUpdateTemplate( descriptorUpdateTemplate )
    {
    }

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    DescriptorUpdateTemplate & operator=( VkDescriptorUpdateTemplate descriptorUpdateTemplate ) VULKAN_HPP_NOEXCEPT
    {
      m_descriptorUpdateTemplate = descriptorUpdateTemplate;
      return *this;
    }
#endif

    DescriptorUpdateTemplate & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_descriptorUpdateTemplate = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( DescriptorUpdateTemplate const & ) const = default;
#else
    bool operator==( DescriptorUpdateTemplate const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorUpdateTemplate == rhs.m_descriptorUpdateTemplate;
    }

    bool operator!=( DescriptorUpdateTemplate const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorUpdateTemplate != rhs.m_descriptorUpdateTemplate;
    }

    bool operator<( DescriptorUpdateTemplate const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorUpdateTemplate < rhs.m_descriptorUpdateTemplate;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkDescriptorUpdateTemplate() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorUpdateTemplate;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorUpdateTemplate != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorUpdateTemplate == VK_NULL_HANDLE;
    }

  private:
    VkDescriptorUpdateTemplate m_descriptorUpdateTemplate = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eDescriptorUpdateTemplate>
  {
    using Type = VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDescriptorUpdateTemplate>
  {
    using Type = VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };
  using DescriptorUpdateTemplateKHR = DescriptorUpdateTemplate;

  class Event
  {
  public:
    using CType      = VkEvent;
    using NativeType = VkEvent;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eEvent;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eEvent;

  public:
    VULKAN_HPP_CONSTEXPR         Event() = default;
    VULKAN_HPP_CONSTEXPR         Event( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT Event( VkEvent event ) VULKAN_HPP_NOEXCEPT : m_event( event ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    Event & operator=( VkEvent event ) VULKAN_HPP_NOEXCEPT
    {
      m_event = event;
      return *this;
    }
#endif

    Event & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_event = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( Event const & ) const = default;
#else
    bool operator==( Event const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_event == rhs.m_event;
    }

    bool operator!=( Event const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_event != rhs.m_event;
    }

    bool operator<( Event const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_event < rhs.m_event;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkEvent() const VULKAN_HPP_NOEXCEPT
    {
      return m_event;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_event != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_event == VK_NULL_HANDLE;
    }

  private:
    VkEvent m_event = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eEvent>
  {
    using Type = VULKAN_HPP_NAMESPACE::Event;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eEvent>
  {
    using Type = VULKAN_HPP_NAMESPACE::Event;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::Event>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class AccelerationStructureKHR
  {
  public:
    using CType      = VkAccelerationStructureKHR;
    using NativeType = VkAccelerationStructureKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eAccelerationStructureKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eAccelerationStructureKHR;

  public:
    VULKAN_HPP_CONSTEXPR         AccelerationStructureKHR() = default;
    VULKAN_HPP_CONSTEXPR         AccelerationStructureKHR( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT AccelerationStructureKHR( VkAccelerationStructureKHR accelerationStructureKHR ) VULKAN_HPP_NOEXCEPT
      : m_accelerationStructureKHR( accelerationStructureKHR )
    {
    }

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    AccelerationStructureKHR & operator=( VkAccelerationStructureKHR accelerationStructureKHR ) VULKAN_HPP_NOEXCEPT
    {
      m_accelerationStructureKHR = accelerationStructureKHR;
      return *this;
    }
#endif

    AccelerationStructureKHR & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_accelerationStructureKHR = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( AccelerationStructureKHR const & ) const = default;
#else
    bool operator==( AccelerationStructureKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructureKHR == rhs.m_accelerationStructureKHR;
    }

    bool operator!=( AccelerationStructureKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructureKHR != rhs.m_accelerationStructureKHR;
    }

    bool operator<( AccelerationStructureKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructureKHR < rhs.m_accelerationStructureKHR;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkAccelerationStructureKHR() const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructureKHR;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructureKHR != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_accelerationStructureKHR == VK_NULL_HANDLE;
    }

  private:
    VkAccelerationStructureKHR m_accelerationStructureKHR = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eAccelerationStructureKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::AccelerationStructureKHR;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eAccelerationStructureKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::AccelerationStructureKHR;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::AccelerationStructureKHR>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class CommandBuffer
  {
  public:
    using CType      = VkCommandBuffer;
    using NativeType = VkCommandBuffer;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eCommandBuffer;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eCommandBuffer;

  public:
    VULKAN_HPP_CONSTEXPR CommandBuffer() = default;
    VULKAN_HPP_CONSTEXPR CommandBuffer( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    CommandBuffer( VkCommandBuffer commandBuffer ) VULKAN_HPP_NOEXCEPT : m_commandBuffer( commandBuffer ) {}

    CommandBuffer & operator=( VkCommandBuffer commandBuffer ) VULKAN_HPP_NOEXCEPT
    {
      m_commandBuffer = commandBuffer;
      return *this;
    }

    CommandBuffer & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_commandBuffer = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( CommandBuffer const & ) const = default;
#else
    bool operator==( CommandBuffer const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_commandBuffer == rhs.m_commandBuffer;
    }

    bool operator!=( CommandBuffer const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_commandBuffer != rhs.m_commandBuffer;
    }

    bool operator<( CommandBuffer const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_commandBuffer < rhs.m_commandBuffer;
    }
#endif

    //=== VK_VERSION_1_0 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result begin( const VULKAN_HPP_NAMESPACE::CommandBufferBeginInfo * pBeginInfo,
                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type begin( const VULKAN_HPP_NAMESPACE::CommandBufferBeginInfo & beginInfo,
                                                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result end( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type end( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result reset( VULKAN_HPP_NAMESPACE::CommandBufferResetFlags flags,
                                       Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    typename ResultValueType<void>::type reset( VULKAN_HPP_NAMESPACE::CommandBufferResetFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                                Dispatch const & d                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindPipeline( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint,
                       VULKAN_HPP_NAMESPACE::Pipeline          pipeline,
                       Dispatch const & d                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setViewport( uint32_t                               firstViewport,
                      uint32_t                               viewportCount,
                      const VULKAN_HPP_NAMESPACE::Viewport * pViewports,
                      Dispatch const & d                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setViewport( uint32_t                                                 firstViewport,
                      ArrayProxy<const VULKAN_HPP_NAMESPACE::Viewport> const & viewports,
                      Dispatch const & d                                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setScissor( uint32_t                             firstScissor,
                     uint32_t                             scissorCount,
                     const VULKAN_HPP_NAMESPACE::Rect2D * pScissors,
                     Dispatch const & d                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setScissor( uint32_t                                               firstScissor,
                     ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & scissors,
                     Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setLineWidth( float lineWidth, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDepthBias( float              depthBiasConstantFactor,
                       float              depthBiasClamp,
                       float              depthBiasSlopeFactor,
                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setBlendConstants( const float blendConstants[4], Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDepthBounds( float minDepthBounds, float maxDepthBounds, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setStencilCompareMask( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask,
                                uint32_t                               compareMask,
                                Dispatch const & d                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setStencilWriteMask( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask,
                              uint32_t                               writeMask,
                              Dispatch const & d                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setStencilReference( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask,
                              uint32_t                               reference,
                              Dispatch const & d                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindDescriptorSets( VULKAN_HPP_NAMESPACE::PipelineBindPoint     pipelineBindPoint,
                             VULKAN_HPP_NAMESPACE::PipelineLayout        layout,
                             uint32_t                                    firstSet,
                             uint32_t                                    descriptorSetCount,
                             const VULKAN_HPP_NAMESPACE::DescriptorSet * pDescriptorSets,
                             uint32_t                                    dynamicOffsetCount,
                             const uint32_t *                            pDynamicOffsets,
                             Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindDescriptorSets( VULKAN_HPP_NAMESPACE::PipelineBindPoint                       pipelineBindPoint,
                             VULKAN_HPP_NAMESPACE::PipelineLayout                          layout,
                             uint32_t                                                      firstSet,
                             ArrayProxy<const VULKAN_HPP_NAMESPACE::DescriptorSet> const & descriptorSets,
                             ArrayProxy<const uint32_t> const &                            dynamicOffsets,
                             Dispatch const & d                                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindIndexBuffer( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                          VULKAN_HPP_NAMESPACE::DeviceSize offset,
                          VULKAN_HPP_NAMESPACE::IndexType  indexType,
                          Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindVertexBuffers( uint32_t                                 firstBinding,
                            uint32_t                                 bindingCount,
                            const VULKAN_HPP_NAMESPACE::Buffer *     pBuffers,
                            const VULKAN_HPP_NAMESPACE::DeviceSize * pOffsets,
                            Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindVertexBuffers( uint32_t                                                   firstBinding,
                            ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const &     buffers,
                            ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & offsets,
                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT_WHEN_NO_EXCEPTIONS;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void draw( uint32_t           vertexCount,
               uint32_t           instanceCount,
               uint32_t           firstVertex,
               uint32_t           firstInstance,
               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawIndexed( uint32_t           indexCount,
                      uint32_t           instanceCount,
                      uint32_t           firstIndex,
                      int32_t            vertexOffset,
                      uint32_t           firstInstance,
                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawIndirect( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                       VULKAN_HPP_NAMESPACE::DeviceSize offset,
                       uint32_t                         drawCount,
                       uint32_t                         stride,
                       Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawIndexedIndirect( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                              VULKAN_HPP_NAMESPACE::DeviceSize offset,
                              uint32_t                         drawCount,
                              uint32_t                         stride,
                              Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void dispatch( uint32_t           groupCountX,
                   uint32_t           groupCountY,
                   uint32_t           groupCountZ,
                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void dispatchIndirect( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                           VULKAN_HPP_NAMESPACE::DeviceSize offset,
                           Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyBuffer( VULKAN_HPP_NAMESPACE::Buffer             srcBuffer,
                     VULKAN_HPP_NAMESPACE::Buffer             dstBuffer,
                     uint32_t                                 regionCount,
                     const VULKAN_HPP_NAMESPACE::BufferCopy * pRegions,
                     Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyBuffer( VULKAN_HPP_NAMESPACE::Buffer                               srcBuffer,
                     VULKAN_HPP_NAMESPACE::Buffer                               dstBuffer,
                     ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferCopy> const & regions,
                     Dispatch const & d                                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyImage( VULKAN_HPP_NAMESPACE::Image             srcImage,
                    VULKAN_HPP_NAMESPACE::ImageLayout       srcImageLayout,
                    VULKAN_HPP_NAMESPACE::Image             dstImage,
                    VULKAN_HPP_NAMESPACE::ImageLayout       dstImageLayout,
                    uint32_t                                regionCount,
                    const VULKAN_HPP_NAMESPACE::ImageCopy * pRegions,
                    Dispatch const & d                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyImage( VULKAN_HPP_NAMESPACE::Image                               srcImage,
                    VULKAN_HPP_NAMESPACE::ImageLayout                         srcImageLayout,
                    VULKAN_HPP_NAMESPACE::Image                               dstImage,
                    VULKAN_HPP_NAMESPACE::ImageLayout                         dstImageLayout,
                    ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageCopy> const & regions,
                    Dispatch const & d                                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void blitImage( VULKAN_HPP_NAMESPACE::Image             srcImage,
                    VULKAN_HPP_NAMESPACE::ImageLayout       srcImageLayout,
                    VULKAN_HPP_NAMESPACE::Image             dstImage,
                    VULKAN_HPP_NAMESPACE::ImageLayout       dstImageLayout,
                    uint32_t                                regionCount,
                    const VULKAN_HPP_NAMESPACE::ImageBlit * pRegions,
                    VULKAN_HPP_NAMESPACE::Filter            filter,
                    Dispatch const & d                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void blitImage( VULKAN_HPP_NAMESPACE::Image                               srcImage,
                    VULKAN_HPP_NAMESPACE::ImageLayout                         srcImageLayout,
                    VULKAN_HPP_NAMESPACE::Image                               dstImage,
                    VULKAN_HPP_NAMESPACE::ImageLayout                         dstImageLayout,
                    ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageBlit> const & regions,
                    VULKAN_HPP_NAMESPACE::Filter                              filter,
                    Dispatch const & d                                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyBufferToImage( VULKAN_HPP_NAMESPACE::Buffer                  srcBuffer,
                            VULKAN_HPP_NAMESPACE::Image                   dstImage,
                            VULKAN_HPP_NAMESPACE::ImageLayout             dstImageLayout,
                            uint32_t                                      regionCount,
                            const VULKAN_HPP_NAMESPACE::BufferImageCopy * pRegions,
                            Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyBufferToImage( VULKAN_HPP_NAMESPACE::Buffer                                    srcBuffer,
                            VULKAN_HPP_NAMESPACE::Image                                     dstImage,
                            VULKAN_HPP_NAMESPACE::ImageLayout                               dstImageLayout,
                            ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferImageCopy> const & regions,
                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyImageToBuffer( VULKAN_HPP_NAMESPACE::Image                   srcImage,
                            VULKAN_HPP_NAMESPACE::ImageLayout             srcImageLayout,
                            VULKAN_HPP_NAMESPACE::Buffer                  dstBuffer,
                            uint32_t                                      regionCount,
                            const VULKAN_HPP_NAMESPACE::BufferImageCopy * pRegions,
                            Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyImageToBuffer( VULKAN_HPP_NAMESPACE::Image                                     srcImage,
                            VULKAN_HPP_NAMESPACE::ImageLayout                               srcImageLayout,
                            VULKAN_HPP_NAMESPACE::Buffer                                    dstBuffer,
                            ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferImageCopy> const & regions,
                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void updateBuffer( VULKAN_HPP_NAMESPACE::Buffer     dstBuffer,
                       VULKAN_HPP_NAMESPACE::DeviceSize dstOffset,
                       VULKAN_HPP_NAMESPACE::DeviceSize dataSize,
                       const void *                     pData,
                       Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DataType, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void updateBuffer( VULKAN_HPP_NAMESPACE::Buffer       dstBuffer,
                       VULKAN_HPP_NAMESPACE::DeviceSize   dstOffset,
                       ArrayProxy<const DataType> const & data,
                       Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void fillBuffer( VULKAN_HPP_NAMESPACE::Buffer     dstBuffer,
                     VULKAN_HPP_NAMESPACE::DeviceSize dstOffset,
                     VULKAN_HPP_NAMESPACE::DeviceSize size,
                     uint32_t                         data,
                     Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void clearColorImage( VULKAN_HPP_NAMESPACE::Image                         image,
                          VULKAN_HPP_NAMESPACE::ImageLayout                   imageLayout,
                          const VULKAN_HPP_NAMESPACE::ClearColorValue *       pColor,
                          uint32_t                                            rangeCount,
                          const VULKAN_HPP_NAMESPACE::ImageSubresourceRange * pRanges,
                          Dispatch const & d                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void clearColorImage( VULKAN_HPP_NAMESPACE::Image                                           image,
                          VULKAN_HPP_NAMESPACE::ImageLayout                                     imageLayout,
                          const VULKAN_HPP_NAMESPACE::ClearColorValue &                         color,
                          ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageSubresourceRange> const & ranges,
                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void clearDepthStencilImage( VULKAN_HPP_NAMESPACE::Image                          image,
                                 VULKAN_HPP_NAMESPACE::ImageLayout                    imageLayout,
                                 const VULKAN_HPP_NAMESPACE::ClearDepthStencilValue * pDepthStencil,
                                 uint32_t                                             rangeCount,
                                 const VULKAN_HPP_NAMESPACE::ImageSubresourceRange *  pRanges,
                                 Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void clearDepthStencilImage( VULKAN_HPP_NAMESPACE::Image                                           image,
                                 VULKAN_HPP_NAMESPACE::ImageLayout                                     imageLayout,
                                 const VULKAN_HPP_NAMESPACE::ClearDepthStencilValue &                  depthStencil,
                                 ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageSubresourceRange> const & ranges,
                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void clearAttachments( uint32_t                                      attachmentCount,
                           const VULKAN_HPP_NAMESPACE::ClearAttachment * pAttachments,
                           uint32_t                                      rectCount,
                           const VULKAN_HPP_NAMESPACE::ClearRect *       pRects,
                           Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void clearAttachments( ArrayProxy<const VULKAN_HPP_NAMESPACE::ClearAttachment> const & attachments,
                           ArrayProxy<const VULKAN_HPP_NAMESPACE::ClearRect> const &       rects,
                           Dispatch const & d                                              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resolveImage( VULKAN_HPP_NAMESPACE::Image                srcImage,
                       VULKAN_HPP_NAMESPACE::ImageLayout          srcImageLayout,
                       VULKAN_HPP_NAMESPACE::Image                dstImage,
                       VULKAN_HPP_NAMESPACE::ImageLayout          dstImageLayout,
                       uint32_t                                   regionCount,
                       const VULKAN_HPP_NAMESPACE::ImageResolve * pRegions,
                       Dispatch const & d                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resolveImage( VULKAN_HPP_NAMESPACE::Image                                  srcImage,
                       VULKAN_HPP_NAMESPACE::ImageLayout                            srcImageLayout,
                       VULKAN_HPP_NAMESPACE::Image                                  dstImage,
                       VULKAN_HPP_NAMESPACE::ImageLayout                            dstImageLayout,
                       ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageResolve> const & regions,
                       Dispatch const & d                                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setEvent( VULKAN_HPP_NAMESPACE::Event              event,
                   VULKAN_HPP_NAMESPACE::PipelineStageFlags stageMask,
                   Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resetEvent( VULKAN_HPP_NAMESPACE::Event              event,
                     VULKAN_HPP_NAMESPACE::PipelineStageFlags stageMask,
                     Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void waitEvents( uint32_t                                          eventCount,
                     const VULKAN_HPP_NAMESPACE::Event *               pEvents,
                     VULKAN_HPP_NAMESPACE::PipelineStageFlags          srcStageMask,
                     VULKAN_HPP_NAMESPACE::PipelineStageFlags          dstStageMask,
                     uint32_t                                          memoryBarrierCount,
                     const VULKAN_HPP_NAMESPACE::MemoryBarrier *       pMemoryBarriers,
                     uint32_t                                          bufferMemoryBarrierCount,
                     const VULKAN_HPP_NAMESPACE::BufferMemoryBarrier * pBufferMemoryBarriers,
                     uint32_t                                          imageMemoryBarrierCount,
                     const VULKAN_HPP_NAMESPACE::ImageMemoryBarrier *  pImageMemoryBarriers,
                     Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void waitEvents( ArrayProxy<const VULKAN_HPP_NAMESPACE::Event> const &               events,
                     VULKAN_HPP_NAMESPACE::PipelineStageFlags                            srcStageMask,
                     VULKAN_HPP_NAMESPACE::PipelineStageFlags                            dstStageMask,
                     ArrayProxy<const VULKAN_HPP_NAMESPACE::MemoryBarrier> const &       memoryBarriers,
                     ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferMemoryBarrier> const & bufferMemoryBarriers,
                     ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageMemoryBarrier> const &  imageMemoryBarriers,
                     Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void pipelineBarrier( VULKAN_HPP_NAMESPACE::PipelineStageFlags          srcStageMask,
                          VULKAN_HPP_NAMESPACE::PipelineStageFlags          dstStageMask,
                          VULKAN_HPP_NAMESPACE::DependencyFlags             dependencyFlags,
                          uint32_t                                          memoryBarrierCount,
                          const VULKAN_HPP_NAMESPACE::MemoryBarrier *       pMemoryBarriers,
                          uint32_t                                          bufferMemoryBarrierCount,
                          const VULKAN_HPP_NAMESPACE::BufferMemoryBarrier * pBufferMemoryBarriers,
                          uint32_t                                          imageMemoryBarrierCount,
                          const VULKAN_HPP_NAMESPACE::ImageMemoryBarrier *  pImageMemoryBarriers,
                          Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void pipelineBarrier( VULKAN_HPP_NAMESPACE::PipelineStageFlags                            srcStageMask,
                          VULKAN_HPP_NAMESPACE::PipelineStageFlags                            dstStageMask,
                          VULKAN_HPP_NAMESPACE::DependencyFlags                               dependencyFlags,
                          ArrayProxy<const VULKAN_HPP_NAMESPACE::MemoryBarrier> const &       memoryBarriers,
                          ArrayProxy<const VULKAN_HPP_NAMESPACE::BufferMemoryBarrier> const & bufferMemoryBarriers,
                          ArrayProxy<const VULKAN_HPP_NAMESPACE::ImageMemoryBarrier> const &  imageMemoryBarriers,
                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginQuery( VULKAN_HPP_NAMESPACE::QueryPool         queryPool,
                     uint32_t                                query,
                     VULKAN_HPP_NAMESPACE::QueryControlFlags flags,
                     Dispatch const & d                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endQuery( VULKAN_HPP_NAMESPACE::QueryPool queryPool,
                   uint32_t                        query,
                   Dispatch const & d              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resetQueryPool( VULKAN_HPP_NAMESPACE::QueryPool queryPool,
                         uint32_t                        firstQuery,
                         uint32_t                        queryCount,
                         Dispatch const & d              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void writeTimestamp( VULKAN_HPP_NAMESPACE::PipelineStageFlagBits pipelineStage,
                         VULKAN_HPP_NAMESPACE::QueryPool             queryPool,
                         uint32_t                                    query,
                         Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyQueryPoolResults( VULKAN_HPP_NAMESPACE::QueryPool        queryPool,
                               uint32_t                               firstQuery,
                               uint32_t                               queryCount,
                               VULKAN_HPP_NAMESPACE::Buffer           dstBuffer,
                               VULKAN_HPP_NAMESPACE::DeviceSize       dstOffset,
                               VULKAN_HPP_NAMESPACE::DeviceSize       stride,
                               VULKAN_HPP_NAMESPACE::QueryResultFlags flags,
                               Dispatch const & d                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void pushConstants( VULKAN_HPP_NAMESPACE::PipelineLayout   layout,
                        VULKAN_HPP_NAMESPACE::ShaderStageFlags stageFlags,
                        uint32_t                               offset,
                        uint32_t                               size,
                        const void *                           pValues,
                        Dispatch const & d                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename ValuesType, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void pushConstants( VULKAN_HPP_NAMESPACE::PipelineLayout   layout,
                        VULKAN_HPP_NAMESPACE::ShaderStageFlags stageFlags,
                        uint32_t                               offset,
                        ArrayProxy<const ValuesType> const &   values,
                        Dispatch const & d                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginRenderPass( const VULKAN_HPP_NAMESPACE::RenderPassBeginInfo * pRenderPassBegin,
                          VULKAN_HPP_NAMESPACE::SubpassContents             contents,
                          Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginRenderPass( const VULKAN_HPP_NAMESPACE::RenderPassBeginInfo & renderPassBegin,
                          VULKAN_HPP_NAMESPACE::SubpassContents             contents,
                          Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void nextSubpass( VULKAN_HPP_NAMESPACE::SubpassContents contents, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endRenderPass( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void executeCommands( uint32_t                                    commandBufferCount,
                          const VULKAN_HPP_NAMESPACE::CommandBuffer * pCommandBuffers,
                          Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void executeCommands( ArrayProxy<const VULKAN_HPP_NAMESPACE::CommandBuffer> const & commandBuffers,
                          Dispatch const & d                                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_VERSION_1_1 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDeviceMask( uint32_t deviceMask, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void dispatchBase( uint32_t           baseGroupX,
                       uint32_t           baseGroupY,
                       uint32_t           baseGroupZ,
                       uint32_t           groupCountX,
                       uint32_t           groupCountY,
                       uint32_t           groupCountZ,
                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_VERSION_1_2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawIndirectCount( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                            VULKAN_HPP_NAMESPACE::DeviceSize offset,
                            VULKAN_HPP_NAMESPACE::Buffer     countBuffer,
                            VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset,
                            uint32_t                         maxDrawCount,
                            uint32_t                         stride,
                            Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawIndexedIndirectCount( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                                   VULKAN_HPP_NAMESPACE::DeviceSize offset,
                                   VULKAN_HPP_NAMESPACE::Buffer     countBuffer,
                                   VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset,
                                   uint32_t                         maxDrawCount,
                                   uint32_t                         stride,
                                   Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginRenderPass2( const VULKAN_HPP_NAMESPACE::RenderPassBeginInfo * pRenderPassBegin,
                           const VULKAN_HPP_NAMESPACE::SubpassBeginInfo *    pSubpassBeginInfo,
                           Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginRenderPass2( const VULKAN_HPP_NAMESPACE::RenderPassBeginInfo & renderPassBegin,
                           const VULKAN_HPP_NAMESPACE::SubpassBeginInfo &    subpassBeginInfo,
                           Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void nextSubpass2( const VULKAN_HPP_NAMESPACE::SubpassBeginInfo * pSubpassBeginInfo,
                       const VULKAN_HPP_NAMESPACE::SubpassEndInfo *   pSubpassEndInfo,
                       Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void nextSubpass2( const VULKAN_HPP_NAMESPACE::SubpassBeginInfo & subpassBeginInfo,
                       const VULKAN_HPP_NAMESPACE::SubpassEndInfo &   subpassEndInfo,
                       Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endRenderPass2( const VULKAN_HPP_NAMESPACE::SubpassEndInfo * pSubpassEndInfo,
                         Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endRenderPass2( const VULKAN_HPP_NAMESPACE::SubpassEndInfo & subpassEndInfo,
                         Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_VERSION_1_3 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setEvent2( VULKAN_HPP_NAMESPACE::Event                  event,
                    const VULKAN_HPP_NAMESPACE::DependencyInfo * pDependencyInfo,
                    Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setEvent2( VULKAN_HPP_NAMESPACE::Event                  event,
                    const VULKAN_HPP_NAMESPACE::DependencyInfo & dependencyInfo,
                    Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resetEvent2( VULKAN_HPP_NAMESPACE::Event               event,
                      VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stageMask,
                      Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void waitEvents2( uint32_t                                     eventCount,
                      const VULKAN_HPP_NAMESPACE::Event *          pEvents,
                      const VULKAN_HPP_NAMESPACE::DependencyInfo * pDependencyInfos,
                      Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void waitEvents2( ArrayProxy<const VULKAN_HPP_NAMESPACE::Event> const &          events,
                      ArrayProxy<const VULKAN_HPP_NAMESPACE::DependencyInfo> const & dependencyInfos,
                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT_WHEN_NO_EXCEPTIONS;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void pipelineBarrier2( const VULKAN_HPP_NAMESPACE::DependencyInfo * pDependencyInfo,
                           Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void pipelineBarrier2( const VULKAN_HPP_NAMESPACE::DependencyInfo & dependencyInfo,
                           Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void writeTimestamp2( VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stage,
                          VULKAN_HPP_NAMESPACE::QueryPool           queryPool,
                          uint32_t                                  query,
                          Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyBuffer2( const VULKAN_HPP_NAMESPACE::CopyBufferInfo2 * pCopyBufferInfo,
                      Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyBuffer2( const VULKAN_HPP_NAMESPACE::CopyBufferInfo2 & copyBufferInfo,
                      Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyImage2( const VULKAN_HPP_NAMESPACE::CopyImageInfo2 * pCopyImageInfo,
                     Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyImage2( const VULKAN_HPP_NAMESPACE::CopyImageInfo2 & copyImageInfo,
                     Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyBufferToImage2( const VULKAN_HPP_NAMESPACE::CopyBufferToImageInfo2 * pCopyBufferToImageInfo,
                             Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyBufferToImage2( const VULKAN_HPP_NAMESPACE::CopyBufferToImageInfo2 & copyBufferToImageInfo,
                             Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyImageToBuffer2( const VULKAN_HPP_NAMESPACE::CopyImageToBufferInfo2 * pCopyImageToBufferInfo,
                             Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyImageToBuffer2( const VULKAN_HPP_NAMESPACE::CopyImageToBufferInfo2 & copyImageToBufferInfo,
                             Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void blitImage2( const VULKAN_HPP_NAMESPACE::BlitImageInfo2 * pBlitImageInfo,
                     Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void blitImage2( const VULKAN_HPP_NAMESPACE::BlitImageInfo2 & blitImageInfo,
                     Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resolveImage2( const VULKAN_HPP_NAMESPACE::ResolveImageInfo2 * pResolveImageInfo,
                        Dispatch const & d                              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resolveImage2( const VULKAN_HPP_NAMESPACE::ResolveImageInfo2 & resolveImageInfo,
                        Dispatch const & d                              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginRendering( const VULKAN_HPP_NAMESPACE::RenderingInfo * pRenderingInfo,
                         Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginRendering( const VULKAN_HPP_NAMESPACE::RenderingInfo & renderingInfo,
                         Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endRendering( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setCullMode( VULKAN_HPP_NAMESPACE::CullModeFlags cullMode, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setFrontFace( VULKAN_HPP_NAMESPACE::FrontFace frontFace, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setPrimitiveTopology( VULKAN_HPP_NAMESPACE::PrimitiveTopology primitiveTopology,
                               Dispatch const & d                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setViewportWithCount( uint32_t                               viewportCount,
                               const VULKAN_HPP_NAMESPACE::Viewport * pViewports,
                               Dispatch const & d                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setViewportWithCount( ArrayProxy<const VULKAN_HPP_NAMESPACE::Viewport> const & viewports,
                               Dispatch const & d                                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setScissorWithCount( uint32_t                             scissorCount,
                              const VULKAN_HPP_NAMESPACE::Rect2D * pScissors,
                              Dispatch const & d                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setScissorWithCount( ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & scissors,
                              Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindVertexBuffers2( uint32_t                                 firstBinding,
                             uint32_t                                 bindingCount,
                             const VULKAN_HPP_NAMESPACE::Buffer *     pBuffers,
                             const VULKAN_HPP_NAMESPACE::DeviceSize * pOffsets,
                             const VULKAN_HPP_NAMESPACE::DeviceSize * pSizes,
                             const VULKAN_HPP_NAMESPACE::DeviceSize * pStrides,
                             Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindVertexBuffers2( uint32_t                                                           firstBinding,
                             ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const &             buffers,
                             ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const &         offsets,
                             ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & sizes   VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & strides VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT_WHEN_NO_EXCEPTIONS;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDepthTestEnable( VULKAN_HPP_NAMESPACE::Bool32 depthTestEnable,
                             Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDepthWriteEnable( VULKAN_HPP_NAMESPACE::Bool32 depthWriteEnable,
                              Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDepthCompareOp( VULKAN_HPP_NAMESPACE::CompareOp depthCompareOp,
                            Dispatch const & d              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDepthBoundsTestEnable( VULKAN_HPP_NAMESPACE::Bool32 depthBoundsTestEnable,
                                   Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setStencilTestEnable( VULKAN_HPP_NAMESPACE::Bool32 stencilTestEnable,
                               Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setStencilOp( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask,
                       VULKAN_HPP_NAMESPACE::StencilOp        failOp,
                       VULKAN_HPP_NAMESPACE::StencilOp        passOp,
                       VULKAN_HPP_NAMESPACE::StencilOp        depthFailOp,
                       VULKAN_HPP_NAMESPACE::CompareOp        compareOp,
                       Dispatch const & d                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setRasterizerDiscardEnable( VULKAN_HPP_NAMESPACE::Bool32 rasterizerDiscardEnable,
                                     Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDepthBiasEnable( VULKAN_HPP_NAMESPACE::Bool32 depthBiasEnable,
                             Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setPrimitiveRestartEnable( VULKAN_HPP_NAMESPACE::Bool32 primitiveRestartEnable,
                                    Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_EXT_debug_marker ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void debugMarkerBeginEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerMarkerInfoEXT * pMarkerInfo,
                              Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void debugMarkerBeginEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerMarkerInfoEXT & markerInfo,
                              Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void debugMarkerEndEXT( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void debugMarkerInsertEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerMarkerInfoEXT * pMarkerInfo,
                               Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void debugMarkerInsertEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerMarkerInfoEXT & markerInfo,
                               Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_ENABLE_BETA_EXTENSIONS )
    //=== VK_KHR_video_queue ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginVideoCodingKHR( const VULKAN_HPP_NAMESPACE::VideoBeginCodingInfoKHR * pBeginInfo,
                              Dispatch const & d                                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginVideoCodingKHR( const VULKAN_HPP_NAMESPACE::VideoBeginCodingInfoKHR & beginInfo,
                              Dispatch const & d                                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endVideoCodingKHR( const VULKAN_HPP_NAMESPACE::VideoEndCodingInfoKHR * pEndCodingInfo,
                            Dispatch const & d                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endVideoCodingKHR( const VULKAN_HPP_NAMESPACE::VideoEndCodingInfoKHR & endCodingInfo,
                            Dispatch const & d                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void controlVideoCodingKHR( const VULKAN_HPP_NAMESPACE::VideoCodingControlInfoKHR * pCodingControlInfo,
                                Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void controlVideoCodingKHR( const VULKAN_HPP_NAMESPACE::VideoCodingControlInfoKHR & codingControlInfo,
                                Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_ENABLE_BETA_EXTENSIONS*/

#if defined( VK_ENABLE_BETA_EXTENSIONS )
    //=== VK_KHR_video_decode_queue ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void decodeVideoKHR( const VULKAN_HPP_NAMESPACE::VideoDecodeInfoKHR * pFrameInfo,
                         Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void decodeVideoKHR( const VULKAN_HPP_NAMESPACE::VideoDecodeInfoKHR & frameInfo,
                         Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_ENABLE_BETA_EXTENSIONS*/

    //=== VK_EXT_transform_feedback ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindTransformFeedbackBuffersEXT( uint32_t                                 firstBinding,
                                          uint32_t                                 bindingCount,
                                          const VULKAN_HPP_NAMESPACE::Buffer *     pBuffers,
                                          const VULKAN_HPP_NAMESPACE::DeviceSize * pOffsets,
                                          const VULKAN_HPP_NAMESPACE::DeviceSize * pSizes,
                                          Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindTransformFeedbackBuffersEXT( uint32_t                                                         firstBinding,
                                          ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const &           buffers,
                                          ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const &       offsets,
                                          ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & sizes VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT_WHEN_NO_EXCEPTIONS;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginTransformFeedbackEXT( uint32_t                                 firstCounterBuffer,
                                    uint32_t                                 counterBufferCount,
                                    const VULKAN_HPP_NAMESPACE::Buffer *     pCounterBuffers,
                                    const VULKAN_HPP_NAMESPACE::DeviceSize * pCounterBufferOffsets,
                                    Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void
      beginTransformFeedbackEXT( uint32_t                                                                        firstCounterBuffer,
                                 ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const &                          counterBuffers,
                                 ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & counterBufferOffsets VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT_WHEN_NO_EXCEPTIONS;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endTransformFeedbackEXT( uint32_t                                 firstCounterBuffer,
                                  uint32_t                                 counterBufferCount,
                                  const VULKAN_HPP_NAMESPACE::Buffer *     pCounterBuffers,
                                  const VULKAN_HPP_NAMESPACE::DeviceSize * pCounterBufferOffsets,
                                  Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void
      endTransformFeedbackEXT( uint32_t                                                                        firstCounterBuffer,
                               ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const &                          counterBuffers,
                               ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & counterBufferOffsets VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT_WHEN_NO_EXCEPTIONS;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginQueryIndexedEXT( VULKAN_HPP_NAMESPACE::QueryPool         queryPool,
                               uint32_t                                query,
                               VULKAN_HPP_NAMESPACE::QueryControlFlags flags,
                               uint32_t                                index,
                               Dispatch const & d                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endQueryIndexedEXT( VULKAN_HPP_NAMESPACE::QueryPool queryPool,
                             uint32_t                        query,
                             uint32_t                        index,
                             Dispatch const & d              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawIndirectByteCountEXT( uint32_t                         instanceCount,
                                   uint32_t                         firstInstance,
                                   VULKAN_HPP_NAMESPACE::Buffer     counterBuffer,
                                   VULKAN_HPP_NAMESPACE::DeviceSize counterBufferOffset,
                                   uint32_t                         counterOffset,
                                   uint32_t                         vertexStride,
                                   Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_NVX_binary_import ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void cuLaunchKernelNVX( const VULKAN_HPP_NAMESPACE::CuLaunchInfoNVX * pLaunchInfo,
                            Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void cuLaunchKernelNVX( const VULKAN_HPP_NAMESPACE::CuLaunchInfoNVX & launchInfo,
                            Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_AMD_draw_indirect_count ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawIndirectCountAMD( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                               VULKAN_HPP_NAMESPACE::DeviceSize offset,
                               VULKAN_HPP_NAMESPACE::Buffer     countBuffer,
                               VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset,
                               uint32_t                         maxDrawCount,
                               uint32_t                         stride,
                               Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawIndexedIndirectCountAMD( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                                      VULKAN_HPP_NAMESPACE::DeviceSize offset,
                                      VULKAN_HPP_NAMESPACE::Buffer     countBuffer,
                                      VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset,
                                      uint32_t                         maxDrawCount,
                                      uint32_t                         stride,
                                      Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_KHR_dynamic_rendering ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginRenderingKHR( const VULKAN_HPP_NAMESPACE::RenderingInfo * pRenderingInfo,
                            Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginRenderingKHR( const VULKAN_HPP_NAMESPACE::RenderingInfo & renderingInfo,
                            Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endRenderingKHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_KHR_device_group ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDeviceMaskKHR( uint32_t deviceMask, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void dispatchBaseKHR( uint32_t           baseGroupX,
                          uint32_t           baseGroupY,
                          uint32_t           baseGroupZ,
                          uint32_t           groupCountX,
                          uint32_t           groupCountY,
                          uint32_t           groupCountZ,
                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_KHR_push_descriptor ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void pushDescriptorSetKHR( VULKAN_HPP_NAMESPACE::PipelineBindPoint          pipelineBindPoint,
                               VULKAN_HPP_NAMESPACE::PipelineLayout             layout,
                               uint32_t                                         set,
                               uint32_t                                         descriptorWriteCount,
                               const VULKAN_HPP_NAMESPACE::WriteDescriptorSet * pDescriptorWrites,
                               Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void pushDescriptorSetKHR( VULKAN_HPP_NAMESPACE::PipelineBindPoint                            pipelineBindPoint,
                               VULKAN_HPP_NAMESPACE::PipelineLayout                               layout,
                               uint32_t                                                           set,
                               ArrayProxy<const VULKAN_HPP_NAMESPACE::WriteDescriptorSet> const & descriptorWrites,
                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void pushDescriptorSetWithTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate,
                                           VULKAN_HPP_NAMESPACE::PipelineLayout           layout,
                                           uint32_t                                       set,
                                           const void *                                   pData,
                                           Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DataType, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void pushDescriptorSetWithTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate,
                                           VULKAN_HPP_NAMESPACE::PipelineLayout           layout,
                                           uint32_t                                       set,
                                           DataType const &                               data,
                                           Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_conditional_rendering ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginConditionalRenderingEXT( const VULKAN_HPP_NAMESPACE::ConditionalRenderingBeginInfoEXT * pConditionalRenderingBegin,
                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginConditionalRenderingEXT( const VULKAN_HPP_NAMESPACE::ConditionalRenderingBeginInfoEXT & conditionalRenderingBegin,
                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endConditionalRenderingEXT( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_NV_clip_space_w_scaling ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setViewportWScalingNV( uint32_t                                         firstViewport,
                                uint32_t                                         viewportCount,
                                const VULKAN_HPP_NAMESPACE::ViewportWScalingNV * pViewportWScalings,
                                Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setViewportWScalingNV( uint32_t                                                           firstViewport,
                                ArrayProxy<const VULKAN_HPP_NAMESPACE::ViewportWScalingNV> const & viewportWScalings,
                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_discard_rectangles ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDiscardRectangleEXT( uint32_t                             firstDiscardRectangle,
                                 uint32_t                             discardRectangleCount,
                                 const VULKAN_HPP_NAMESPACE::Rect2D * pDiscardRectangles,
                                 Dispatch const & d                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDiscardRectangleEXT( uint32_t                                               firstDiscardRectangle,
                                 ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & discardRectangles,
                                 Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_create_renderpass2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginRenderPass2KHR( const VULKAN_HPP_NAMESPACE::RenderPassBeginInfo * pRenderPassBegin,
                              const VULKAN_HPP_NAMESPACE::SubpassBeginInfo *    pSubpassBeginInfo,
                              Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginRenderPass2KHR( const VULKAN_HPP_NAMESPACE::RenderPassBeginInfo & renderPassBegin,
                              const VULKAN_HPP_NAMESPACE::SubpassBeginInfo &    subpassBeginInfo,
                              Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void nextSubpass2KHR( const VULKAN_HPP_NAMESPACE::SubpassBeginInfo * pSubpassBeginInfo,
                          const VULKAN_HPP_NAMESPACE::SubpassEndInfo *   pSubpassEndInfo,
                          Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void nextSubpass2KHR( const VULKAN_HPP_NAMESPACE::SubpassBeginInfo & subpassBeginInfo,
                          const VULKAN_HPP_NAMESPACE::SubpassEndInfo &   subpassEndInfo,
                          Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endRenderPass2KHR( const VULKAN_HPP_NAMESPACE::SubpassEndInfo * pSubpassEndInfo,
                            Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endRenderPass2KHR( const VULKAN_HPP_NAMESPACE::SubpassEndInfo & subpassEndInfo,
                            Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_debug_utils ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT * pLabelInfo,
                                  Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT & labelInfo,
                                  Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endDebugUtilsLabelEXT( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void insertDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT * pLabelInfo,
                                   Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void insertDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT & labelInfo,
                                   Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_sample_locations ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setSampleLocationsEXT( const VULKAN_HPP_NAMESPACE::SampleLocationsInfoEXT * pSampleLocationsInfo,
                                Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setSampleLocationsEXT( const VULKAN_HPP_NAMESPACE::SampleLocationsInfoEXT & sampleLocationsInfo,
                                Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_acceleration_structure ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void buildAccelerationStructuresKHR( uint32_t                                                                     infoCount,
                                         const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR *      pInfos,
                                         const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildRangeInfoKHR * const * ppBuildRangeInfos,
                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void buildAccelerationStructuresKHR( ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR> const &      infos,
                                         ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildRangeInfoKHR * const> const & pBuildRangeInfos,
                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT_WHEN_NO_EXCEPTIONS;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void buildAccelerationStructuresIndirectKHR( uint32_t                                                                infoCount,
                                                 const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR * pInfos,
                                                 const VULKAN_HPP_NAMESPACE::DeviceAddress *                             pIndirectDeviceAddresses,
                                                 const uint32_t *                                                        pIndirectStrides,
                                                 const uint32_t * const *                                                ppMaxPrimitiveCounts,
                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void buildAccelerationStructuresIndirectKHR( ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR> const & infos,
                                                 ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceAddress> const & indirectDeviceAddresses,
                                                 ArrayProxy<const uint32_t> const &                            indirectStrides,
                                                 ArrayProxy<const uint32_t * const> const &                    pMaxPrimitiveCounts,
                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT_WHEN_NO_EXCEPTIONS;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyAccelerationStructureKHR( const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureInfoKHR * pInfo,
                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyAccelerationStructureKHR( const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureInfoKHR & info,
                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyAccelerationStructureToMemoryKHR( const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureToMemoryInfoKHR * pInfo,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyAccelerationStructureToMemoryKHR( const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureToMemoryInfoKHR & info,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyMemoryToAccelerationStructureKHR( const VULKAN_HPP_NAMESPACE::CopyMemoryToAccelerationStructureInfoKHR * pInfo,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyMemoryToAccelerationStructureKHR( const VULKAN_HPP_NAMESPACE::CopyMemoryToAccelerationStructureInfoKHR & info,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void writeAccelerationStructuresPropertiesKHR( uint32_t                                               accelerationStructureCount,
                                                   const VULKAN_HPP_NAMESPACE::AccelerationStructureKHR * pAccelerationStructures,
                                                   VULKAN_HPP_NAMESPACE::QueryType                        queryType,
                                                   VULKAN_HPP_NAMESPACE::QueryPool                        queryPool,
                                                   uint32_t                                               firstQuery,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void writeAccelerationStructuresPropertiesKHR( ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureKHR> const & accelerationStructures,
                                                   VULKAN_HPP_NAMESPACE::QueryType                                          queryType,
                                                   VULKAN_HPP_NAMESPACE::QueryPool                                          queryPool,
                                                   uint32_t                                                                 firstQuery,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_NV_shading_rate_image ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindShadingRateImageNV( VULKAN_HPP_NAMESPACE::ImageView   imageView,
                                 VULKAN_HPP_NAMESPACE::ImageLayout imageLayout,
                                 Dispatch const & d                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setViewportShadingRatePaletteNV( uint32_t                                           firstViewport,
                                          uint32_t                                           viewportCount,
                                          const VULKAN_HPP_NAMESPACE::ShadingRatePaletteNV * pShadingRatePalettes,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setViewportShadingRatePaletteNV( uint32_t                                                             firstViewport,
                                          ArrayProxy<const VULKAN_HPP_NAMESPACE::ShadingRatePaletteNV> const & shadingRatePalettes,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setCoarseSampleOrderNV( VULKAN_HPP_NAMESPACE::CoarseSampleOrderTypeNV           sampleOrderType,
                                 uint32_t                                                customSampleOrderCount,
                                 const VULKAN_HPP_NAMESPACE::CoarseSampleOrderCustomNV * pCustomSampleOrders,
                                 Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setCoarseSampleOrderNV( VULKAN_HPP_NAMESPACE::CoarseSampleOrderTypeNV                             sampleOrderType,
                                 ArrayProxy<const VULKAN_HPP_NAMESPACE::CoarseSampleOrderCustomNV> const & customSampleOrders,
                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_NV_ray_tracing ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void buildAccelerationStructureNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureInfoNV * pInfo,
                                       VULKAN_HPP_NAMESPACE::Buffer                              instanceData,
                                       VULKAN_HPP_NAMESPACE::DeviceSize                          instanceOffset,
                                       VULKAN_HPP_NAMESPACE::Bool32                              update,
                                       VULKAN_HPP_NAMESPACE::AccelerationStructureNV             dst,
                                       VULKAN_HPP_NAMESPACE::AccelerationStructureNV             src,
                                       VULKAN_HPP_NAMESPACE::Buffer                              scratch,
                                       VULKAN_HPP_NAMESPACE::DeviceSize                          scratchOffset,
                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void buildAccelerationStructureNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureInfoNV & info,
                                       VULKAN_HPP_NAMESPACE::Buffer                              instanceData,
                                       VULKAN_HPP_NAMESPACE::DeviceSize                          instanceOffset,
                                       VULKAN_HPP_NAMESPACE::Bool32                              update,
                                       VULKAN_HPP_NAMESPACE::AccelerationStructureNV             dst,
                                       VULKAN_HPP_NAMESPACE::AccelerationStructureNV             src,
                                       VULKAN_HPP_NAMESPACE::Buffer                              scratch,
                                       VULKAN_HPP_NAMESPACE::DeviceSize                          scratchOffset,
                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyAccelerationStructureNV( VULKAN_HPP_NAMESPACE::AccelerationStructureNV          dst,
                                      VULKAN_HPP_NAMESPACE::AccelerationStructureNV          src,
                                      VULKAN_HPP_NAMESPACE::CopyAccelerationStructureModeKHR mode,
                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void traceRaysNV( VULKAN_HPP_NAMESPACE::Buffer     raygenShaderBindingTableBuffer,
                      VULKAN_HPP_NAMESPACE::DeviceSize raygenShaderBindingOffset,
                      VULKAN_HPP_NAMESPACE::Buffer     missShaderBindingTableBuffer,
                      VULKAN_HPP_NAMESPACE::DeviceSize missShaderBindingOffset,
                      VULKAN_HPP_NAMESPACE::DeviceSize missShaderBindingStride,
                      VULKAN_HPP_NAMESPACE::Buffer     hitShaderBindingTableBuffer,
                      VULKAN_HPP_NAMESPACE::DeviceSize hitShaderBindingOffset,
                      VULKAN_HPP_NAMESPACE::DeviceSize hitShaderBindingStride,
                      VULKAN_HPP_NAMESPACE::Buffer     callableShaderBindingTableBuffer,
                      VULKAN_HPP_NAMESPACE::DeviceSize callableShaderBindingOffset,
                      VULKAN_HPP_NAMESPACE::DeviceSize callableShaderBindingStride,
                      uint32_t                         width,
                      uint32_t                         height,
                      uint32_t                         depth,
                      Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void writeAccelerationStructuresPropertiesNV( uint32_t                                              accelerationStructureCount,
                                                  const VULKAN_HPP_NAMESPACE::AccelerationStructureNV * pAccelerationStructures,
                                                  VULKAN_HPP_NAMESPACE::QueryType                       queryType,
                                                  VULKAN_HPP_NAMESPACE::QueryPool                       queryPool,
                                                  uint32_t                                              firstQuery,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void writeAccelerationStructuresPropertiesNV( ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureNV> const & accelerationStructures,
                                                  VULKAN_HPP_NAMESPACE::QueryType                                         queryType,
                                                  VULKAN_HPP_NAMESPACE::QueryPool                                         queryPool,
                                                  uint32_t                                                                firstQuery,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_draw_indirect_count ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawIndirectCountKHR( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                               VULKAN_HPP_NAMESPACE::DeviceSize offset,
                               VULKAN_HPP_NAMESPACE::Buffer     countBuffer,
                               VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset,
                               uint32_t                         maxDrawCount,
                               uint32_t                         stride,
                               Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawIndexedIndirectCountKHR( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                                      VULKAN_HPP_NAMESPACE::DeviceSize offset,
                                      VULKAN_HPP_NAMESPACE::Buffer     countBuffer,
                                      VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset,
                                      uint32_t                         maxDrawCount,
                                      uint32_t                         stride,
                                      Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_AMD_buffer_marker ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void writeBufferMarkerAMD( VULKAN_HPP_NAMESPACE::PipelineStageFlagBits pipelineStage,
                               VULKAN_HPP_NAMESPACE::Buffer                dstBuffer,
                               VULKAN_HPP_NAMESPACE::DeviceSize            dstOffset,
                               uint32_t                                    marker,
                               Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_NV_mesh_shader ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawMeshTasksNV( uint32_t taskCount, uint32_t firstTask, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawMeshTasksIndirectNV( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                                  VULKAN_HPP_NAMESPACE::DeviceSize offset,
                                  uint32_t                         drawCount,
                                  uint32_t                         stride,
                                  Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawMeshTasksIndirectCountNV( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                                       VULKAN_HPP_NAMESPACE::DeviceSize offset,
                                       VULKAN_HPP_NAMESPACE::Buffer     countBuffer,
                                       VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset,
                                       uint32_t                         maxDrawCount,
                                       uint32_t                         stride,
                                       Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_NV_scissor_exclusive ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setExclusiveScissorNV( uint32_t                             firstExclusiveScissor,
                                uint32_t                             exclusiveScissorCount,
                                const VULKAN_HPP_NAMESPACE::Rect2D * pExclusiveScissors,
                                Dispatch const & d                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setExclusiveScissorNV( uint32_t                                               firstExclusiveScissor,
                                ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & exclusiveScissors,
                                Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_NV_device_diagnostic_checkpoints ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setCheckpointNV( const void * pCheckpointMarker, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename CheckpointMarkerType, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setCheckpointNV( CheckpointMarkerType const & checkpointMarker,
                          Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_INTEL_performance_query ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result setPerformanceMarkerINTEL( const VULKAN_HPP_NAMESPACE::PerformanceMarkerInfoINTEL * pMarkerInfo,
                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      setPerformanceMarkerINTEL( const VULKAN_HPP_NAMESPACE::PerformanceMarkerInfoINTEL & markerInfo,
                                 Dispatch const & d                                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result setPerformanceStreamMarkerINTEL( const VULKAN_HPP_NAMESPACE::PerformanceStreamMarkerInfoINTEL * pMarkerInfo,
                                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      setPerformanceStreamMarkerINTEL( const VULKAN_HPP_NAMESPACE::PerformanceStreamMarkerInfoINTEL & markerInfo,
                                       Dispatch const & d                                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result setPerformanceOverrideINTEL( const VULKAN_HPP_NAMESPACE::PerformanceOverrideInfoINTEL * pOverrideInfo,
                                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      setPerformanceOverrideINTEL( const VULKAN_HPP_NAMESPACE::PerformanceOverrideInfoINTEL & overrideInfo,
                                   Dispatch const & d                                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_fragment_shading_rate ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setFragmentShadingRateKHR( const VULKAN_HPP_NAMESPACE::Extent2D *                       pFragmentSize,
                                    const VULKAN_HPP_NAMESPACE::FragmentShadingRateCombinerOpKHR combinerOps[2],
                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setFragmentShadingRateKHR( const VULKAN_HPP_NAMESPACE::Extent2D &                       fragmentSize,
                                    const VULKAN_HPP_NAMESPACE::FragmentShadingRateCombinerOpKHR combinerOps[2],
                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_line_rasterization ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setLineStippleEXT( uint32_t           lineStippleFactor,
                            uint16_t           lineStipplePattern,
                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_EXT_extended_dynamic_state ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setCullModeEXT( VULKAN_HPP_NAMESPACE::CullModeFlags cullMode, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setFrontFaceEXT( VULKAN_HPP_NAMESPACE::FrontFace frontFace, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setPrimitiveTopologyEXT( VULKAN_HPP_NAMESPACE::PrimitiveTopology primitiveTopology,
                                  Dispatch const & d                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setViewportWithCountEXT( uint32_t                               viewportCount,
                                  const VULKAN_HPP_NAMESPACE::Viewport * pViewports,
                                  Dispatch const & d                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setViewportWithCountEXT( ArrayProxy<const VULKAN_HPP_NAMESPACE::Viewport> const & viewports,
                                  Dispatch const & d                                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setScissorWithCountEXT( uint32_t                             scissorCount,
                                 const VULKAN_HPP_NAMESPACE::Rect2D * pScissors,
                                 Dispatch const & d                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setScissorWithCountEXT( ArrayProxy<const VULKAN_HPP_NAMESPACE::Rect2D> const & scissors,
                                 Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindVertexBuffers2EXT( uint32_t                                 firstBinding,
                                uint32_t                                 bindingCount,
                                const VULKAN_HPP_NAMESPACE::Buffer *     pBuffers,
                                const VULKAN_HPP_NAMESPACE::DeviceSize * pOffsets,
                                const VULKAN_HPP_NAMESPACE::DeviceSize * pSizes,
                                const VULKAN_HPP_NAMESPACE::DeviceSize * pStrides,
                                Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindVertexBuffers2EXT( uint32_t                                                           firstBinding,
                                ArrayProxy<const VULKAN_HPP_NAMESPACE::Buffer> const &             buffers,
                                ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const &         offsets,
                                ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & sizes   VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                ArrayProxy<const VULKAN_HPP_NAMESPACE::DeviceSize> const & strides VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT_WHEN_NO_EXCEPTIONS;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDepthTestEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthTestEnable,
                                Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDepthWriteEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthWriteEnable,
                                 Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDepthCompareOpEXT( VULKAN_HPP_NAMESPACE::CompareOp depthCompareOp,
                               Dispatch const & d              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDepthBoundsTestEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthBoundsTestEnable,
                                      Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setStencilTestEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 stencilTestEnable,
                                  Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setStencilOpEXT( VULKAN_HPP_NAMESPACE::StencilFaceFlags faceMask,
                          VULKAN_HPP_NAMESPACE::StencilOp        failOp,
                          VULKAN_HPP_NAMESPACE::StencilOp        passOp,
                          VULKAN_HPP_NAMESPACE::StencilOp        depthFailOp,
                          VULKAN_HPP_NAMESPACE::CompareOp        compareOp,
                          Dispatch const & d                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_NV_device_generated_commands ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void preprocessGeneratedCommandsNV( const VULKAN_HPP_NAMESPACE::GeneratedCommandsInfoNV * pGeneratedCommandsInfo,
                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void preprocessGeneratedCommandsNV( const VULKAN_HPP_NAMESPACE::GeneratedCommandsInfoNV & generatedCommandsInfo,
                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void executeGeneratedCommandsNV( VULKAN_HPP_NAMESPACE::Bool32                          isPreprocessed,
                                     const VULKAN_HPP_NAMESPACE::GeneratedCommandsInfoNV * pGeneratedCommandsInfo,
                                     Dispatch const & d                                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void executeGeneratedCommandsNV( VULKAN_HPP_NAMESPACE::Bool32                          isPreprocessed,
                                     const VULKAN_HPP_NAMESPACE::GeneratedCommandsInfoNV & generatedCommandsInfo,
                                     Dispatch const & d                                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindPipelineShaderGroupNV( VULKAN_HPP_NAMESPACE::PipelineBindPoint pipelineBindPoint,
                                    VULKAN_HPP_NAMESPACE::Pipeline          pipeline,
                                    uint32_t                                groupIndex,
                                    Dispatch const & d                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

#if defined( VK_ENABLE_BETA_EXTENSIONS )
    //=== VK_KHR_video_encode_queue ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void encodeVideoKHR( const VULKAN_HPP_NAMESPACE::VideoEncodeInfoKHR * pEncodeInfo,
                         Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void encodeVideoKHR( const VULKAN_HPP_NAMESPACE::VideoEncodeInfoKHR & encodeInfo,
                         Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_ENABLE_BETA_EXTENSIONS*/

    //=== VK_KHR_synchronization2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setEvent2KHR( VULKAN_HPP_NAMESPACE::Event                  event,
                       const VULKAN_HPP_NAMESPACE::DependencyInfo * pDependencyInfo,
                       Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setEvent2KHR( VULKAN_HPP_NAMESPACE::Event                  event,
                       const VULKAN_HPP_NAMESPACE::DependencyInfo & dependencyInfo,
                       Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resetEvent2KHR( VULKAN_HPP_NAMESPACE::Event               event,
                         VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stageMask,
                         Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void waitEvents2KHR( uint32_t                                     eventCount,
                         const VULKAN_HPP_NAMESPACE::Event *          pEvents,
                         const VULKAN_HPP_NAMESPACE::DependencyInfo * pDependencyInfos,
                         Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void waitEvents2KHR( ArrayProxy<const VULKAN_HPP_NAMESPACE::Event> const &          events,
                         ArrayProxy<const VULKAN_HPP_NAMESPACE::DependencyInfo> const & dependencyInfos,
                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT_WHEN_NO_EXCEPTIONS;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void pipelineBarrier2KHR( const VULKAN_HPP_NAMESPACE::DependencyInfo * pDependencyInfo,
                              Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void pipelineBarrier2KHR( const VULKAN_HPP_NAMESPACE::DependencyInfo & dependencyInfo,
                              Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void writeTimestamp2KHR( VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stage,
                             VULKAN_HPP_NAMESPACE::QueryPool           queryPool,
                             uint32_t                                  query,
                             Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void writeBufferMarker2AMD( VULKAN_HPP_NAMESPACE::PipelineStageFlags2 stage,
                                VULKAN_HPP_NAMESPACE::Buffer              dstBuffer,
                                VULKAN_HPP_NAMESPACE::DeviceSize          dstOffset,
                                uint32_t                                  marker,
                                Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_NV_fragment_shading_rate_enums ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setFragmentShadingRateEnumNV( VULKAN_HPP_NAMESPACE::FragmentShadingRateNV                  shadingRate,
                                       const VULKAN_HPP_NAMESPACE::FragmentShadingRateCombinerOpKHR combinerOps[2],
                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_EXT_mesh_shader ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawMeshTasksEXT( uint32_t           groupCountX,
                           uint32_t           groupCountY,
                           uint32_t           groupCountZ,
                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawMeshTasksIndirectEXT( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                                   VULKAN_HPP_NAMESPACE::DeviceSize offset,
                                   uint32_t                         drawCount,
                                   uint32_t                         stride,
                                   Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawMeshTasksIndirectCountEXT( VULKAN_HPP_NAMESPACE::Buffer     buffer,
                                        VULKAN_HPP_NAMESPACE::DeviceSize offset,
                                        VULKAN_HPP_NAMESPACE::Buffer     countBuffer,
                                        VULKAN_HPP_NAMESPACE::DeviceSize countBufferOffset,
                                        uint32_t                         maxDrawCount,
                                        uint32_t                         stride,
                                        Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_KHR_copy_commands2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyBuffer2KHR( const VULKAN_HPP_NAMESPACE::CopyBufferInfo2 * pCopyBufferInfo,
                         Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyBuffer2KHR( const VULKAN_HPP_NAMESPACE::CopyBufferInfo2 & copyBufferInfo,
                         Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyImage2KHR( const VULKAN_HPP_NAMESPACE::CopyImageInfo2 * pCopyImageInfo,
                        Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyImage2KHR( const VULKAN_HPP_NAMESPACE::CopyImageInfo2 & copyImageInfo,
                        Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyBufferToImage2KHR( const VULKAN_HPP_NAMESPACE::CopyBufferToImageInfo2 * pCopyBufferToImageInfo,
                                Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyBufferToImage2KHR( const VULKAN_HPP_NAMESPACE::CopyBufferToImageInfo2 & copyBufferToImageInfo,
                                Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyImageToBuffer2KHR( const VULKAN_HPP_NAMESPACE::CopyImageToBufferInfo2 * pCopyImageToBufferInfo,
                                Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void copyImageToBuffer2KHR( const VULKAN_HPP_NAMESPACE::CopyImageToBufferInfo2 & copyImageToBufferInfo,
                                Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void blitImage2KHR( const VULKAN_HPP_NAMESPACE::BlitImageInfo2 * pBlitImageInfo,
                        Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void blitImage2KHR( const VULKAN_HPP_NAMESPACE::BlitImageInfo2 & blitImageInfo,
                        Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resolveImage2KHR( const VULKAN_HPP_NAMESPACE::ResolveImageInfo2 * pResolveImageInfo,
                           Dispatch const & d                              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resolveImage2KHR( const VULKAN_HPP_NAMESPACE::ResolveImageInfo2 & resolveImageInfo,
                           Dispatch const & d                              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_ray_tracing_pipeline ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void traceRaysKHR( const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR * pRaygenShaderBindingTable,
                       const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR * pMissShaderBindingTable,
                       const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR * pHitShaderBindingTable,
                       const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR * pCallableShaderBindingTable,
                       uint32_t                                                    width,
                       uint32_t                                                    height,
                       uint32_t                                                    depth,
                       Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void traceRaysKHR( const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & raygenShaderBindingTable,
                       const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & missShaderBindingTable,
                       const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & hitShaderBindingTable,
                       const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & callableShaderBindingTable,
                       uint32_t                                                    width,
                       uint32_t                                                    height,
                       uint32_t                                                    depth,
                       Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void traceRaysIndirectKHR( const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR * pRaygenShaderBindingTable,
                               const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR * pMissShaderBindingTable,
                               const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR * pHitShaderBindingTable,
                               const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR * pCallableShaderBindingTable,
                               VULKAN_HPP_NAMESPACE::DeviceAddress                         indirectDeviceAddress,
                               Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void traceRaysIndirectKHR( const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & raygenShaderBindingTable,
                               const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & missShaderBindingTable,
                               const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & hitShaderBindingTable,
                               const VULKAN_HPP_NAMESPACE::StridedDeviceAddressRegionKHR & callableShaderBindingTable,
                               VULKAN_HPP_NAMESPACE::DeviceAddress                         indirectDeviceAddress,
                               Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setRayTracingPipelineStackSizeKHR( uint32_t pipelineStackSize, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_EXT_vertex_input_dynamic_state ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setVertexInputEXT( uint32_t                                                          vertexBindingDescriptionCount,
                            const VULKAN_HPP_NAMESPACE::VertexInputBindingDescription2EXT *   pVertexBindingDescriptions,
                            uint32_t                                                          vertexAttributeDescriptionCount,
                            const VULKAN_HPP_NAMESPACE::VertexInputAttributeDescription2EXT * pVertexAttributeDescriptions,
                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setVertexInputEXT( ArrayProxy<const VULKAN_HPP_NAMESPACE::VertexInputBindingDescription2EXT> const &   vertexBindingDescriptions,
                            ArrayProxy<const VULKAN_HPP_NAMESPACE::VertexInputAttributeDescription2EXT> const & vertexAttributeDescriptions,
                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_HUAWEI_subpass_shading ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void subpassShadingHUAWEI( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_HUAWEI_invocation_mask ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void bindInvocationMaskHUAWEI( VULKAN_HPP_NAMESPACE::ImageView   imageView,
                                   VULKAN_HPP_NAMESPACE::ImageLayout imageLayout,
                                   Dispatch const & d                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_EXT_extended_dynamic_state2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setPatchControlPointsEXT( uint32_t patchControlPoints, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setRasterizerDiscardEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 rasterizerDiscardEnable,
                                        Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setDepthBiasEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 depthBiasEnable,
                                Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setLogicOpEXT( VULKAN_HPP_NAMESPACE::LogicOp logicOp, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setPrimitiveRestartEnableEXT( VULKAN_HPP_NAMESPACE::Bool32 primitiveRestartEnable,
                                       Dispatch const & d           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_EXT_color_write_enable ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setColorWriteEnableEXT( uint32_t                             attachmentCount,
                                 const VULKAN_HPP_NAMESPACE::Bool32 * pColorWriteEnables,
                                 Dispatch const & d                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setColorWriteEnableEXT( ArrayProxy<const VULKAN_HPP_NAMESPACE::Bool32> const & colorWriteEnables,
                                 Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_ray_tracing_maintenance1 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void traceRaysIndirect2KHR( VULKAN_HPP_NAMESPACE::DeviceAddress indirectDeviceAddress,
                                Dispatch const & d                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_EXT_multi_draw ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawMultiEXT( uint32_t                                       drawCount,
                       const VULKAN_HPP_NAMESPACE::MultiDrawInfoEXT * pVertexInfo,
                       uint32_t                                       instanceCount,
                       uint32_t                                       firstInstance,
                       uint32_t                                       stride,
                       Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawMultiEXT( ArrayProxy<const VULKAN_HPP_NAMESPACE::MultiDrawInfoEXT> const & vertexInfo,
                       uint32_t                                                         instanceCount,
                       uint32_t                                                         firstInstance,
                       uint32_t                                                         stride,
                       Dispatch const & d                                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawMultiIndexedEXT( uint32_t                                              drawCount,
                              const VULKAN_HPP_NAMESPACE::MultiDrawIndexedInfoEXT * pIndexInfo,
                              uint32_t                                              instanceCount,
                              uint32_t                                              firstInstance,
                              uint32_t                                              stride,
                              const int32_t *                                       pVertexOffset,
                              Dispatch const & d                                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void drawMultiIndexedEXT( ArrayProxy<const VULKAN_HPP_NAMESPACE::MultiDrawIndexedInfoEXT> const & indexInfo,
                              uint32_t                                                                instanceCount,
                              uint32_t                                                                firstInstance,
                              uint32_t                                                                stride,
                              Optional<const int32_t> vertexOffset                                    VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    operator VkCommandBuffer() const VULKAN_HPP_NOEXCEPT
    {
      return m_commandBuffer;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_commandBuffer != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_commandBuffer == VK_NULL_HANDLE;
    }

  private:
    VkCommandBuffer m_commandBuffer = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eCommandBuffer>
  {
    using Type = VULKAN_HPP_NAMESPACE::CommandBuffer;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eCommandBuffer>
  {
    using Type = VULKAN_HPP_NAMESPACE::CommandBuffer;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::CommandBuffer>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class DeviceMemory
  {
  public:
    using CType      = VkDeviceMemory;
    using NativeType = VkDeviceMemory;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDeviceMemory;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDeviceMemory;

  public:
    VULKAN_HPP_CONSTEXPR         DeviceMemory() = default;
    VULKAN_HPP_CONSTEXPR         DeviceMemory( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT DeviceMemory( VkDeviceMemory deviceMemory ) VULKAN_HPP_NOEXCEPT : m_deviceMemory( deviceMemory ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    DeviceMemory & operator=( VkDeviceMemory deviceMemory ) VULKAN_HPP_NOEXCEPT
    {
      m_deviceMemory = deviceMemory;
      return *this;
    }
#endif

    DeviceMemory & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_deviceMemory = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( DeviceMemory const & ) const = default;
#else
    bool                                 operator==( DeviceMemory const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_deviceMemory == rhs.m_deviceMemory;
    }

    bool operator!=( DeviceMemory const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_deviceMemory != rhs.m_deviceMemory;
    }

    bool operator<( DeviceMemory const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_deviceMemory < rhs.m_deviceMemory;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkDeviceMemory() const VULKAN_HPP_NOEXCEPT
    {
      return m_deviceMemory;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_deviceMemory != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_deviceMemory == VK_NULL_HANDLE;
    }

  private:
    VkDeviceMemory m_deviceMemory = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eDeviceMemory>
  {
    using Type = VULKAN_HPP_NAMESPACE::DeviceMemory;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDeviceMemory>
  {
    using Type = VULKAN_HPP_NAMESPACE::DeviceMemory;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::DeviceMemory>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  class VideoSessionKHR
  {
  public:
    using CType      = VkVideoSessionKHR;
    using NativeType = VkVideoSessionKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eVideoSessionKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:
    VULKAN_HPP_CONSTEXPR         VideoSessionKHR() = default;
    VULKAN_HPP_CONSTEXPR         VideoSessionKHR( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT VideoSessionKHR( VkVideoSessionKHR videoSessionKHR ) VULKAN_HPP_NOEXCEPT : m_videoSessionKHR( videoSessionKHR ) {}

#  if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    VideoSessionKHR & operator=( VkVideoSessionKHR videoSessionKHR ) VULKAN_HPP_NOEXCEPT
    {
      m_videoSessionKHR = videoSessionKHR;
      return *this;
    }
#  endif

    VideoSessionKHR & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_videoSessionKHR = {};
      return *this;
    }

#  if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( VideoSessionKHR const & ) const = default;
#  else
    bool operator==( VideoSessionKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionKHR == rhs.m_videoSessionKHR;
    }

    bool operator!=( VideoSessionKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionKHR != rhs.m_videoSessionKHR;
    }

    bool operator<( VideoSessionKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionKHR < rhs.m_videoSessionKHR;
    }
#  endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkVideoSessionKHR() const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionKHR;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionKHR != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionKHR == VK_NULL_HANDLE;
    }

  private:
    VkVideoSessionKHR m_videoSessionKHR = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eVideoSessionKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::VideoSessionKHR;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::VideoSessionKHR>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

  class DeferredOperationKHR
  {
  public:
    using CType      = VkDeferredOperationKHR;
    using NativeType = VkDeferredOperationKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDeferredOperationKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:
    VULKAN_HPP_CONSTEXPR         DeferredOperationKHR() = default;
    VULKAN_HPP_CONSTEXPR         DeferredOperationKHR( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT DeferredOperationKHR( VkDeferredOperationKHR deferredOperationKHR ) VULKAN_HPP_NOEXCEPT
      : m_deferredOperationKHR( deferredOperationKHR )
    {
    }

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    DeferredOperationKHR & operator=( VkDeferredOperationKHR deferredOperationKHR ) VULKAN_HPP_NOEXCEPT
    {
      m_deferredOperationKHR = deferredOperationKHR;
      return *this;
    }
#endif

    DeferredOperationKHR & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_deferredOperationKHR = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( DeferredOperationKHR const & ) const = default;
#else
    bool operator==( DeferredOperationKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_deferredOperationKHR == rhs.m_deferredOperationKHR;
    }

    bool operator!=( DeferredOperationKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_deferredOperationKHR != rhs.m_deferredOperationKHR;
    }

    bool operator<( DeferredOperationKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_deferredOperationKHR < rhs.m_deferredOperationKHR;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkDeferredOperationKHR() const VULKAN_HPP_NOEXCEPT
    {
      return m_deferredOperationKHR;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_deferredOperationKHR != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_deferredOperationKHR == VK_NULL_HANDLE;
    }

  private:
    VkDeferredOperationKHR m_deferredOperationKHR = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eDeferredOperationKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::DeferredOperationKHR;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::DeferredOperationKHR>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

#if defined( VK_USE_PLATFORM_FUCHSIA )
  class BufferCollectionFUCHSIA
  {
  public:
    using CType      = VkBufferCollectionFUCHSIA;
    using NativeType = VkBufferCollectionFUCHSIA;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eBufferCollectionFUCHSIA;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eBufferCollectionFUCHSIA;

  public:
    VULKAN_HPP_CONSTEXPR         BufferCollectionFUCHSIA() = default;
    VULKAN_HPP_CONSTEXPR         BufferCollectionFUCHSIA( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT BufferCollectionFUCHSIA( VkBufferCollectionFUCHSIA bufferCollectionFUCHSIA ) VULKAN_HPP_NOEXCEPT
      : m_bufferCollectionFUCHSIA( bufferCollectionFUCHSIA )
    {
    }

#  if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    BufferCollectionFUCHSIA & operator=( VkBufferCollectionFUCHSIA bufferCollectionFUCHSIA ) VULKAN_HPP_NOEXCEPT
    {
      m_bufferCollectionFUCHSIA = bufferCollectionFUCHSIA;
      return *this;
    }
#  endif

    BufferCollectionFUCHSIA & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_bufferCollectionFUCHSIA = {};
      return *this;
    }

#  if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( BufferCollectionFUCHSIA const & ) const = default;
#  else
    bool operator==( BufferCollectionFUCHSIA const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferCollectionFUCHSIA == rhs.m_bufferCollectionFUCHSIA;
    }

    bool operator!=( BufferCollectionFUCHSIA const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferCollectionFUCHSIA != rhs.m_bufferCollectionFUCHSIA;
    }

    bool operator<( BufferCollectionFUCHSIA const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferCollectionFUCHSIA < rhs.m_bufferCollectionFUCHSIA;
    }
#  endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkBufferCollectionFUCHSIA() const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferCollectionFUCHSIA;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferCollectionFUCHSIA != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferCollectionFUCHSIA == VK_NULL_HANDLE;
    }

  private:
    VkBufferCollectionFUCHSIA m_bufferCollectionFUCHSIA = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eBufferCollectionFUCHSIA>
  {
    using Type = VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eBufferCollectionFUCHSIA>
  {
    using Type = VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };
#endif /*VK_USE_PLATFORM_FUCHSIA*/

  class BufferView
  {
  public:
    using CType      = VkBufferView;
    using NativeType = VkBufferView;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eBufferView;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eBufferView;

  public:
    VULKAN_HPP_CONSTEXPR         BufferView() = default;
    VULKAN_HPP_CONSTEXPR         BufferView( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT BufferView( VkBufferView bufferView ) VULKAN_HPP_NOEXCEPT : m_bufferView( bufferView ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    BufferView & operator=( VkBufferView bufferView ) VULKAN_HPP_NOEXCEPT
    {
      m_bufferView = bufferView;
      return *this;
    }
#endif

    BufferView & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_bufferView = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( BufferView const & ) const = default;
#else
    bool operator==( BufferView const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferView == rhs.m_bufferView;
    }

    bool operator!=( BufferView const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferView != rhs.m_bufferView;
    }

    bool operator<( BufferView const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferView < rhs.m_bufferView;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkBufferView() const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferView;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferView != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_bufferView == VK_NULL_HANDLE;
    }

  private:
    VkBufferView m_bufferView = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eBufferView>
  {
    using Type = VULKAN_HPP_NAMESPACE::BufferView;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eBufferView>
  {
    using Type = VULKAN_HPP_NAMESPACE::BufferView;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::BufferView>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class CommandPool
  {
  public:
    using CType      = VkCommandPool;
    using NativeType = VkCommandPool;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eCommandPool;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eCommandPool;

  public:
    VULKAN_HPP_CONSTEXPR         CommandPool() = default;
    VULKAN_HPP_CONSTEXPR         CommandPool( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT CommandPool( VkCommandPool commandPool ) VULKAN_HPP_NOEXCEPT : m_commandPool( commandPool ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    CommandPool & operator=( VkCommandPool commandPool ) VULKAN_HPP_NOEXCEPT
    {
      m_commandPool = commandPool;
      return *this;
    }
#endif

    CommandPool & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_commandPool = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( CommandPool const & ) const = default;
#else
    bool operator==( CommandPool const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_commandPool == rhs.m_commandPool;
    }

    bool operator!=( CommandPool const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_commandPool != rhs.m_commandPool;
    }

    bool operator<( CommandPool const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_commandPool < rhs.m_commandPool;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkCommandPool() const VULKAN_HPP_NOEXCEPT
    {
      return m_commandPool;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_commandPool != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_commandPool == VK_NULL_HANDLE;
    }

  private:
    VkCommandPool m_commandPool = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eCommandPool>
  {
    using Type = VULKAN_HPP_NAMESPACE::CommandPool;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eCommandPool>
  {
    using Type = VULKAN_HPP_NAMESPACE::CommandPool;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::CommandPool>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class PipelineCache
  {
  public:
    using CType      = VkPipelineCache;
    using NativeType = VkPipelineCache;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::ePipelineCache;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::ePipelineCache;

  public:
    VULKAN_HPP_CONSTEXPR         PipelineCache() = default;
    VULKAN_HPP_CONSTEXPR         PipelineCache( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT PipelineCache( VkPipelineCache pipelineCache ) VULKAN_HPP_NOEXCEPT : m_pipelineCache( pipelineCache ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    PipelineCache & operator=( VkPipelineCache pipelineCache ) VULKAN_HPP_NOEXCEPT
    {
      m_pipelineCache = pipelineCache;
      return *this;
    }
#endif

    PipelineCache & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_pipelineCache = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( PipelineCache const & ) const = default;
#else
    bool operator==( PipelineCache const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineCache == rhs.m_pipelineCache;
    }

    bool operator!=( PipelineCache const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineCache != rhs.m_pipelineCache;
    }

    bool operator<( PipelineCache const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineCache < rhs.m_pipelineCache;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkPipelineCache() const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineCache;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineCache != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_pipelineCache == VK_NULL_HANDLE;
    }

  private:
    VkPipelineCache m_pipelineCache = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::ePipelineCache>
  {
    using Type = VULKAN_HPP_NAMESPACE::PipelineCache;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::ePipelineCache>
  {
    using Type = VULKAN_HPP_NAMESPACE::PipelineCache;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::PipelineCache>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class CuFunctionNVX
  {
  public:
    using CType      = VkCuFunctionNVX;
    using NativeType = VkCuFunctionNVX;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eCuFunctionNVX;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eCuFunctionNVX;

  public:
    VULKAN_HPP_CONSTEXPR         CuFunctionNVX() = default;
    VULKAN_HPP_CONSTEXPR         CuFunctionNVX( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT CuFunctionNVX( VkCuFunctionNVX cuFunctionNVX ) VULKAN_HPP_NOEXCEPT : m_cuFunctionNVX( cuFunctionNVX ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    CuFunctionNVX & operator=( VkCuFunctionNVX cuFunctionNVX ) VULKAN_HPP_NOEXCEPT
    {
      m_cuFunctionNVX = cuFunctionNVX;
      return *this;
    }
#endif

    CuFunctionNVX & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_cuFunctionNVX = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( CuFunctionNVX const & ) const = default;
#else
    bool operator==( CuFunctionNVX const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_cuFunctionNVX == rhs.m_cuFunctionNVX;
    }

    bool operator!=( CuFunctionNVX const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_cuFunctionNVX != rhs.m_cuFunctionNVX;
    }

    bool operator<( CuFunctionNVX const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_cuFunctionNVX < rhs.m_cuFunctionNVX;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkCuFunctionNVX() const VULKAN_HPP_NOEXCEPT
    {
      return m_cuFunctionNVX;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_cuFunctionNVX != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_cuFunctionNVX == VK_NULL_HANDLE;
    }

  private:
    VkCuFunctionNVX m_cuFunctionNVX = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eCuFunctionNVX>
  {
    using Type = VULKAN_HPP_NAMESPACE::CuFunctionNVX;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eCuFunctionNVX>
  {
    using Type = VULKAN_HPP_NAMESPACE::CuFunctionNVX;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::CuFunctionNVX>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class CuModuleNVX
  {
  public:
    using CType      = VkCuModuleNVX;
    using NativeType = VkCuModuleNVX;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eCuModuleNVX;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eCuModuleNVX;

  public:
    VULKAN_HPP_CONSTEXPR         CuModuleNVX() = default;
    VULKAN_HPP_CONSTEXPR         CuModuleNVX( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT CuModuleNVX( VkCuModuleNVX cuModuleNVX ) VULKAN_HPP_NOEXCEPT : m_cuModuleNVX( cuModuleNVX ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    CuModuleNVX & operator=( VkCuModuleNVX cuModuleNVX ) VULKAN_HPP_NOEXCEPT
    {
      m_cuModuleNVX = cuModuleNVX;
      return *this;
    }
#endif

    CuModuleNVX & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_cuModuleNVX = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( CuModuleNVX const & ) const = default;
#else
    bool operator==( CuModuleNVX const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_cuModuleNVX == rhs.m_cuModuleNVX;
    }

    bool operator!=( CuModuleNVX const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_cuModuleNVX != rhs.m_cuModuleNVX;
    }

    bool operator<( CuModuleNVX const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_cuModuleNVX < rhs.m_cuModuleNVX;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkCuModuleNVX() const VULKAN_HPP_NOEXCEPT
    {
      return m_cuModuleNVX;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_cuModuleNVX != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_cuModuleNVX == VK_NULL_HANDLE;
    }

  private:
    VkCuModuleNVX m_cuModuleNVX = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eCuModuleNVX>
  {
    using Type = VULKAN_HPP_NAMESPACE::CuModuleNVX;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eCuModuleNVX>
  {
    using Type = VULKAN_HPP_NAMESPACE::CuModuleNVX;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::CuModuleNVX>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class DescriptorPool
  {
  public:
    using CType      = VkDescriptorPool;
    using NativeType = VkDescriptorPool;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDescriptorPool;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDescriptorPool;

  public:
    VULKAN_HPP_CONSTEXPR         DescriptorPool() = default;
    VULKAN_HPP_CONSTEXPR         DescriptorPool( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT DescriptorPool( VkDescriptorPool descriptorPool ) VULKAN_HPP_NOEXCEPT : m_descriptorPool( descriptorPool ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    DescriptorPool & operator=( VkDescriptorPool descriptorPool ) VULKAN_HPP_NOEXCEPT
    {
      m_descriptorPool = descriptorPool;
      return *this;
    }
#endif

    DescriptorPool & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_descriptorPool = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( DescriptorPool const & ) const = default;
#else
    bool operator==( DescriptorPool const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorPool == rhs.m_descriptorPool;
    }

    bool operator!=( DescriptorPool const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorPool != rhs.m_descriptorPool;
    }

    bool operator<( DescriptorPool const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorPool < rhs.m_descriptorPool;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkDescriptorPool() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorPool;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorPool != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorPool == VK_NULL_HANDLE;
    }

  private:
    VkDescriptorPool m_descriptorPool = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eDescriptorPool>
  {
    using Type = VULKAN_HPP_NAMESPACE::DescriptorPool;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDescriptorPool>
  {
    using Type = VULKAN_HPP_NAMESPACE::DescriptorPool;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::DescriptorPool>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class DescriptorSetLayout
  {
  public:
    using CType      = VkDescriptorSetLayout;
    using NativeType = VkDescriptorSetLayout;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDescriptorSetLayout;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDescriptorSetLayout;

  public:
    VULKAN_HPP_CONSTEXPR         DescriptorSetLayout() = default;
    VULKAN_HPP_CONSTEXPR         DescriptorSetLayout( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT DescriptorSetLayout( VkDescriptorSetLayout descriptorSetLayout ) VULKAN_HPP_NOEXCEPT
      : m_descriptorSetLayout( descriptorSetLayout )
    {
    }

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    DescriptorSetLayout & operator=( VkDescriptorSetLayout descriptorSetLayout ) VULKAN_HPP_NOEXCEPT
    {
      m_descriptorSetLayout = descriptorSetLayout;
      return *this;
    }
#endif

    DescriptorSetLayout & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_descriptorSetLayout = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( DescriptorSetLayout const & ) const = default;
#else
    bool operator==( DescriptorSetLayout const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSetLayout == rhs.m_descriptorSetLayout;
    }

    bool operator!=( DescriptorSetLayout const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSetLayout != rhs.m_descriptorSetLayout;
    }

    bool operator<( DescriptorSetLayout const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSetLayout < rhs.m_descriptorSetLayout;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkDescriptorSetLayout() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSetLayout;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSetLayout != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_descriptorSetLayout == VK_NULL_HANDLE;
    }

  private:
    VkDescriptorSetLayout m_descriptorSetLayout = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eDescriptorSetLayout>
  {
    using Type = VULKAN_HPP_NAMESPACE::DescriptorSetLayout;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDescriptorSetLayout>
  {
    using Type = VULKAN_HPP_NAMESPACE::DescriptorSetLayout;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::DescriptorSetLayout>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class Framebuffer
  {
  public:
    using CType      = VkFramebuffer;
    using NativeType = VkFramebuffer;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eFramebuffer;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eFramebuffer;

  public:
    VULKAN_HPP_CONSTEXPR         Framebuffer() = default;
    VULKAN_HPP_CONSTEXPR         Framebuffer( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT Framebuffer( VkFramebuffer framebuffer ) VULKAN_HPP_NOEXCEPT : m_framebuffer( framebuffer ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    Framebuffer & operator=( VkFramebuffer framebuffer ) VULKAN_HPP_NOEXCEPT
    {
      m_framebuffer = framebuffer;
      return *this;
    }
#endif

    Framebuffer & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_framebuffer = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( Framebuffer const & ) const = default;
#else
    bool operator==( Framebuffer const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_framebuffer == rhs.m_framebuffer;
    }

    bool operator!=( Framebuffer const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_framebuffer != rhs.m_framebuffer;
    }

    bool operator<( Framebuffer const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_framebuffer < rhs.m_framebuffer;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkFramebuffer() const VULKAN_HPP_NOEXCEPT
    {
      return m_framebuffer;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_framebuffer != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_framebuffer == VK_NULL_HANDLE;
    }

  private:
    VkFramebuffer m_framebuffer = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eFramebuffer>
  {
    using Type = VULKAN_HPP_NAMESPACE::Framebuffer;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eFramebuffer>
  {
    using Type = VULKAN_HPP_NAMESPACE::Framebuffer;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::Framebuffer>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class IndirectCommandsLayoutNV
  {
  public:
    using CType      = VkIndirectCommandsLayoutNV;
    using NativeType = VkIndirectCommandsLayoutNV;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eIndirectCommandsLayoutNV;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:
    VULKAN_HPP_CONSTEXPR         IndirectCommandsLayoutNV() = default;
    VULKAN_HPP_CONSTEXPR         IndirectCommandsLayoutNV( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT IndirectCommandsLayoutNV( VkIndirectCommandsLayoutNV indirectCommandsLayoutNV ) VULKAN_HPP_NOEXCEPT
      : m_indirectCommandsLayoutNV( indirectCommandsLayoutNV )
    {
    }

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    IndirectCommandsLayoutNV & operator=( VkIndirectCommandsLayoutNV indirectCommandsLayoutNV ) VULKAN_HPP_NOEXCEPT
    {
      m_indirectCommandsLayoutNV = indirectCommandsLayoutNV;
      return *this;
    }
#endif

    IndirectCommandsLayoutNV & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_indirectCommandsLayoutNV = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( IndirectCommandsLayoutNV const & ) const = default;
#else
    bool operator==( IndirectCommandsLayoutNV const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_indirectCommandsLayoutNV == rhs.m_indirectCommandsLayoutNV;
    }

    bool operator!=( IndirectCommandsLayoutNV const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_indirectCommandsLayoutNV != rhs.m_indirectCommandsLayoutNV;
    }

    bool operator<( IndirectCommandsLayoutNV const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_indirectCommandsLayoutNV < rhs.m_indirectCommandsLayoutNV;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkIndirectCommandsLayoutNV() const VULKAN_HPP_NOEXCEPT
    {
      return m_indirectCommandsLayoutNV;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_indirectCommandsLayoutNV != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_indirectCommandsLayoutNV == VK_NULL_HANDLE;
    }

  private:
    VkIndirectCommandsLayoutNV m_indirectCommandsLayoutNV = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eIndirectCommandsLayoutNV>
  {
    using Type = VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutNV;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutNV>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class PrivateDataSlot
  {
  public:
    using CType      = VkPrivateDataSlot;
    using NativeType = VkPrivateDataSlot;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::ePrivateDataSlot;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:
    VULKAN_HPP_CONSTEXPR         PrivateDataSlot() = default;
    VULKAN_HPP_CONSTEXPR         PrivateDataSlot( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT PrivateDataSlot( VkPrivateDataSlot privateDataSlot ) VULKAN_HPP_NOEXCEPT : m_privateDataSlot( privateDataSlot ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    PrivateDataSlot & operator=( VkPrivateDataSlot privateDataSlot ) VULKAN_HPP_NOEXCEPT
    {
      m_privateDataSlot = privateDataSlot;
      return *this;
    }
#endif

    PrivateDataSlot & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_privateDataSlot = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( PrivateDataSlot const & ) const = default;
#else
    bool operator==( PrivateDataSlot const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_privateDataSlot == rhs.m_privateDataSlot;
    }

    bool operator!=( PrivateDataSlot const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_privateDataSlot != rhs.m_privateDataSlot;
    }

    bool operator<( PrivateDataSlot const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_privateDataSlot < rhs.m_privateDataSlot;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkPrivateDataSlot() const VULKAN_HPP_NOEXCEPT
    {
      return m_privateDataSlot;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_privateDataSlot != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_privateDataSlot == VK_NULL_HANDLE;
    }

  private:
    VkPrivateDataSlot m_privateDataSlot = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::ePrivateDataSlot>
  {
    using Type = VULKAN_HPP_NAMESPACE::PrivateDataSlot;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::PrivateDataSlot>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };
  using PrivateDataSlotEXT = PrivateDataSlot;

  class RenderPass
  {
  public:
    using CType      = VkRenderPass;
    using NativeType = VkRenderPass;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eRenderPass;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eRenderPass;

  public:
    VULKAN_HPP_CONSTEXPR         RenderPass() = default;
    VULKAN_HPP_CONSTEXPR         RenderPass( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT RenderPass( VkRenderPass renderPass ) VULKAN_HPP_NOEXCEPT : m_renderPass( renderPass ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    RenderPass & operator=( VkRenderPass renderPass ) VULKAN_HPP_NOEXCEPT
    {
      m_renderPass = renderPass;
      return *this;
    }
#endif

    RenderPass & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_renderPass = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( RenderPass const & ) const = default;
#else
    bool operator==( RenderPass const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_renderPass == rhs.m_renderPass;
    }

    bool operator!=( RenderPass const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_renderPass != rhs.m_renderPass;
    }

    bool operator<( RenderPass const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_renderPass < rhs.m_renderPass;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkRenderPass() const VULKAN_HPP_NOEXCEPT
    {
      return m_renderPass;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_renderPass != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_renderPass == VK_NULL_HANDLE;
    }

  private:
    VkRenderPass m_renderPass = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eRenderPass>
  {
    using Type = VULKAN_HPP_NAMESPACE::RenderPass;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eRenderPass>
  {
    using Type = VULKAN_HPP_NAMESPACE::RenderPass;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::RenderPass>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class Sampler
  {
  public:
    using CType      = VkSampler;
    using NativeType = VkSampler;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eSampler;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSampler;

  public:
    VULKAN_HPP_CONSTEXPR         Sampler() = default;
    VULKAN_HPP_CONSTEXPR         Sampler( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT Sampler( VkSampler sampler ) VULKAN_HPP_NOEXCEPT : m_sampler( sampler ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    Sampler & operator=( VkSampler sampler ) VULKAN_HPP_NOEXCEPT
    {
      m_sampler = sampler;
      return *this;
    }
#endif

    Sampler & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_sampler = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( Sampler const & ) const = default;
#else
    bool operator==( Sampler const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_sampler == rhs.m_sampler;
    }

    bool operator!=( Sampler const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_sampler != rhs.m_sampler;
    }

    bool operator<( Sampler const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_sampler < rhs.m_sampler;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkSampler() const VULKAN_HPP_NOEXCEPT
    {
      return m_sampler;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_sampler != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_sampler == VK_NULL_HANDLE;
    }

  private:
    VkSampler m_sampler = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eSampler>
  {
    using Type = VULKAN_HPP_NAMESPACE::Sampler;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSampler>
  {
    using Type = VULKAN_HPP_NAMESPACE::Sampler;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::Sampler>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class SamplerYcbcrConversion
  {
  public:
    using CType      = VkSamplerYcbcrConversion;
    using NativeType = VkSamplerYcbcrConversion;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eSamplerYcbcrConversion;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSamplerYcbcrConversion;

  public:
    VULKAN_HPP_CONSTEXPR         SamplerYcbcrConversion() = default;
    VULKAN_HPP_CONSTEXPR         SamplerYcbcrConversion( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT SamplerYcbcrConversion( VkSamplerYcbcrConversion samplerYcbcrConversion ) VULKAN_HPP_NOEXCEPT
      : m_samplerYcbcrConversion( samplerYcbcrConversion )
    {
    }

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    SamplerYcbcrConversion & operator=( VkSamplerYcbcrConversion samplerYcbcrConversion ) VULKAN_HPP_NOEXCEPT
    {
      m_samplerYcbcrConversion = samplerYcbcrConversion;
      return *this;
    }
#endif

    SamplerYcbcrConversion & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_samplerYcbcrConversion = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( SamplerYcbcrConversion const & ) const = default;
#else
    bool operator==( SamplerYcbcrConversion const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_samplerYcbcrConversion == rhs.m_samplerYcbcrConversion;
    }

    bool operator!=( SamplerYcbcrConversion const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_samplerYcbcrConversion != rhs.m_samplerYcbcrConversion;
    }

    bool operator<( SamplerYcbcrConversion const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_samplerYcbcrConversion < rhs.m_samplerYcbcrConversion;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkSamplerYcbcrConversion() const VULKAN_HPP_NOEXCEPT
    {
      return m_samplerYcbcrConversion;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_samplerYcbcrConversion != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_samplerYcbcrConversion == VK_NULL_HANDLE;
    }

  private:
    VkSamplerYcbcrConversion m_samplerYcbcrConversion = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eSamplerYcbcrConversion>
  {
    using Type = VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eSamplerYcbcrConversion>
  {
    using Type = VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };
  using SamplerYcbcrConversionKHR = SamplerYcbcrConversion;

  class ShaderModule
  {
  public:
    using CType      = VkShaderModule;
    using NativeType = VkShaderModule;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eShaderModule;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eShaderModule;

  public:
    VULKAN_HPP_CONSTEXPR         ShaderModule() = default;
    VULKAN_HPP_CONSTEXPR         ShaderModule( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT ShaderModule( VkShaderModule shaderModule ) VULKAN_HPP_NOEXCEPT : m_shaderModule( shaderModule ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    ShaderModule & operator=( VkShaderModule shaderModule ) VULKAN_HPP_NOEXCEPT
    {
      m_shaderModule = shaderModule;
      return *this;
    }
#endif

    ShaderModule & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_shaderModule = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( ShaderModule const & ) const = default;
#else
    bool operator==( ShaderModule const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_shaderModule == rhs.m_shaderModule;
    }

    bool operator!=( ShaderModule const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_shaderModule != rhs.m_shaderModule;
    }

    bool operator<( ShaderModule const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_shaderModule < rhs.m_shaderModule;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkShaderModule() const VULKAN_HPP_NOEXCEPT
    {
      return m_shaderModule;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_shaderModule != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_shaderModule == VK_NULL_HANDLE;
    }

  private:
    VkShaderModule m_shaderModule = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eShaderModule>
  {
    using Type = VULKAN_HPP_NAMESPACE::ShaderModule;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eShaderModule>
  {
    using Type = VULKAN_HPP_NAMESPACE::ShaderModule;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::ShaderModule>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class ValidationCacheEXT
  {
  public:
    using CType      = VkValidationCacheEXT;
    using NativeType = VkValidationCacheEXT;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eValidationCacheEXT;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eValidationCacheEXT;

  public:
    VULKAN_HPP_CONSTEXPR         ValidationCacheEXT() = default;
    VULKAN_HPP_CONSTEXPR         ValidationCacheEXT( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT ValidationCacheEXT( VkValidationCacheEXT validationCacheEXT ) VULKAN_HPP_NOEXCEPT : m_validationCacheEXT( validationCacheEXT )
    {
    }

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    ValidationCacheEXT & operator=( VkValidationCacheEXT validationCacheEXT ) VULKAN_HPP_NOEXCEPT
    {
      m_validationCacheEXT = validationCacheEXT;
      return *this;
    }
#endif

    ValidationCacheEXT & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_validationCacheEXT = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( ValidationCacheEXT const & ) const = default;
#else
    bool operator==( ValidationCacheEXT const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_validationCacheEXT == rhs.m_validationCacheEXT;
    }

    bool operator!=( ValidationCacheEXT const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_validationCacheEXT != rhs.m_validationCacheEXT;
    }

    bool operator<( ValidationCacheEXT const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_validationCacheEXT < rhs.m_validationCacheEXT;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkValidationCacheEXT() const VULKAN_HPP_NOEXCEPT
    {
      return m_validationCacheEXT;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_validationCacheEXT != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_validationCacheEXT == VK_NULL_HANDLE;
    }

  private:
    VkValidationCacheEXT m_validationCacheEXT = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eValidationCacheEXT>
  {
    using Type = VULKAN_HPP_NAMESPACE::ValidationCacheEXT;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eValidationCacheEXT>
  {
    using Type = VULKAN_HPP_NAMESPACE::ValidationCacheEXT;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::ValidationCacheEXT>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

#if defined( VK_ENABLE_BETA_EXTENSIONS )
  class VideoSessionParametersKHR
  {
  public:
    using CType      = VkVideoSessionParametersKHR;
    using NativeType = VkVideoSessionParametersKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eVideoSessionParametersKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eUnknown;

  public:
    VULKAN_HPP_CONSTEXPR         VideoSessionParametersKHR() = default;
    VULKAN_HPP_CONSTEXPR         VideoSessionParametersKHR( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT VideoSessionParametersKHR( VkVideoSessionParametersKHR videoSessionParametersKHR ) VULKAN_HPP_NOEXCEPT
      : m_videoSessionParametersKHR( videoSessionParametersKHR )
    {
    }

#  if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    VideoSessionParametersKHR & operator=( VkVideoSessionParametersKHR videoSessionParametersKHR ) VULKAN_HPP_NOEXCEPT
    {
      m_videoSessionParametersKHR = videoSessionParametersKHR;
      return *this;
    }
#  endif

    VideoSessionParametersKHR & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_videoSessionParametersKHR = {};
      return *this;
    }

#  if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( VideoSessionParametersKHR const & ) const = default;
#  else
    bool operator==( VideoSessionParametersKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionParametersKHR == rhs.m_videoSessionParametersKHR;
    }

    bool operator!=( VideoSessionParametersKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionParametersKHR != rhs.m_videoSessionParametersKHR;
    }

    bool operator<( VideoSessionParametersKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionParametersKHR < rhs.m_videoSessionParametersKHR;
    }
#  endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkVideoSessionParametersKHR() const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionParametersKHR;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionParametersKHR != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_videoSessionParametersKHR == VK_NULL_HANDLE;
    }

  private:
    VkVideoSessionParametersKHR m_videoSessionParametersKHR = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eVideoSessionParametersKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };
#endif /*VK_ENABLE_BETA_EXTENSIONS*/

  class Queue
  {
  public:
    using CType      = VkQueue;
    using NativeType = VkQueue;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eQueue;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eQueue;

  public:
    VULKAN_HPP_CONSTEXPR Queue() = default;
    VULKAN_HPP_CONSTEXPR Queue( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    Queue( VkQueue queue ) VULKAN_HPP_NOEXCEPT : m_queue( queue ) {}

    Queue & operator=( VkQueue queue ) VULKAN_HPP_NOEXCEPT
    {
      m_queue = queue;
      return *this;
    }

    Queue & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_queue = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( Queue const & ) const = default;
#else
    bool operator==( Queue const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_queue == rhs.m_queue;
    }

    bool operator!=( Queue const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_queue != rhs.m_queue;
    }

    bool operator<( Queue const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_queue < rhs.m_queue;
    }
#endif

    //=== VK_VERSION_1_0 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result submit( uint32_t                                 submitCount,
                                        const VULKAN_HPP_NAMESPACE::SubmitInfo * pSubmits,
                                        VULKAN_HPP_NAMESPACE::Fence              fence,
                                        Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      submit( ArrayProxy<const VULKAN_HPP_NAMESPACE::SubmitInfo> const & submits,
              VULKAN_HPP_NAMESPACE::Fence fence                          VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
              Dispatch const & d                                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result waitIdle( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type waitIdle( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result bindSparse( uint32_t                                     bindInfoCount,
                                            const VULKAN_HPP_NAMESPACE::BindSparseInfo * pBindInfo,
                                            VULKAN_HPP_NAMESPACE::Fence                  fence,
                                            Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      bindSparse( ArrayProxy<const VULKAN_HPP_NAMESPACE::BindSparseInfo> const & bindInfo,
                  VULKAN_HPP_NAMESPACE::Fence fence                              VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                  Dispatch const & d                                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_VERSION_1_3 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result submit2( uint32_t                                  submitCount,
                                         const VULKAN_HPP_NAMESPACE::SubmitInfo2 * pSubmits,
                                         VULKAN_HPP_NAMESPACE::Fence               fence,
                                         Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      submit2( ArrayProxy<const VULKAN_HPP_NAMESPACE::SubmitInfo2> const & submits,
               VULKAN_HPP_NAMESPACE::Fence fence                           VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
               Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_swapchain ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result presentKHR( const VULKAN_HPP_NAMESPACE::PresentInfoKHR * pPresentInfo,
                                            Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result presentKHR( const VULKAN_HPP_NAMESPACE::PresentInfoKHR & presentInfo,
                                                                  Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_debug_utils ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT * pLabelInfo,
                                  Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void beginDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT & labelInfo,
                                  Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void endDebugUtilsLabelEXT( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void insertDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT * pLabelInfo,
                                   Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void insertDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT & labelInfo,
                                   Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_NV_device_diagnostic_checkpoints ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getCheckpointDataNV( uint32_t *                               pCheckpointDataCount,
                              VULKAN_HPP_NAMESPACE::CheckpointDataNV * pCheckpointData,
                              Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename CheckpointDataNVAllocator = std::allocator<VULKAN_HPP_NAMESPACE::CheckpointDataNV>,
              typename Dispatch                  = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::CheckpointDataNV, CheckpointDataNVAllocator>
                         getCheckpointDataNV( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename CheckpointDataNVAllocator = std::allocator<VULKAN_HPP_NAMESPACE::CheckpointDataNV>,
              typename Dispatch                  = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                        = CheckpointDataNVAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, CheckpointDataNV>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::CheckpointDataNV, CheckpointDataNVAllocator>
      getCheckpointDataNV( CheckpointDataNVAllocator & checkpointDataNVAllocator, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_INTEL_performance_query ===

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result setPerformanceConfigurationINTEL( VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL configuration,
                                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
         setPerformanceConfigurationINTEL( VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL configuration,
                                           Dispatch const & d                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_synchronization2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result submit2KHR( uint32_t                                  submitCount,
                                            const VULKAN_HPP_NAMESPACE::SubmitInfo2 * pSubmits,
                                            VULKAN_HPP_NAMESPACE::Fence               fence,
                                            Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      submit2KHR( ArrayProxy<const VULKAN_HPP_NAMESPACE::SubmitInfo2> const & submits,
                  VULKAN_HPP_NAMESPACE::Fence fence                           VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                  Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getCheckpointData2NV( uint32_t *                                pCheckpointDataCount,
                               VULKAN_HPP_NAMESPACE::CheckpointData2NV * pCheckpointData,
                               Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename CheckpointData2NVAllocator = std::allocator<VULKAN_HPP_NAMESPACE::CheckpointData2NV>,
              typename Dispatch                   = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::CheckpointData2NV, CheckpointData2NVAllocator>
                         getCheckpointData2NV( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename CheckpointData2NVAllocator = std::allocator<VULKAN_HPP_NAMESPACE::CheckpointData2NV>,
              typename Dispatch                   = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                         = CheckpointData2NVAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, CheckpointData2NV>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::CheckpointData2NV, CheckpointData2NVAllocator>
      getCheckpointData2NV( CheckpointData2NVAllocator & checkpointData2NVAllocator, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    operator VkQueue() const VULKAN_HPP_NOEXCEPT
    {
      return m_queue;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_queue != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_queue == VK_NULL_HANDLE;
    }

  private:
    VkQueue m_queue = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eQueue>
  {
    using Type = VULKAN_HPP_NAMESPACE::Queue;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eQueue>
  {
    using Type = VULKAN_HPP_NAMESPACE::Queue;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::Queue>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

#ifndef VULKAN_HPP_NO_SMART_HANDLE
  class Device;
  template <typename Dispatch>
  class UniqueHandleTraits<AccelerationStructureKHR, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueAccelerationStructureKHR = UniqueHandle<AccelerationStructureKHR, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<AccelerationStructureNV, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueAccelerationStructureNV = UniqueHandle<AccelerationStructureNV, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<Buffer, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueBuffer = UniqueHandle<Buffer, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
#  if defined( VK_USE_PLATFORM_FUCHSIA )
  template <typename Dispatch>
  class UniqueHandleTraits<BufferCollectionFUCHSIA, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueBufferCollectionFUCHSIA = UniqueHandle<BufferCollectionFUCHSIA, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
#  endif /*VK_USE_PLATFORM_FUCHSIA*/
  template <typename Dispatch>
  class UniqueHandleTraits<BufferView, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueBufferView = UniqueHandle<BufferView, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<CommandBuffer, Dispatch>
  {
  public:
    using deleter = PoolFree<Device, CommandPool, Dispatch>;
  };
  using UniqueCommandBuffer = UniqueHandle<CommandBuffer, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<CommandPool, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueCommandPool = UniqueHandle<CommandPool, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<CuFunctionNVX, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueCuFunctionNVX = UniqueHandle<CuFunctionNVX, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<CuModuleNVX, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueCuModuleNVX = UniqueHandle<CuModuleNVX, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<DeferredOperationKHR, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueDeferredOperationKHR = UniqueHandle<DeferredOperationKHR, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<DescriptorPool, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueDescriptorPool = UniqueHandle<DescriptorPool, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<DescriptorSet, Dispatch>
  {
  public:
    using deleter = PoolFree<Device, DescriptorPool, Dispatch>;
  };
  using UniqueDescriptorSet = UniqueHandle<DescriptorSet, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<DescriptorSetLayout, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueDescriptorSetLayout = UniqueHandle<DescriptorSetLayout, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<DescriptorUpdateTemplate, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueDescriptorUpdateTemplate    = UniqueHandle<DescriptorUpdateTemplate, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  using UniqueDescriptorUpdateTemplateKHR = UniqueHandle<DescriptorUpdateTemplate, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<DeviceMemory, Dispatch>
  {
  public:
    using deleter = ObjectFree<Device, Dispatch>;
  };
  using UniqueDeviceMemory = UniqueHandle<DeviceMemory, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<Event, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueEvent = UniqueHandle<Event, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<Fence, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueFence = UniqueHandle<Fence, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<Framebuffer, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueFramebuffer = UniqueHandle<Framebuffer, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<Image, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueImage = UniqueHandle<Image, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<ImageView, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueImageView = UniqueHandle<ImageView, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<IndirectCommandsLayoutNV, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueIndirectCommandsLayoutNV = UniqueHandle<IndirectCommandsLayoutNV, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<Pipeline, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniquePipeline = UniqueHandle<Pipeline, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<PipelineCache, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniquePipelineCache = UniqueHandle<PipelineCache, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<PipelineLayout, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniquePipelineLayout = UniqueHandle<PipelineLayout, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<PrivateDataSlot, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniquePrivateDataSlot    = UniqueHandle<PrivateDataSlot, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  using UniquePrivateDataSlotEXT = UniqueHandle<PrivateDataSlot, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<QueryPool, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueQueryPool = UniqueHandle<QueryPool, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<RenderPass, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueRenderPass = UniqueHandle<RenderPass, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<Sampler, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueSampler = UniqueHandle<Sampler, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<SamplerYcbcrConversion, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueSamplerYcbcrConversion    = UniqueHandle<SamplerYcbcrConversion, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  using UniqueSamplerYcbcrConversionKHR = UniqueHandle<SamplerYcbcrConversion, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<Semaphore, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueSemaphore = UniqueHandle<Semaphore, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<ShaderModule, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueShaderModule = UniqueHandle<ShaderModule, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<SwapchainKHR, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueSwapchainKHR = UniqueHandle<SwapchainKHR, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<ValidationCacheEXT, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueValidationCacheEXT = UniqueHandle<ValidationCacheEXT, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
#  if defined( VK_ENABLE_BETA_EXTENSIONS )
  template <typename Dispatch>
  class UniqueHandleTraits<VideoSessionKHR, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueVideoSessionKHR = UniqueHandle<VideoSessionKHR, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
#  endif /*VK_ENABLE_BETA_EXTENSIONS*/
#  if defined( VK_ENABLE_BETA_EXTENSIONS )
  template <typename Dispatch>
  class UniqueHandleTraits<VideoSessionParametersKHR, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Device, Dispatch>;
  };
  using UniqueVideoSessionParametersKHR = UniqueHandle<VideoSessionParametersKHR, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
#  endif /*VK_ENABLE_BETA_EXTENSIONS*/
#endif   /*VULKAN_HPP_NO_SMART_HANDLE*/

  class Device
  {
  public:
    using CType      = VkDevice;
    using NativeType = VkDevice;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDevice;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDevice;

  public:
    VULKAN_HPP_CONSTEXPR Device() = default;
    VULKAN_HPP_CONSTEXPR Device( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    Device( VkDevice device ) VULKAN_HPP_NOEXCEPT : m_device( device ) {}

    Device & operator=( VkDevice device ) VULKAN_HPP_NOEXCEPT
    {
      m_device = device;
      return *this;
    }

    Device & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_device = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( Device const & ) const = default;
#else
    bool operator==( Device const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_device == rhs.m_device;
    }

    bool operator!=( Device const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_device != rhs.m_device;
    }

    bool operator<( Device const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_device < rhs.m_device;
    }
#endif

    //=== VK_VERSION_1_0 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    PFN_vkVoidFunction getProcAddr( const char * pName, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    PFN_vkVoidFunction getProcAddr( const std::string & name, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getQueue( uint32_t                      queueFamilyIndex,
                   uint32_t                      queueIndex,
                   VULKAN_HPP_NAMESPACE::Queue * pQueue,
                   Dispatch const & d            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Queue
      getQueue( uint32_t queueFamilyIndex, uint32_t queueIndex, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result waitIdle( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type waitIdle( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result allocateMemory( const VULKAN_HPP_NAMESPACE::MemoryAllocateInfo *  pAllocateInfo,
                                                const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                                VULKAN_HPP_NAMESPACE::DeviceMemory *              pMemory,
                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DeviceMemory>::type
      allocateMemory( const VULKAN_HPP_NAMESPACE::MemoryAllocateInfo &                    allocateInfo,
                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::DeviceMemory, Dispatch>>::type
      allocateMemoryUnique( const VULKAN_HPP_NAMESPACE::MemoryAllocateInfo &                    allocateInfo,
                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                            Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void freeMemory( VULKAN_HPP_NAMESPACE::DeviceMemory                memory,
                     const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                     Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void freeMemory( VULKAN_HPP_NAMESPACE::DeviceMemory memory                           VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                     Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                     Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void( free )( VULKAN_HPP_NAMESPACE::DeviceMemory                memory,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void( free )( VULKAN_HPP_NAMESPACE::DeviceMemory                                  memory,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result mapMemory( VULKAN_HPP_NAMESPACE::DeviceMemory   memory,
                                           VULKAN_HPP_NAMESPACE::DeviceSize     offset,
                                           VULKAN_HPP_NAMESPACE::DeviceSize     size,
                                           VULKAN_HPP_NAMESPACE::MemoryMapFlags flags,
                                           void **                              ppData,
                                           Dispatch const & d                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<void *>::type mapMemory( VULKAN_HPP_NAMESPACE::DeviceMemory         memory,
                                                                           VULKAN_HPP_NAMESPACE::DeviceSize           offset,
                                                                           VULKAN_HPP_NAMESPACE::DeviceSize           size,
                                                                           VULKAN_HPP_NAMESPACE::MemoryMapFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void unmapMemory( VULKAN_HPP_NAMESPACE::DeviceMemory memory, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result flushMappedMemoryRanges( uint32_t                                        memoryRangeCount,
                                                         const VULKAN_HPP_NAMESPACE::MappedMemoryRange * pMemoryRanges,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      flushMappedMemoryRanges( ArrayProxy<const VULKAN_HPP_NAMESPACE::MappedMemoryRange> const & memoryRanges,
                               Dispatch const & d                                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result invalidateMappedMemoryRanges( uint32_t                                        memoryRangeCount,
                                                              const VULKAN_HPP_NAMESPACE::MappedMemoryRange * pMemoryRanges,
                                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      invalidateMappedMemoryRanges( ArrayProxy<const VULKAN_HPP_NAMESPACE::MappedMemoryRange> const & memoryRanges,
                                    Dispatch const & d                                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getMemoryCommitment( VULKAN_HPP_NAMESPACE::DeviceMemory memory,
                              VULKAN_HPP_NAMESPACE::DeviceSize * pCommittedMemoryInBytes,
                              Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::DeviceSize
      getMemoryCommitment( VULKAN_HPP_NAMESPACE::DeviceMemory memory, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result bindBufferMemory( VULKAN_HPP_NAMESPACE::Buffer       buffer,
                                                  VULKAN_HPP_NAMESPACE::DeviceMemory memory,
                                                  VULKAN_HPP_NAMESPACE::DeviceSize   memoryOffset,
                                                  Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      bindBufferMemory( VULKAN_HPP_NAMESPACE::Buffer       buffer,
                        VULKAN_HPP_NAMESPACE::DeviceMemory memory,
                        VULKAN_HPP_NAMESPACE::DeviceSize   memoryOffset,
                        Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result bindImageMemory( VULKAN_HPP_NAMESPACE::Image        image,
                                                 VULKAN_HPP_NAMESPACE::DeviceMemory memory,
                                                 VULKAN_HPP_NAMESPACE::DeviceSize   memoryOffset,
                                                 Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      bindImageMemory( VULKAN_HPP_NAMESPACE::Image        image,
                       VULKAN_HPP_NAMESPACE::DeviceMemory memory,
                       VULKAN_HPP_NAMESPACE::DeviceSize   memoryOffset,
                       Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getBufferMemoryRequirements( VULKAN_HPP_NAMESPACE::Buffer               buffer,
                                      VULKAN_HPP_NAMESPACE::MemoryRequirements * pMemoryRequirements,
                                      Dispatch const & d                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MemoryRequirements
      getBufferMemoryRequirements( VULKAN_HPP_NAMESPACE::Buffer buffer, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getImageMemoryRequirements( VULKAN_HPP_NAMESPACE::Image                image,
                                     VULKAN_HPP_NAMESPACE::MemoryRequirements * pMemoryRequirements,
                                     Dispatch const & d                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MemoryRequirements
      getImageMemoryRequirements( VULKAN_HPP_NAMESPACE::Image image, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getImageSparseMemoryRequirements( VULKAN_HPP_NAMESPACE::Image                           image,
                                           uint32_t *                                            pSparseMemoryRequirementCount,
                                           VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements * pSparseMemoryRequirements,
                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename SparseImageMemoryRequirementsAllocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements>,
              typename Dispatch                               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements, SparseImageMemoryRequirementsAllocator>
      getImageSparseMemoryRequirements( VULKAN_HPP_NAMESPACE::Image image, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename SparseImageMemoryRequirementsAllocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements>,
              typename Dispatch                               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                     = SparseImageMemoryRequirementsAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, SparseImageMemoryRequirements>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements, SparseImageMemoryRequirementsAllocator>
                         getImageSparseMemoryRequirements( VULKAN_HPP_NAMESPACE::Image              image,
                                                           SparseImageMemoryRequirementsAllocator & sparseImageMemoryRequirementsAllocator,
                                                           Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createFence( const VULKAN_HPP_NAMESPACE::FenceCreateInfo *     pCreateInfo,
                                             const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                             VULKAN_HPP_NAMESPACE::Fence *                     pFence,
                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::Fence>::type
      createFence( const VULKAN_HPP_NAMESPACE::FenceCreateInfo &                       createInfo,
                   Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                   Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::Fence, Dispatch>>::type
      createFenceUnique( const VULKAN_HPP_NAMESPACE::FenceCreateInfo &                       createInfo,
                         Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                         Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyFence( VULKAN_HPP_NAMESPACE::Fence                       fence,
                       const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                       Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyFence( VULKAN_HPP_NAMESPACE::Fence fence                                   VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                       Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Fence                       fence,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Fence                                         fence,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result resetFences( uint32_t                            fenceCount,
                                             const VULKAN_HPP_NAMESPACE::Fence * pFences,
                                             Dispatch const & d                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    typename ResultValueType<void>::type resetFences( ArrayProxy<const VULKAN_HPP_NAMESPACE::Fence> const & fences,
                                                      Dispatch const & d                                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getFenceStatus( VULKAN_HPP_NAMESPACE::Fence fence,
                                                Dispatch const & d          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result getFenceStatus( VULKAN_HPP_NAMESPACE::Fence fence,
                                                                      Dispatch const & d          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result waitForFences( uint32_t                            fenceCount,
                                               const VULKAN_HPP_NAMESPACE::Fence * pFences,
                                               VULKAN_HPP_NAMESPACE::Bool32        waitAll,
                                               uint64_t                            timeout,
                                               Dispatch const & d                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result waitForFences( ArrayProxy<const VULKAN_HPP_NAMESPACE::Fence> const & fences,
                                                                     VULKAN_HPP_NAMESPACE::Bool32                          waitAll,
                                                                     uint64_t                                              timeout,
                                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createSemaphore( const VULKAN_HPP_NAMESPACE::SemaphoreCreateInfo * pCreateInfo,
                                                 const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                                 VULKAN_HPP_NAMESPACE::Semaphore *                 pSemaphore,
                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::Semaphore>::type
      createSemaphore( const VULKAN_HPP_NAMESPACE::SemaphoreCreateInfo &                   createInfo,
                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                       Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::Semaphore, Dispatch>>::type
      createSemaphoreUnique( const VULKAN_HPP_NAMESPACE::SemaphoreCreateInfo &                   createInfo,
                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroySemaphore( VULKAN_HPP_NAMESPACE::Semaphore                   semaphore,
                           const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                           Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroySemaphore( VULKAN_HPP_NAMESPACE::Semaphore semaphore                           VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Semaphore                   semaphore,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Semaphore                                     semaphore,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createEvent( const VULKAN_HPP_NAMESPACE::EventCreateInfo *     pCreateInfo,
                                             const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                             VULKAN_HPP_NAMESPACE::Event *                     pEvent,
                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::Event>::type
      createEvent( const VULKAN_HPP_NAMESPACE::EventCreateInfo &                       createInfo,
                   Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                   Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::Event, Dispatch>>::type
      createEventUnique( const VULKAN_HPP_NAMESPACE::EventCreateInfo &                       createInfo,
                         Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                         Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyEvent( VULKAN_HPP_NAMESPACE::Event                       event,
                       const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                       Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyEvent( VULKAN_HPP_NAMESPACE::Event event                                   VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                       Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Event                       event,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Event                                         event,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getEventStatus( VULKAN_HPP_NAMESPACE::Event event,
                                                Dispatch const & d          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result getEventStatus( VULKAN_HPP_NAMESPACE::Event event,
                                                                      Dispatch const & d          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result setEvent( VULKAN_HPP_NAMESPACE::Event event,
                                          Dispatch const & d          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type setEvent( VULKAN_HPP_NAMESPACE::Event event,
                                                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result resetEvent( VULKAN_HPP_NAMESPACE::Event event,
                                            Dispatch const & d          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    typename ResultValueType<void>::type resetEvent( VULKAN_HPP_NAMESPACE::Event event, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createQueryPool( const VULKAN_HPP_NAMESPACE::QueryPoolCreateInfo * pCreateInfo,
                                                 const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                                 VULKAN_HPP_NAMESPACE::QueryPool *                 pQueryPool,
                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::QueryPool>::type
      createQueryPool( const VULKAN_HPP_NAMESPACE::QueryPoolCreateInfo &                   createInfo,
                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                       Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::QueryPool, Dispatch>>::type
      createQueryPoolUnique( const VULKAN_HPP_NAMESPACE::QueryPoolCreateInfo &                   createInfo,
                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyQueryPool( VULKAN_HPP_NAMESPACE::QueryPool                   queryPool,
                           const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                           Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyQueryPool( VULKAN_HPP_NAMESPACE::QueryPool queryPool                           VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::QueryPool                   queryPool,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::QueryPool                                     queryPool,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getQueryPoolResults( VULKAN_HPP_NAMESPACE::QueryPool        queryPool,
                                                     uint32_t                               firstQuery,
                                                     uint32_t                               queryCount,
                                                     size_t                                 dataSize,
                                                     void *                                 pData,
                                                     VULKAN_HPP_NAMESPACE::DeviceSize       stride,
                                                     VULKAN_HPP_NAMESPACE::QueryResultFlags flags,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DataType, typename DataTypeAllocator = std::allocator<DataType>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<DataType, DataTypeAllocator>>
                         getQueryPoolResults( VULKAN_HPP_NAMESPACE::QueryPool              queryPool,
                                              uint32_t                                     firstQuery,
                                              uint32_t                                     queryCount,
                                              size_t                                       dataSize,
                                              VULKAN_HPP_NAMESPACE::DeviceSize             stride,
                                              VULKAN_HPP_NAMESPACE::QueryResultFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                              Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DataType, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<DataType> getQueryPoolResult( VULKAN_HPP_NAMESPACE::QueryPool              queryPool,
                                                                   uint32_t                                     firstQuery,
                                                                   uint32_t                                     queryCount,
                                                                   VULKAN_HPP_NAMESPACE::DeviceSize             stride,
                                                                   VULKAN_HPP_NAMESPACE::QueryResultFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createBuffer( const VULKAN_HPP_NAMESPACE::BufferCreateInfo *    pCreateInfo,
                                              const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                              VULKAN_HPP_NAMESPACE::Buffer *                    pBuffer,
                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::Buffer>::type
      createBuffer( const VULKAN_HPP_NAMESPACE::BufferCreateInfo &                      createInfo,
                    Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                    Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::Buffer, Dispatch>>::type
      createBufferUnique( const VULKAN_HPP_NAMESPACE::BufferCreateInfo &                      createInfo,
                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                          Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyBuffer( VULKAN_HPP_NAMESPACE::Buffer                      buffer,
                        const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                        Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyBuffer( VULKAN_HPP_NAMESPACE::Buffer buffer                                 VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                        Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Buffer                      buffer,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Buffer                                        buffer,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createBufferView( const VULKAN_HPP_NAMESPACE::BufferViewCreateInfo * pCreateInfo,
                                                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks *  pAllocator,
                                                  VULKAN_HPP_NAMESPACE::BufferView *                 pView,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::BufferView>::type
      createBufferView( const VULKAN_HPP_NAMESPACE::BufferViewCreateInfo &                  createInfo,
                        Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                        Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::BufferView, Dispatch>>::type
      createBufferViewUnique( const VULKAN_HPP_NAMESPACE::BufferViewCreateInfo &                  createInfo,
                              Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                              Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyBufferView( VULKAN_HPP_NAMESPACE::BufferView                  bufferView,
                            const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                            Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyBufferView( VULKAN_HPP_NAMESPACE::BufferView bufferView                         VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::BufferView                  bufferView,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::BufferView                                    bufferView,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createImage( const VULKAN_HPP_NAMESPACE::ImageCreateInfo *     pCreateInfo,
                                             const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                             VULKAN_HPP_NAMESPACE::Image *                     pImage,
                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::Image>::type
      createImage( const VULKAN_HPP_NAMESPACE::ImageCreateInfo &                       createInfo,
                   Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                   Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::Image, Dispatch>>::type
      createImageUnique( const VULKAN_HPP_NAMESPACE::ImageCreateInfo &                       createInfo,
                         Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                         Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyImage( VULKAN_HPP_NAMESPACE::Image                       image,
                       const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                       Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyImage( VULKAN_HPP_NAMESPACE::Image image                                   VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                       Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Image                       image,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Image                                         image,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getImageSubresourceLayout( VULKAN_HPP_NAMESPACE::Image                    image,
                                    const VULKAN_HPP_NAMESPACE::ImageSubresource * pSubresource,
                                    VULKAN_HPP_NAMESPACE::SubresourceLayout *      pLayout,
                                    Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::SubresourceLayout
                         getImageSubresourceLayout( VULKAN_HPP_NAMESPACE::Image                    image,
                                                    const VULKAN_HPP_NAMESPACE::ImageSubresource & subresource,
                                                    Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createImageView( const VULKAN_HPP_NAMESPACE::ImageViewCreateInfo * pCreateInfo,
                                                 const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                                 VULKAN_HPP_NAMESPACE::ImageView *                 pView,
                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::ImageView>::type
      createImageView( const VULKAN_HPP_NAMESPACE::ImageViewCreateInfo &                   createInfo,
                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                       Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::ImageView, Dispatch>>::type
      createImageViewUnique( const VULKAN_HPP_NAMESPACE::ImageViewCreateInfo &                   createInfo,
                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyImageView( VULKAN_HPP_NAMESPACE::ImageView                   imageView,
                           const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                           Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyImageView( VULKAN_HPP_NAMESPACE::ImageView imageView                           VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::ImageView                   imageView,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::ImageView                                     imageView,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createShaderModule( const VULKAN_HPP_NAMESPACE::ShaderModuleCreateInfo * pCreateInfo,
                                                    const VULKAN_HPP_NAMESPACE::AllocationCallbacks *    pAllocator,
                                                    VULKAN_HPP_NAMESPACE::ShaderModule *                 pShaderModule,
                                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::ShaderModule>::type
      createShaderModule( const VULKAN_HPP_NAMESPACE::ShaderModuleCreateInfo &                createInfo,
                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                          Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::ShaderModule, Dispatch>>::type
      createShaderModuleUnique( const VULKAN_HPP_NAMESPACE::ShaderModuleCreateInfo &                createInfo,
                                Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyShaderModule( VULKAN_HPP_NAMESPACE::ShaderModule                shaderModule,
                              const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                              Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyShaderModule( VULKAN_HPP_NAMESPACE::ShaderModule shaderModule                     VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                              Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::ShaderModule                shaderModule,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::ShaderModule                                  shaderModule,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createPipelineCache( const VULKAN_HPP_NAMESPACE::PipelineCacheCreateInfo * pCreateInfo,
                                                     const VULKAN_HPP_NAMESPACE::AllocationCallbacks *     pAllocator,
                                                     VULKAN_HPP_NAMESPACE::PipelineCache *                 pPipelineCache,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::PipelineCache>::type
      createPipelineCache( const VULKAN_HPP_NAMESPACE::PipelineCacheCreateInfo &               createInfo,
                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                           Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::PipelineCache, Dispatch>>::type
      createPipelineCacheUnique( const VULKAN_HPP_NAMESPACE::PipelineCacheCreateInfo &               createInfo,
                                 Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                 Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyPipelineCache( VULKAN_HPP_NAMESPACE::PipelineCache               pipelineCache,
                               const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                               Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyPipelineCache( VULKAN_HPP_NAMESPACE::PipelineCache pipelineCache                   VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                               Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::PipelineCache               pipelineCache,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::PipelineCache                                 pipelineCache,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getPipelineCacheData( VULKAN_HPP_NAMESPACE::PipelineCache pipelineCache,
                                                      size_t *                            pDataSize,
                                                      void *                              pData,
                                                      Dispatch const & d                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Uint8_tAllocator = std::allocator<uint8_t>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<uint8_t, Uint8_tAllocator>>::type
      getPipelineCacheData( VULKAN_HPP_NAMESPACE::PipelineCache pipelineCache, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Uint8_tAllocator                                                                 = std::allocator<uint8_t>,
              typename Dispatch                                                                         = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                                                               = Uint8_tAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, uint8_t>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<uint8_t, Uint8_tAllocator>>::type
      getPipelineCacheData( VULKAN_HPP_NAMESPACE::PipelineCache pipelineCache,
                            Uint8_tAllocator &                  uint8_tAllocator,
                            Dispatch const & d                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result mergePipelineCaches( VULKAN_HPP_NAMESPACE::PipelineCache         dstCache,
                                                     uint32_t                                    srcCacheCount,
                                                     const VULKAN_HPP_NAMESPACE::PipelineCache * pSrcCaches,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      mergePipelineCaches( VULKAN_HPP_NAMESPACE::PipelineCache                           dstCache,
                           ArrayProxy<const VULKAN_HPP_NAMESPACE::PipelineCache> const & srcCaches,
                           Dispatch const & d                                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createGraphicsPipelines( VULKAN_HPP_NAMESPACE::PipelineCache                      pipelineCache,
                                                         uint32_t                                                 createInfoCount,
                                                         const VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo * pCreateInfos,
                                                         const VULKAN_HPP_NAMESPACE::AllocationCallbacks *        pAllocator,
                                                         VULKAN_HPP_NAMESPACE::Pipeline *                         pPipelines,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PipelineAllocator = std::allocator<VULKAN_HPP_NAMESPACE::Pipeline>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<VULKAN_HPP_NAMESPACE::Pipeline, PipelineAllocator>>
                         createGraphicsPipelines( VULKAN_HPP_NAMESPACE::PipelineCache                                        pipelineCache,
                                                  ArrayProxy<const VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo> const & createInfos,
                                                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator        VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                  Dispatch const & d                                                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PipelineAllocator                                                                 = std::allocator<VULKAN_HPP_NAMESPACE::Pipeline>,
              typename Dispatch                                                                          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B0                                                                                = PipelineAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, Pipeline>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<VULKAN_HPP_NAMESPACE::Pipeline, PipelineAllocator>>
                         createGraphicsPipelines( VULKAN_HPP_NAMESPACE::PipelineCache                                        pipelineCache,
                                                  ArrayProxy<const VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo> const & createInfos,
                                                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks>                  allocator,
                                                  PipelineAllocator &                                                        pipelineAllocator,
                                                  Dispatch const & d                                                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<VULKAN_HPP_NAMESPACE::Pipeline>
                         createGraphicsPipeline( VULKAN_HPP_NAMESPACE::PipelineCache                                 pipelineCache,
                                                 const VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo &            createInfo,
                                                 Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                 Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename PipelineAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>>>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>, PipelineAllocator>>
                         createGraphicsPipelinesUnique( VULKAN_HPP_NAMESPACE::PipelineCache                                        pipelineCache,
                                                        ArrayProxy<const VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo> const & createInfos,
                                                        Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator        VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename PipelineAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>>,
              typename B0                = PipelineAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, UniqueHandle<Pipeline, Dispatch>>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>, PipelineAllocator>>
                         createGraphicsPipelinesUnique( VULKAN_HPP_NAMESPACE::PipelineCache                                        pipelineCache,
                                                        ArrayProxy<const VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo> const & createInfos,
                                                        Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks>                  allocator,
                                                        PipelineAllocator &                                                        pipelineAllocator,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>>
                         createGraphicsPipelineUnique( VULKAN_HPP_NAMESPACE::PipelineCache                                 pipelineCache,
                                                       const VULKAN_HPP_NAMESPACE::GraphicsPipelineCreateInfo &            createInfo,
                                                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                       Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createComputePipelines( VULKAN_HPP_NAMESPACE::PipelineCache                     pipelineCache,
                                                        uint32_t                                                createInfoCount,
                                                        const VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo * pCreateInfos,
                                                        const VULKAN_HPP_NAMESPACE::AllocationCallbacks *       pAllocator,
                                                        VULKAN_HPP_NAMESPACE::Pipeline *                        pPipelines,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PipelineAllocator = std::allocator<VULKAN_HPP_NAMESPACE::Pipeline>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<VULKAN_HPP_NAMESPACE::Pipeline, PipelineAllocator>>
                         createComputePipelines( VULKAN_HPP_NAMESPACE::PipelineCache                                       pipelineCache,
                                                 ArrayProxy<const VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo> const & createInfos,
                                                 Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator       VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                 Dispatch const & d                                                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PipelineAllocator                                                                 = std::allocator<VULKAN_HPP_NAMESPACE::Pipeline>,
              typename Dispatch                                                                          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B0                                                                                = PipelineAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, Pipeline>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<VULKAN_HPP_NAMESPACE::Pipeline, PipelineAllocator>>
                         createComputePipelines( VULKAN_HPP_NAMESPACE::PipelineCache                                       pipelineCache,
                                                 ArrayProxy<const VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo> const & createInfos,
                                                 Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks>                 allocator,
                                                 PipelineAllocator &                                                       pipelineAllocator,
                                                 Dispatch const & d                                                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<VULKAN_HPP_NAMESPACE::Pipeline>
                         createComputePipeline( VULKAN_HPP_NAMESPACE::PipelineCache                                 pipelineCache,
                                                const VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo &             createInfo,
                                                Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename PipelineAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>>>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>, PipelineAllocator>>
                         createComputePipelinesUnique( VULKAN_HPP_NAMESPACE::PipelineCache                                       pipelineCache,
                                                       ArrayProxy<const VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo> const & createInfos,
                                                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator       VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                       Dispatch const & d                                                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename PipelineAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>>,
              typename B0                = PipelineAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, UniqueHandle<Pipeline, Dispatch>>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>, PipelineAllocator>>
                         createComputePipelinesUnique( VULKAN_HPP_NAMESPACE::PipelineCache                                       pipelineCache,
                                                       ArrayProxy<const VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo> const & createInfos,
                                                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks>                 allocator,
                                                       PipelineAllocator &                                                       pipelineAllocator,
                                                       Dispatch const & d                                                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>>
                         createComputePipelineUnique( VULKAN_HPP_NAMESPACE::PipelineCache                                 pipelineCache,
                                                      const VULKAN_HPP_NAMESPACE::ComputePipelineCreateInfo &             createInfo,
                                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyPipeline( VULKAN_HPP_NAMESPACE::Pipeline                    pipeline,
                          const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                          Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyPipeline( VULKAN_HPP_NAMESPACE::Pipeline pipeline                             VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Pipeline                    pipeline,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Pipeline                                      pipeline,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createPipelineLayout( const VULKAN_HPP_NAMESPACE::PipelineLayoutCreateInfo * pCreateInfo,
                                                      const VULKAN_HPP_NAMESPACE::AllocationCallbacks *      pAllocator,
                                                      VULKAN_HPP_NAMESPACE::PipelineLayout *                 pPipelineLayout,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::PipelineLayout>::type
      createPipelineLayout( const VULKAN_HPP_NAMESPACE::PipelineLayoutCreateInfo &              createInfo,
                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                            Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::PipelineLayout, Dispatch>>::type
      createPipelineLayoutUnique( const VULKAN_HPP_NAMESPACE::PipelineLayoutCreateInfo &              createInfo,
                                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyPipelineLayout( VULKAN_HPP_NAMESPACE::PipelineLayout              pipelineLayout,
                                const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyPipelineLayout( VULKAN_HPP_NAMESPACE::PipelineLayout pipelineLayout                 VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::PipelineLayout              pipelineLayout,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::PipelineLayout                                pipelineLayout,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createSampler( const VULKAN_HPP_NAMESPACE::SamplerCreateInfo *   pCreateInfo,
                                               const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                               VULKAN_HPP_NAMESPACE::Sampler *                   pSampler,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::Sampler>::type
      createSampler( const VULKAN_HPP_NAMESPACE::SamplerCreateInfo &                     createInfo,
                     Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                     Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::Sampler, Dispatch>>::type
      createSamplerUnique( const VULKAN_HPP_NAMESPACE::SamplerCreateInfo &                     createInfo,
                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                           Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroySampler( VULKAN_HPP_NAMESPACE::Sampler                     sampler,
                         const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                         Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroySampler( VULKAN_HPP_NAMESPACE::Sampler sampler                               VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                         Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Sampler                     sampler,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Sampler                                       sampler,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createDescriptorSetLayout( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo * pCreateInfo,
                                                           const VULKAN_HPP_NAMESPACE::AllocationCallbacks *           pAllocator,
                                                           VULKAN_HPP_NAMESPACE::DescriptorSetLayout *                 pSetLayout,
                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DescriptorSetLayout>::type
      createDescriptorSetLayout( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo &         createInfo,
                                 Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                 Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::DescriptorSetLayout, Dispatch>>::type
      createDescriptorSetLayoutUnique( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo &         createInfo,
                                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                       Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDescriptorSetLayout( VULKAN_HPP_NAMESPACE::DescriptorSetLayout         descriptorSetLayout,
                                     const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                     Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDescriptorSetLayout( VULKAN_HPP_NAMESPACE::DescriptorSetLayout descriptorSetLayout       VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                     Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::DescriptorSetLayout         descriptorSetLayout,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::DescriptorSetLayout                           descriptorSetLayout,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createDescriptorPool( const VULKAN_HPP_NAMESPACE::DescriptorPoolCreateInfo * pCreateInfo,
                                                      const VULKAN_HPP_NAMESPACE::AllocationCallbacks *      pAllocator,
                                                      VULKAN_HPP_NAMESPACE::DescriptorPool *                 pDescriptorPool,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DescriptorPool>::type
      createDescriptorPool( const VULKAN_HPP_NAMESPACE::DescriptorPoolCreateInfo &              createInfo,
                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                            Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::DescriptorPool, Dispatch>>::type
      createDescriptorPoolUnique( const VULKAN_HPP_NAMESPACE::DescriptorPoolCreateInfo &              createInfo,
                                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDescriptorPool( VULKAN_HPP_NAMESPACE::DescriptorPool              descriptorPool,
                                const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDescriptorPool( VULKAN_HPP_NAMESPACE::DescriptorPool descriptorPool                 VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::DescriptorPool              descriptorPool,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::DescriptorPool                                descriptorPool,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    Result resetDescriptorPool( VULKAN_HPP_NAMESPACE::DescriptorPool           descriptorPool,
                                VULKAN_HPP_NAMESPACE::DescriptorPoolResetFlags flags,
                                Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resetDescriptorPool( VULKAN_HPP_NAMESPACE::DescriptorPool                 descriptorPool,
                              VULKAN_HPP_NAMESPACE::DescriptorPoolResetFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                              Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result allocateDescriptorSets( const VULKAN_HPP_NAMESPACE::DescriptorSetAllocateInfo * pAllocateInfo,
                                                        VULKAN_HPP_NAMESPACE::DescriptorSet *                   pDescriptorSets,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DescriptorSetAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DescriptorSet>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DescriptorSet, DescriptorSetAllocator>>::type
      allocateDescriptorSets( const VULKAN_HPP_NAMESPACE::DescriptorSetAllocateInfo & allocateInfo,
                              Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DescriptorSetAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DescriptorSet>,
              typename Dispatch               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B0                     = DescriptorSetAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, DescriptorSet>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DescriptorSet, DescriptorSetAllocator>>::type
      allocateDescriptorSets( const VULKAN_HPP_NAMESPACE::DescriptorSetAllocateInfo & allocateInfo,
                              DescriptorSetAllocator &                                descriptorSetAllocator,
                              Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename DescriptorSetAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::DescriptorSet, Dispatch>>>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::DescriptorSet, Dispatch>, DescriptorSetAllocator>>::type
      allocateDescriptorSetsUnique( const VULKAN_HPP_NAMESPACE::DescriptorSetAllocateInfo & allocateInfo,
                                    Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename DescriptorSetAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::DescriptorSet, Dispatch>>,
              typename B0                     = DescriptorSetAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, UniqueHandle<DescriptorSet, Dispatch>>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::DescriptorSet, Dispatch>, DescriptorSetAllocator>>::type
      allocateDescriptorSetsUnique( const VULKAN_HPP_NAMESPACE::DescriptorSetAllocateInfo & allocateInfo,
                                    DescriptorSetAllocator &                                descriptorSetAllocator,
                                    Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    Result freeDescriptorSets( VULKAN_HPP_NAMESPACE::DescriptorPool        descriptorPool,
                               uint32_t                                    descriptorSetCount,
                               const VULKAN_HPP_NAMESPACE::DescriptorSet * pDescriptorSets,
                               Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void freeDescriptorSets( VULKAN_HPP_NAMESPACE::DescriptorPool                          descriptorPool,
                             ArrayProxy<const VULKAN_HPP_NAMESPACE::DescriptorSet> const & descriptorSets,
                             Dispatch const & d                                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    Result( free )( VULKAN_HPP_NAMESPACE::DescriptorPool        descriptorPool,
                    uint32_t                                    descriptorSetCount,
                    const VULKAN_HPP_NAMESPACE::DescriptorSet * pDescriptorSets,
                    Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void( free )( VULKAN_HPP_NAMESPACE::DescriptorPool                          descriptorPool,
                  ArrayProxy<const VULKAN_HPP_NAMESPACE::DescriptorSet> const & descriptorSets,
                  Dispatch const & d                                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void updateDescriptorSets( uint32_t                                         descriptorWriteCount,
                               const VULKAN_HPP_NAMESPACE::WriteDescriptorSet * pDescriptorWrites,
                               uint32_t                                         descriptorCopyCount,
                               const VULKAN_HPP_NAMESPACE::CopyDescriptorSet *  pDescriptorCopies,
                               Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void updateDescriptorSets( ArrayProxy<const VULKAN_HPP_NAMESPACE::WriteDescriptorSet> const & descriptorWrites,
                               ArrayProxy<const VULKAN_HPP_NAMESPACE::CopyDescriptorSet> const &  descriptorCopies,
                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createFramebuffer( const VULKAN_HPP_NAMESPACE::FramebufferCreateInfo * pCreateInfo,
                                                   const VULKAN_HPP_NAMESPACE::AllocationCallbacks *   pAllocator,
                                                   VULKAN_HPP_NAMESPACE::Framebuffer *                 pFramebuffer,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::Framebuffer>::type
      createFramebuffer( const VULKAN_HPP_NAMESPACE::FramebufferCreateInfo &                 createInfo,
                         Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                         Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::Framebuffer, Dispatch>>::type
      createFramebufferUnique( const VULKAN_HPP_NAMESPACE::FramebufferCreateInfo &                 createInfo,
                               Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                               Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyFramebuffer( VULKAN_HPP_NAMESPACE::Framebuffer                 framebuffer,
                             const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                             Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyFramebuffer( VULKAN_HPP_NAMESPACE::Framebuffer framebuffer                       VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Framebuffer                 framebuffer,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::Framebuffer                                   framebuffer,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createRenderPass( const VULKAN_HPP_NAMESPACE::RenderPassCreateInfo * pCreateInfo,
                                                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks *  pAllocator,
                                                  VULKAN_HPP_NAMESPACE::RenderPass *                 pRenderPass,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::RenderPass>::type
      createRenderPass( const VULKAN_HPP_NAMESPACE::RenderPassCreateInfo &                  createInfo,
                        Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                        Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::RenderPass, Dispatch>>::type
      createRenderPassUnique( const VULKAN_HPP_NAMESPACE::RenderPassCreateInfo &                  createInfo,
                              Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                              Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyRenderPass( VULKAN_HPP_NAMESPACE::RenderPass                  renderPass,
                            const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                            Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyRenderPass( VULKAN_HPP_NAMESPACE::RenderPass renderPass                         VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::RenderPass                  renderPass,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::RenderPass                                    renderPass,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getRenderAreaGranularity( VULKAN_HPP_NAMESPACE::RenderPass renderPass,
                                   VULKAN_HPP_NAMESPACE::Extent2D * pGranularity,
                                   Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Extent2D
                         getRenderAreaGranularity( VULKAN_HPP_NAMESPACE::RenderPass renderPass,
                                                   Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createCommandPool( const VULKAN_HPP_NAMESPACE::CommandPoolCreateInfo * pCreateInfo,
                                                   const VULKAN_HPP_NAMESPACE::AllocationCallbacks *   pAllocator,
                                                   VULKAN_HPP_NAMESPACE::CommandPool *                 pCommandPool,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::CommandPool>::type
      createCommandPool( const VULKAN_HPP_NAMESPACE::CommandPoolCreateInfo &                 createInfo,
                         Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                         Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::CommandPool, Dispatch>>::type
      createCommandPoolUnique( const VULKAN_HPP_NAMESPACE::CommandPoolCreateInfo &                 createInfo,
                               Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                               Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyCommandPool( VULKAN_HPP_NAMESPACE::CommandPool                 commandPool,
                             const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                             Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyCommandPool( VULKAN_HPP_NAMESPACE::CommandPool commandPool                       VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::CommandPool                 commandPool,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::CommandPool                                   commandPool,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result resetCommandPool( VULKAN_HPP_NAMESPACE::CommandPool           commandPool,
                                                  VULKAN_HPP_NAMESPACE::CommandPoolResetFlags flags,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    typename ResultValueType<void>::type resetCommandPool( VULKAN_HPP_NAMESPACE::CommandPool                 commandPool,
                                                           VULKAN_HPP_NAMESPACE::CommandPoolResetFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                                           Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result allocateCommandBuffers( const VULKAN_HPP_NAMESPACE::CommandBufferAllocateInfo * pAllocateInfo,
                                                        VULKAN_HPP_NAMESPACE::CommandBuffer *                   pCommandBuffers,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename CommandBufferAllocator = std::allocator<VULKAN_HPP_NAMESPACE::CommandBuffer>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::CommandBuffer, CommandBufferAllocator>>::type
      allocateCommandBuffers( const VULKAN_HPP_NAMESPACE::CommandBufferAllocateInfo & allocateInfo,
                              Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename CommandBufferAllocator = std::allocator<VULKAN_HPP_NAMESPACE::CommandBuffer>,
              typename Dispatch               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B0                     = CommandBufferAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, CommandBuffer>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::CommandBuffer, CommandBufferAllocator>>::type
      allocateCommandBuffers( const VULKAN_HPP_NAMESPACE::CommandBufferAllocateInfo & allocateInfo,
                              CommandBufferAllocator &                                commandBufferAllocator,
                              Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename CommandBufferAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::CommandBuffer, Dispatch>>>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::CommandBuffer, Dispatch>, CommandBufferAllocator>>::type
      allocateCommandBuffersUnique( const VULKAN_HPP_NAMESPACE::CommandBufferAllocateInfo & allocateInfo,
                                    Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename CommandBufferAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::CommandBuffer, Dispatch>>,
              typename B0                     = CommandBufferAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, UniqueHandle<CommandBuffer, Dispatch>>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::CommandBuffer, Dispatch>, CommandBufferAllocator>>::type
      allocateCommandBuffersUnique( const VULKAN_HPP_NAMESPACE::CommandBufferAllocateInfo & allocateInfo,
                                    CommandBufferAllocator &                                commandBufferAllocator,
                                    Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void freeCommandBuffers( VULKAN_HPP_NAMESPACE::CommandPool           commandPool,
                             uint32_t                                    commandBufferCount,
                             const VULKAN_HPP_NAMESPACE::CommandBuffer * pCommandBuffers,
                             Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void freeCommandBuffers( VULKAN_HPP_NAMESPACE::CommandPool                             commandPool,
                             ArrayProxy<const VULKAN_HPP_NAMESPACE::CommandBuffer> const & commandBuffers,
                             Dispatch const & d                                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void( free )( VULKAN_HPP_NAMESPACE::CommandPool           commandPool,
                  uint32_t                                    commandBufferCount,
                  const VULKAN_HPP_NAMESPACE::CommandBuffer * pCommandBuffers,
                  Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void( free )( VULKAN_HPP_NAMESPACE::CommandPool                             commandPool,
                  ArrayProxy<const VULKAN_HPP_NAMESPACE::CommandBuffer> const & commandBuffers,
                  Dispatch const & d                                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_VERSION_1_1 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result bindBufferMemory2( uint32_t                                           bindInfoCount,
                                                   const VULKAN_HPP_NAMESPACE::BindBufferMemoryInfo * pBindInfos,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      bindBufferMemory2( ArrayProxy<const VULKAN_HPP_NAMESPACE::BindBufferMemoryInfo> const & bindInfos,
                         Dispatch const & d                                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result bindImageMemory2( uint32_t                                          bindInfoCount,
                                                  const VULKAN_HPP_NAMESPACE::BindImageMemoryInfo * pBindInfos,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      bindImageMemory2( ArrayProxy<const VULKAN_HPP_NAMESPACE::BindImageMemoryInfo> const & bindInfos,
                        Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getGroupPeerMemoryFeatures( uint32_t                                       heapIndex,
                                     uint32_t                                       localDeviceIndex,
                                     uint32_t                                       remoteDeviceIndex,
                                     VULKAN_HPP_NAMESPACE::PeerMemoryFeatureFlags * pPeerMemoryFeatures,
                                     Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::PeerMemoryFeatureFlags
                         getGroupPeerMemoryFeatures( uint32_t           heapIndex,
                                                     uint32_t           localDeviceIndex,
                                                     uint32_t           remoteDeviceIndex,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getImageMemoryRequirements2( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 * pInfo,
                                      VULKAN_HPP_NAMESPACE::MemoryRequirements2 *                pMemoryRequirements,
                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MemoryRequirements2
                         getImageMemoryRequirements2( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 & info,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getImageMemoryRequirements2( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 & info,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getBufferMemoryRequirements2( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 * pInfo,
                                       VULKAN_HPP_NAMESPACE::MemoryRequirements2 *                 pMemoryRequirements,
                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MemoryRequirements2
                         getBufferMemoryRequirements2( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 & info,
                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getBufferMemoryRequirements2( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 & info,
                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getImageSparseMemoryRequirements2( const VULKAN_HPP_NAMESPACE::ImageSparseMemoryRequirementsInfo2 * pInfo,
                                            uint32_t *                                                       pSparseMemoryRequirementCount,
                                            VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2 *           pSparseMemoryRequirements,
                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename SparseImageMemoryRequirements2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2>,
              typename Dispatch                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2, SparseImageMemoryRequirements2Allocator>
                         getImageSparseMemoryRequirements2( const VULKAN_HPP_NAMESPACE::ImageSparseMemoryRequirementsInfo2 & info,
                                                            Dispatch const & d                                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename SparseImageMemoryRequirements2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2>,
              typename Dispatch                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                      = SparseImageMemoryRequirements2Allocator,
              typename std::enable_if<std::is_same<typename B1::value_type, SparseImageMemoryRequirements2>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2, SparseImageMemoryRequirements2Allocator>
                         getImageSparseMemoryRequirements2( const VULKAN_HPP_NAMESPACE::ImageSparseMemoryRequirementsInfo2 & info,
                                                            SparseImageMemoryRequirements2Allocator &                        sparseImageMemoryRequirements2Allocator,
                                                            Dispatch const & d                                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void trimCommandPool( VULKAN_HPP_NAMESPACE::CommandPool          commandPool,
                          VULKAN_HPP_NAMESPACE::CommandPoolTrimFlags flags,
                          Dispatch const & d                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getQueue2( const VULKAN_HPP_NAMESPACE::DeviceQueueInfo2 * pQueueInfo,
                    VULKAN_HPP_NAMESPACE::Queue *                  pQueue,
                    Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Queue getQueue2( const VULKAN_HPP_NAMESPACE::DeviceQueueInfo2 & queueInfo,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createSamplerYcbcrConversion( const VULKAN_HPP_NAMESPACE::SamplerYcbcrConversionCreateInfo * pCreateInfo,
                                                              const VULKAN_HPP_NAMESPACE::AllocationCallbacks *              pAllocator,
                                                              VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion *                 pYcbcrConversion,
                                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion>::type
      createSamplerYcbcrConversion( const VULKAN_HPP_NAMESPACE::SamplerYcbcrConversionCreateInfo &      createInfo,
                                    Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                    Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion, Dispatch>>::type
      createSamplerYcbcrConversionUnique( const VULKAN_HPP_NAMESPACE::SamplerYcbcrConversionCreateInfo &      createInfo,
                                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                          Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroySamplerYcbcrConversion( VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion      ycbcrConversion,
                                        const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                        Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroySamplerYcbcrConversion( VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion ycbcrConversion        VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                        Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion      ycbcrConversion,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion                        ycbcrConversion,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createDescriptorUpdateTemplate( const VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplateCreateInfo * pCreateInfo,
                                                                const VULKAN_HPP_NAMESPACE::AllocationCallbacks *                pAllocator,
                                                                VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate *                 pDescriptorUpdateTemplate,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate>::type
      createDescriptorUpdateTemplate( const VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplateCreateInfo &    createInfo,
                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate, Dispatch>>::type
      createDescriptorUpdateTemplateUnique( const VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplateCreateInfo &    createInfo,
                                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDescriptorUpdateTemplate( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate    descriptorUpdateTemplate,
                                          const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDescriptorUpdateTemplate( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate    descriptorUpdateTemplate,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate                      descriptorUpdateTemplate,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void updateDescriptorSetWithTemplate( VULKAN_HPP_NAMESPACE::DescriptorSet            descriptorSet,
                                          VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate,
                                          const void *                                   pData,
                                          Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DataType, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void updateDescriptorSetWithTemplate( VULKAN_HPP_NAMESPACE::DescriptorSet            descriptorSet,
                                          VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate,
                                          DataType const &                               data,
                                          Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getDescriptorSetLayoutSupport( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo * pCreateInfo,
                                        VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport *          pSupport,
                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport
                         getDescriptorSetLayoutSupport( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo & createInfo,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getDescriptorSetLayoutSupport( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo & createInfo,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_VERSION_1_2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createRenderPass2( const VULKAN_HPP_NAMESPACE::RenderPassCreateInfo2 * pCreateInfo,
                                                   const VULKAN_HPP_NAMESPACE::AllocationCallbacks *   pAllocator,
                                                   VULKAN_HPP_NAMESPACE::RenderPass *                  pRenderPass,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::RenderPass>::type
      createRenderPass2( const VULKAN_HPP_NAMESPACE::RenderPassCreateInfo2 &                 createInfo,
                         Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                         Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::RenderPass, Dispatch>>::type
      createRenderPass2Unique( const VULKAN_HPP_NAMESPACE::RenderPassCreateInfo2 &                 createInfo,
                               Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                               Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resetQueryPool( VULKAN_HPP_NAMESPACE::QueryPool queryPool,
                         uint32_t                        firstQuery,
                         uint32_t                        queryCount,
                         Dispatch const & d              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSemaphoreCounterValue( VULKAN_HPP_NAMESPACE::Semaphore semaphore,
                                                          uint64_t *                      pValue,
                                                          Dispatch const & d              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<uint64_t>::type getSemaphoreCounterValue( VULKAN_HPP_NAMESPACE::Semaphore semaphore,
                                                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result waitSemaphores( const VULKAN_HPP_NAMESPACE::SemaphoreWaitInfo * pWaitInfo,
                                                uint64_t                                        timeout,
                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result waitSemaphores( const VULKAN_HPP_NAMESPACE::SemaphoreWaitInfo & waitInfo,
                                                                      uint64_t                                        timeout,
                                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result signalSemaphore( const VULKAN_HPP_NAMESPACE::SemaphoreSignalInfo * pSignalInfo,
                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      signalSemaphore( const VULKAN_HPP_NAMESPACE::SemaphoreSignalInfo & signalInfo, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    DeviceAddress getBufferAddress( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo * pInfo,
                                    Dispatch const & d                                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NAMESPACE::DeviceAddress getBufferAddress( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    uint64_t getBufferOpaqueCaptureAddress( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo * pInfo,
                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    uint64_t getBufferOpaqueCaptureAddress( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info,
                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    uint64_t getMemoryOpaqueCaptureAddress( const VULKAN_HPP_NAMESPACE::DeviceMemoryOpaqueCaptureAddressInfo * pInfo,
                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    uint64_t getMemoryOpaqueCaptureAddress( const VULKAN_HPP_NAMESPACE::DeviceMemoryOpaqueCaptureAddressInfo & info,
                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_VERSION_1_3 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createPrivateDataSlot( const VULKAN_HPP_NAMESPACE::PrivateDataSlotCreateInfo * pCreateInfo,
                                                       const VULKAN_HPP_NAMESPACE::AllocationCallbacks *       pAllocator,
                                                       VULKAN_HPP_NAMESPACE::PrivateDataSlot *                 pPrivateDataSlot,
                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::PrivateDataSlot>::type
      createPrivateDataSlot( const VULKAN_HPP_NAMESPACE::PrivateDataSlotCreateInfo &             createInfo,
                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::PrivateDataSlot, Dispatch>>::type
      createPrivateDataSlotUnique( const VULKAN_HPP_NAMESPACE::PrivateDataSlotCreateInfo &             createInfo,
                                   Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                   Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyPrivateDataSlot( VULKAN_HPP_NAMESPACE::PrivateDataSlot             privateDataSlot,
                                 const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                 Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyPrivateDataSlot( VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot               VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                 Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::PrivateDataSlot             privateDataSlot,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::PrivateDataSlot                               privateDataSlot,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result setPrivateData( VULKAN_HPP_NAMESPACE::ObjectType      objectType,
                                                uint64_t                              objectHandle,
                                                VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot,
                                                uint64_t                              data,
                                                Dispatch const & d                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    typename ResultValueType<void>::type setPrivateData( VULKAN_HPP_NAMESPACE::ObjectType      objectType,
                                                         uint64_t                              objectHandle,
                                                         VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot,
                                                         uint64_t                              data,
                                                         Dispatch const & d                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getPrivateData( VULKAN_HPP_NAMESPACE::ObjectType      objectType,
                         uint64_t                              objectHandle,
                         VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot,
                         uint64_t *                            pData,
                         Dispatch const & d                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD uint64_t getPrivateData( VULKAN_HPP_NAMESPACE::ObjectType      objectType,
                                                  uint64_t                              objectHandle,
                                                  VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot,
                                                  Dispatch const & d                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getBufferMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements * pInfo,
                                      VULKAN_HPP_NAMESPACE::MemoryRequirements2 *                  pMemoryRequirements,
                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MemoryRequirements2
                         getBufferMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements & info,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getBufferMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements & info,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getImageMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements * pInfo,
                                     VULKAN_HPP_NAMESPACE::MemoryRequirements2 *                 pMemoryRequirements,
                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MemoryRequirements2
                         getImageMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getImageMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getImageSparseMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements * pInfo,
                                           uint32_t *                                                  pSparseMemoryRequirementCount,
                                           VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2 *      pSparseMemoryRequirements,
                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename SparseImageMemoryRequirements2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2>,
              typename Dispatch                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2, SparseImageMemoryRequirements2Allocator>
                         getImageSparseMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info,
                                                           Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename SparseImageMemoryRequirements2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2>,
              typename Dispatch                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                      = SparseImageMemoryRequirements2Allocator,
              typename std::enable_if<std::is_same<typename B1::value_type, SparseImageMemoryRequirements2>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2, SparseImageMemoryRequirements2Allocator>
                         getImageSparseMemoryRequirements( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info,
                                                           SparseImageMemoryRequirements2Allocator &                   sparseImageMemoryRequirements2Allocator,
                                                           Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_swapchain ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createSwapchainKHR( const VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR * pCreateInfo,
                                                    const VULKAN_HPP_NAMESPACE::AllocationCallbacks *    pAllocator,
                                                    VULKAN_HPP_NAMESPACE::SwapchainKHR *                 pSwapchain,
                                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SwapchainKHR>::type
      createSwapchainKHR( const VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR &                createInfo,
                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                          Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SwapchainKHR, Dispatch>>::type
      createSwapchainKHRUnique( const VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR &                createInfo,
                                Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroySwapchainKHR( VULKAN_HPP_NAMESPACE::SwapchainKHR                swapchain,
                              const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                              Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroySwapchainKHR( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain                        VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                              Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::SwapchainKHR                swapchain,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::SwapchainKHR                                  swapchain,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSwapchainImagesKHR( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain,
                                                       uint32_t *                         pSwapchainImageCount,
                                                       VULKAN_HPP_NAMESPACE::Image *      pSwapchainImages,
                                                       Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename ImageAllocator = std::allocator<VULKAN_HPP_NAMESPACE::Image>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::Image, ImageAllocator>>::type
      getSwapchainImagesKHR( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename ImageAllocator                                                                 = std::allocator<VULKAN_HPP_NAMESPACE::Image>,
              typename Dispatch                                                                       = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                                                             = ImageAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, Image>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::Image, ImageAllocator>>::type getSwapchainImagesKHR(
      VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain, ImageAllocator & imageAllocator, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result acquireNextImageKHR( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain,
                                                     uint64_t                           timeout,
                                                     VULKAN_HPP_NAMESPACE::Semaphore    semaphore,
                                                     VULKAN_HPP_NAMESPACE::Fence        fence,
                                                     uint32_t *                         pImageIndex,
                                                     Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<uint32_t> acquireNextImageKHR( VULKAN_HPP_NAMESPACE::SwapchainKHR        swapchain,
                                                                    uint64_t                                  timeout,
                                                                    VULKAN_HPP_NAMESPACE::Semaphore semaphore VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                                                    VULKAN_HPP_NAMESPACE::Fence fence         VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                                                    Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getGroupPresentCapabilitiesKHR( VULKAN_HPP_NAMESPACE::DeviceGroupPresentCapabilitiesKHR * pDeviceGroupPresentCapabilities,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DeviceGroupPresentCapabilitiesKHR>::type
      getGroupPresentCapabilitiesKHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getGroupSurfacePresentModesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR                       surface,
                                                                VULKAN_HPP_NAMESPACE::DeviceGroupPresentModeFlagsKHR * pModes,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DeviceGroupPresentModeFlagsKHR>::type
      getGroupSurfacePresentModesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result acquireNextImage2KHR( const VULKAN_HPP_NAMESPACE::AcquireNextImageInfoKHR * pAcquireInfo,
                                                      uint32_t *                                            pImageIndex,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<uint32_t> acquireNextImage2KHR( const VULKAN_HPP_NAMESPACE::AcquireNextImageInfoKHR & acquireInfo,
                                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_display_swapchain ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createSharedSwapchainsKHR( uint32_t                                             swapchainCount,
                                                           const VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR * pCreateInfos,
                                                           const VULKAN_HPP_NAMESPACE::AllocationCallbacks *    pAllocator,
                                                           VULKAN_HPP_NAMESPACE::SwapchainKHR *                 pSwapchains,
                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename SwapchainKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::SwapchainKHR>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::SwapchainKHR, SwapchainKHRAllocator>>::type
      createSharedSwapchainsKHR( ArrayProxy<const VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR> const & createInfos,
                                 Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator    VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                 Dispatch const & d                                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename SwapchainKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::SwapchainKHR>,
              typename Dispatch              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B0                    = SwapchainKHRAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, SwapchainKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::SwapchainKHR, SwapchainKHRAllocator>>::type
      createSharedSwapchainsKHR( ArrayProxy<const VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR> const & createInfos,
                                 Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks>              allocator,
                                 SwapchainKHRAllocator &                                                swapchainKHRAllocator,
                                 Dispatch const & d                                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SwapchainKHR>::type
      createSharedSwapchainKHR( const VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR &                createInfo,
                                Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename SwapchainKHRAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::SwapchainKHR, Dispatch>>>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::SwapchainKHR, Dispatch>, SwapchainKHRAllocator>>::type
      createSharedSwapchainsKHRUnique( ArrayProxy<const VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR> const & createInfos,
                                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator    VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                       Dispatch const & d                                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename SwapchainKHRAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::SwapchainKHR, Dispatch>>,
              typename B0                    = SwapchainKHRAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, UniqueHandle<SwapchainKHR, Dispatch>>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::SwapchainKHR, Dispatch>, SwapchainKHRAllocator>>::type
      createSharedSwapchainsKHRUnique( ArrayProxy<const VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR> const & createInfos,
                                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks>              allocator,
                                       SwapchainKHRAllocator &                                                swapchainKHRAllocator,
                                       Dispatch const & d                                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SwapchainKHR, Dispatch>>::type
      createSharedSwapchainKHRUnique( const VULKAN_HPP_NAMESPACE::SwapchainCreateInfoKHR &                createInfo,
                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_debug_marker ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result debugMarkerSetObjectTagEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerObjectTagInfoEXT * pTagInfo,
                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      debugMarkerSetObjectTagEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerObjectTagInfoEXT & tagInfo,
                                  Dispatch const & d                                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result debugMarkerSetObjectNameEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerObjectNameInfoEXT * pNameInfo,
                                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      debugMarkerSetObjectNameEXT( const VULKAN_HPP_NAMESPACE::DebugMarkerObjectNameInfoEXT & nameInfo,
                                   Dispatch const & d                                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_ENABLE_BETA_EXTENSIONS )
    //=== VK_KHR_video_queue ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createVideoSessionKHR( const VULKAN_HPP_NAMESPACE::VideoSessionCreateInfoKHR * pCreateInfo,
                                                       const VULKAN_HPP_NAMESPACE::AllocationCallbacks *       pAllocator,
                                                       VULKAN_HPP_NAMESPACE::VideoSessionKHR *                 pVideoSession,
                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::VideoSessionKHR>::type
      createVideoSessionKHR( const VULKAN_HPP_NAMESPACE::VideoSessionCreateInfoKHR &             createInfo,
                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::VideoSessionKHR, Dispatch>>::type
      createVideoSessionKHRUnique( const VULKAN_HPP_NAMESPACE::VideoSessionCreateInfoKHR &             createInfo,
                                   Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                   Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyVideoSessionKHR( VULKAN_HPP_NAMESPACE::VideoSessionKHR             videoSession,
                                 const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                 Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyVideoSessionKHR( VULKAN_HPP_NAMESPACE::VideoSessionKHR                               videoSession,
                                 Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::VideoSessionKHR             videoSession,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::VideoSessionKHR                               videoSession,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getVideoSessionMemoryRequirementsKHR( VULKAN_HPP_NAMESPACE::VideoSessionKHR                     videoSession,
                                                                      uint32_t *                                                pMemoryRequirementsCount,
                                                                      VULKAN_HPP_NAMESPACE::VideoSessionMemoryRequirementsKHR * pMemoryRequirements,
                                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename VideoSessionMemoryRequirementsKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::VideoSessionMemoryRequirementsKHR>,
              typename Dispatch                                   = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::VideoSessionMemoryRequirementsKHR, VideoSessionMemoryRequirementsKHRAllocator>>::type
      getVideoSessionMemoryRequirementsKHR( VULKAN_HPP_NAMESPACE::VideoSessionKHR videoSession,
                                            Dispatch const & d                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename VideoSessionMemoryRequirementsKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::VideoSessionMemoryRequirementsKHR>,
              typename Dispatch                                   = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                         = VideoSessionMemoryRequirementsKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, VideoSessionMemoryRequirementsKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::VideoSessionMemoryRequirementsKHR, VideoSessionMemoryRequirementsKHRAllocator>>::type
      getVideoSessionMemoryRequirementsKHR( VULKAN_HPP_NAMESPACE::VideoSessionKHR        videoSession,
                                            VideoSessionMemoryRequirementsKHRAllocator & videoSessionMemoryRequirementsKHRAllocator,
                                            Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result bindVideoSessionMemoryKHR( VULKAN_HPP_NAMESPACE::VideoSessionKHR                       videoSession,
                                                           uint32_t                                                    bindSessionMemoryInfoCount,
                                                           const VULKAN_HPP_NAMESPACE::BindVideoSessionMemoryInfoKHR * pBindSessionMemoryInfos,
                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      bindVideoSessionMemoryKHR( VULKAN_HPP_NAMESPACE::VideoSessionKHR                                         videoSession,
                                 ArrayProxy<const VULKAN_HPP_NAMESPACE::BindVideoSessionMemoryInfoKHR> const & bindSessionMemoryInfos,
                                 Dispatch const & d                                                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createVideoSessionParametersKHR( const VULKAN_HPP_NAMESPACE::VideoSessionParametersCreateInfoKHR * pCreateInfo,
                                                                 const VULKAN_HPP_NAMESPACE::AllocationCallbacks *                 pAllocator,
                                                                 VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR *                 pVideoSessionParameters,
                                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR>::type
      createVideoSessionParametersKHR( const VULKAN_HPP_NAMESPACE::VideoSessionParametersCreateInfoKHR &   createInfo,
                                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                       Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR, Dispatch>>::type
      createVideoSessionParametersKHRUnique( const VULKAN_HPP_NAMESPACE::VideoSessionParametersCreateInfoKHR &   createInfo,
                                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result updateVideoSessionParametersKHR( VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR                   videoSessionParameters,
                                                                 const VULKAN_HPP_NAMESPACE::VideoSessionParametersUpdateInfoKHR * pUpdateInfo,
                                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      updateVideoSessionParametersKHR( VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR                   videoSessionParameters,
                                       const VULKAN_HPP_NAMESPACE::VideoSessionParametersUpdateInfoKHR & updateInfo,
                                       Dispatch const & d                                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyVideoSessionParametersKHR( VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR   videoSessionParameters,
                                           const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyVideoSessionParametersKHR( VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR                     videoSessionParameters,
                                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR   videoSessionParameters,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::VideoSessionParametersKHR                     videoSessionParameters,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_ENABLE_BETA_EXTENSIONS*/

    //=== VK_NVX_binary_import ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createCuModuleNVX( const VULKAN_HPP_NAMESPACE::CuModuleCreateInfoNVX * pCreateInfo,
                                                   const VULKAN_HPP_NAMESPACE::AllocationCallbacks *   pAllocator,
                                                   VULKAN_HPP_NAMESPACE::CuModuleNVX *                 pModule,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::CuModuleNVX>::type
      createCuModuleNVX( const VULKAN_HPP_NAMESPACE::CuModuleCreateInfoNVX &                 createInfo,
                         Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                         Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::CuModuleNVX, Dispatch>>::type
      createCuModuleNVXUnique( const VULKAN_HPP_NAMESPACE::CuModuleCreateInfoNVX &                 createInfo,
                               Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                               Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createCuFunctionNVX( const VULKAN_HPP_NAMESPACE::CuFunctionCreateInfoNVX * pCreateInfo,
                                                     const VULKAN_HPP_NAMESPACE::AllocationCallbacks *     pAllocator,
                                                     VULKAN_HPP_NAMESPACE::CuFunctionNVX *                 pFunction,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::CuFunctionNVX>::type
      createCuFunctionNVX( const VULKAN_HPP_NAMESPACE::CuFunctionCreateInfoNVX &               createInfo,
                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                           Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::CuFunctionNVX, Dispatch>>::type
      createCuFunctionNVXUnique( const VULKAN_HPP_NAMESPACE::CuFunctionCreateInfoNVX &               createInfo,
                                 Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                 Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyCuModuleNVX( VULKAN_HPP_NAMESPACE::CuModuleNVX                 module,
                             const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                             Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyCuModuleNVX( VULKAN_HPP_NAMESPACE::CuModuleNVX                                   module,
                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::CuModuleNVX                 module,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::CuModuleNVX                                   module,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyCuFunctionNVX( VULKAN_HPP_NAMESPACE::CuFunctionNVX               function,
                               const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                               Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyCuFunctionNVX( VULKAN_HPP_NAMESPACE::CuFunctionNVX                                 function,
                               Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::CuFunctionNVX               function,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::CuFunctionNVX                                 function,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_NVX_image_view_handle ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    uint32_t getImageViewHandleNVX( const VULKAN_HPP_NAMESPACE::ImageViewHandleInfoNVX * pInfo,
                                    Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    uint32_t getImageViewHandleNVX( const VULKAN_HPP_NAMESPACE::ImageViewHandleInfoNVX & info,
                                    Dispatch const & d                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getImageViewAddressNVX( VULKAN_HPP_NAMESPACE::ImageView                       imageView,
                                                        VULKAN_HPP_NAMESPACE::ImageViewAddressPropertiesNVX * pProperties,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::ImageViewAddressPropertiesNVX>::type
      getImageViewAddressNVX( VULKAN_HPP_NAMESPACE::ImageView imageView, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_AMD_shader_info ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getShaderInfoAMD( VULKAN_HPP_NAMESPACE::Pipeline            pipeline,
                                                  VULKAN_HPP_NAMESPACE::ShaderStageFlagBits shaderStage,
                                                  VULKAN_HPP_NAMESPACE::ShaderInfoTypeAMD   infoType,
                                                  size_t *                                  pInfoSize,
                                                  void *                                    pInfo,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Uint8_tAllocator = std::allocator<uint8_t>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<uint8_t, Uint8_tAllocator>>::type
      getShaderInfoAMD( VULKAN_HPP_NAMESPACE::Pipeline            pipeline,
                        VULKAN_HPP_NAMESPACE::ShaderStageFlagBits shaderStage,
                        VULKAN_HPP_NAMESPACE::ShaderInfoTypeAMD   infoType,
                        Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Uint8_tAllocator                                                                 = std::allocator<uint8_t>,
              typename Dispatch                                                                         = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                                                               = Uint8_tAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, uint8_t>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<uint8_t, Uint8_tAllocator>>::type
      getShaderInfoAMD( VULKAN_HPP_NAMESPACE::Pipeline            pipeline,
                        VULKAN_HPP_NAMESPACE::ShaderStageFlagBits shaderStage,
                        VULKAN_HPP_NAMESPACE::ShaderInfoTypeAMD   infoType,
                        Uint8_tAllocator &                        uint8_tAllocator,
                        Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
    //=== VK_NV_external_memory_win32 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getMemoryWin32HandleNV( VULKAN_HPP_NAMESPACE::DeviceMemory                    memory,
                                                        VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV handleType,
                                                        HANDLE *                                              pHandle,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<HANDLE>::type getMemoryWin32HandleNV( VULKAN_HPP_NAMESPACE::DeviceMemory                    memory,
                                                                                        VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV handleType,
                                                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_WIN32_KHR*/

    //=== VK_KHR_device_group ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getGroupPeerMemoryFeaturesKHR( uint32_t                                       heapIndex,
                                        uint32_t                                       localDeviceIndex,
                                        uint32_t                                       remoteDeviceIndex,
                                        VULKAN_HPP_NAMESPACE::PeerMemoryFeatureFlags * pPeerMemoryFeatures,
                                        Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::PeerMemoryFeatureFlags
                         getGroupPeerMemoryFeaturesKHR( uint32_t           heapIndex,
                                                        uint32_t           localDeviceIndex,
                                                        uint32_t           remoteDeviceIndex,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_maintenance1 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void trimCommandPoolKHR( VULKAN_HPP_NAMESPACE::CommandPool          commandPool,
                             VULKAN_HPP_NAMESPACE::CommandPoolTrimFlags flags,
                             Dispatch const & d                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

#if defined( VK_USE_PLATFORM_WIN32_KHR )
    //=== VK_KHR_external_memory_win32 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getMemoryWin32HandleKHR( const VULKAN_HPP_NAMESPACE::MemoryGetWin32HandleInfoKHR * pGetWin32HandleInfo,
                                                         HANDLE *                                                  pHandle,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<HANDLE>::type
      getMemoryWin32HandleKHR( const VULKAN_HPP_NAMESPACE::MemoryGetWin32HandleInfoKHR & getWin32HandleInfo,
                               Dispatch const & d                                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getMemoryWin32HandlePropertiesKHR( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType,
                                                                   HANDLE                                                 handle,
                                                                   VULKAN_HPP_NAMESPACE::MemoryWin32HandlePropertiesKHR * pMemoryWin32HandleProperties,
                                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::MemoryWin32HandlePropertiesKHR>::type getMemoryWin32HandlePropertiesKHR(
      VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_WIN32_KHR*/

    //=== VK_KHR_external_memory_fd ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getMemoryFdKHR( const VULKAN_HPP_NAMESPACE::MemoryGetFdInfoKHR * pGetFdInfo,
                                                int *                                            pFd,
                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<int>::type getMemoryFdKHR( const VULKAN_HPP_NAMESPACE::MemoryGetFdInfoKHR & getFdInfo,
                                                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getMemoryFdPropertiesKHR( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType,
                                                          int                                                    fd,
                                                          VULKAN_HPP_NAMESPACE::MemoryFdPropertiesKHR *          pMemoryFdProperties,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::MemoryFdPropertiesKHR>::type getMemoryFdPropertiesKHR(
      VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType, int fd, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
    //=== VK_KHR_external_semaphore_win32 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result importSemaphoreWin32HandleKHR( const VULKAN_HPP_NAMESPACE::ImportSemaphoreWin32HandleInfoKHR * pImportSemaphoreWin32HandleInfo,
                                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      importSemaphoreWin32HandleKHR( const VULKAN_HPP_NAMESPACE::ImportSemaphoreWin32HandleInfoKHR & importSemaphoreWin32HandleInfo,
                                     Dispatch const & d                                              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSemaphoreWin32HandleKHR( const VULKAN_HPP_NAMESPACE::SemaphoreGetWin32HandleInfoKHR * pGetWin32HandleInfo,
                                                            HANDLE *                                                     pHandle,
                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<HANDLE>::type
      getSemaphoreWin32HandleKHR( const VULKAN_HPP_NAMESPACE::SemaphoreGetWin32HandleInfoKHR & getWin32HandleInfo,
                                  Dispatch const & d                                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_WIN32_KHR*/

    //=== VK_KHR_external_semaphore_fd ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result importSemaphoreFdKHR( const VULKAN_HPP_NAMESPACE::ImportSemaphoreFdInfoKHR * pImportSemaphoreFdInfo,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      importSemaphoreFdKHR( const VULKAN_HPP_NAMESPACE::ImportSemaphoreFdInfoKHR & importSemaphoreFdInfo,
                            Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSemaphoreFdKHR( const VULKAN_HPP_NAMESPACE::SemaphoreGetFdInfoKHR * pGetFdInfo,
                                                   int *                                               pFd,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<int>::type getSemaphoreFdKHR( const VULKAN_HPP_NAMESPACE::SemaphoreGetFdInfoKHR & getFdInfo,
                                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_descriptor_update_template ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createDescriptorUpdateTemplateKHR( const VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplateCreateInfo * pCreateInfo,
                                                                   const VULKAN_HPP_NAMESPACE::AllocationCallbacks *                pAllocator,
                                                                   VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate *                 pDescriptorUpdateTemplate,
                                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate>::type
      createDescriptorUpdateTemplateKHR( const VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplateCreateInfo &    createInfo,
                                         Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                         Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate, Dispatch>>::type
      createDescriptorUpdateTemplateKHRUnique( const VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplateCreateInfo & createInfo,
                                               Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator
                                                                  VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDescriptorUpdateTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate    descriptorUpdateTemplate,
                                             const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDescriptorUpdateTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void updateDescriptorSetWithTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorSet            descriptorSet,
                                             VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate,
                                             const void *                                   pData,
                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DataType, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void updateDescriptorSetWithTemplateKHR( VULKAN_HPP_NAMESPACE::DescriptorSet            descriptorSet,
                                             VULKAN_HPP_NAMESPACE::DescriptorUpdateTemplate descriptorUpdateTemplate,
                                             DataType const &                               data,
                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_display_control ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result displayPowerControlEXT( VULKAN_HPP_NAMESPACE::DisplayKHR                  display,
                                                        const VULKAN_HPP_NAMESPACE::DisplayPowerInfoEXT * pDisplayPowerInfo,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    typename ResultValueType<void>::type displayPowerControlEXT( VULKAN_HPP_NAMESPACE::DisplayKHR                  display,
                                                                 const VULKAN_HPP_NAMESPACE::DisplayPowerInfoEXT & displayPowerInfo,
                                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result registerEventEXT( const VULKAN_HPP_NAMESPACE::DeviceEventInfoEXT *  pDeviceEventInfo,
                                                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                                  VULKAN_HPP_NAMESPACE::Fence *                     pFence,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::Fence>::type
      registerEventEXT( const VULKAN_HPP_NAMESPACE::DeviceEventInfoEXT &                    deviceEventInfo,
                        Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                        Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::Fence, Dispatch>>::type
      registerEventEXTUnique( const VULKAN_HPP_NAMESPACE::DeviceEventInfoEXT &                    deviceEventInfo,
                              Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                              Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result registerDisplayEventEXT( VULKAN_HPP_NAMESPACE::DisplayKHR                  display,
                                                         const VULKAN_HPP_NAMESPACE::DisplayEventInfoEXT * pDisplayEventInfo,
                                                         const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                                         VULKAN_HPP_NAMESPACE::Fence *                     pFence,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::Fence>::type
      registerDisplayEventEXT( VULKAN_HPP_NAMESPACE::DisplayKHR                                    display,
                               const VULKAN_HPP_NAMESPACE::DisplayEventInfoEXT &                   displayEventInfo,
                               Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                               Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::Fence, Dispatch>>::type
      registerDisplayEventEXTUnique( VULKAN_HPP_NAMESPACE::DisplayKHR                                    display,
                                     const VULKAN_HPP_NAMESPACE::DisplayEventInfoEXT &                   displayEventInfo,
                                     Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                     Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSwapchainCounterEXT( VULKAN_HPP_NAMESPACE::SwapchainKHR              swapchain,
                                                        VULKAN_HPP_NAMESPACE::SurfaceCounterFlagBitsEXT counter,
                                                        uint64_t *                                      pCounterValue,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<uint64_t>::type getSwapchainCounterEXT( VULKAN_HPP_NAMESPACE::SwapchainKHR              swapchain,
                                                                                          VULKAN_HPP_NAMESPACE::SurfaceCounterFlagBitsEXT counter,
                                                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_GOOGLE_display_timing ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getRefreshCycleDurationGOOGLE( VULKAN_HPP_NAMESPACE::SwapchainKHR                 swapchain,
                                                               VULKAN_HPP_NAMESPACE::RefreshCycleDurationGOOGLE * pDisplayTimingProperties,
                                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::RefreshCycleDurationGOOGLE>::type
      getRefreshCycleDurationGOOGLE( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getPastPresentationTimingGOOGLE( VULKAN_HPP_NAMESPACE::SwapchainKHR                   swapchain,
                                                                 uint32_t *                                           pPresentationTimingCount,
                                                                 VULKAN_HPP_NAMESPACE::PastPresentationTimingGOOGLE * pPresentationTimings,
                                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PastPresentationTimingGOOGLEAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PastPresentationTimingGOOGLE>,
              typename Dispatch                              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PastPresentationTimingGOOGLE, PastPresentationTimingGOOGLEAllocator>>::type
      getPastPresentationTimingGOOGLE( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PastPresentationTimingGOOGLEAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PastPresentationTimingGOOGLE>,
              typename Dispatch                              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                    = PastPresentationTimingGOOGLEAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PastPresentationTimingGOOGLE>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PastPresentationTimingGOOGLE, PastPresentationTimingGOOGLEAllocator>>::type
      getPastPresentationTimingGOOGLE( VULKAN_HPP_NAMESPACE::SwapchainKHR      swapchain,
                                       PastPresentationTimingGOOGLEAllocator & pastPresentationTimingGOOGLEAllocator,
                                       Dispatch const & d                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_hdr_metadata ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setHdrMetadataEXT( uint32_t                                     swapchainCount,
                            const VULKAN_HPP_NAMESPACE::SwapchainKHR *   pSwapchains,
                            const VULKAN_HPP_NAMESPACE::HdrMetadataEXT * pMetadata,
                            Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setHdrMetadataEXT( ArrayProxy<const VULKAN_HPP_NAMESPACE::SwapchainKHR> const &   swapchains,
                            ArrayProxy<const VULKAN_HPP_NAMESPACE::HdrMetadataEXT> const & metadata,
                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT_WHEN_NO_EXCEPTIONS;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_create_renderpass2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createRenderPass2KHR( const VULKAN_HPP_NAMESPACE::RenderPassCreateInfo2 * pCreateInfo,
                                                      const VULKAN_HPP_NAMESPACE::AllocationCallbacks *   pAllocator,
                                                      VULKAN_HPP_NAMESPACE::RenderPass *                  pRenderPass,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::RenderPass>::type
      createRenderPass2KHR( const VULKAN_HPP_NAMESPACE::RenderPassCreateInfo2 &                 createInfo,
                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                            Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::RenderPass, Dispatch>>::type
      createRenderPass2KHRUnique( const VULKAN_HPP_NAMESPACE::RenderPassCreateInfo2 &                 createInfo,
                                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_shared_presentable_image ===

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSwapchainStatusKHR( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain,
                                                       Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result getSwapchainStatusKHR( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain,
                                                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
    //=== VK_KHR_external_fence_win32 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result importFenceWin32HandleKHR( const VULKAN_HPP_NAMESPACE::ImportFenceWin32HandleInfoKHR * pImportFenceWin32HandleInfo,
                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      importFenceWin32HandleKHR( const VULKAN_HPP_NAMESPACE::ImportFenceWin32HandleInfoKHR & importFenceWin32HandleInfo,
                                 Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getFenceWin32HandleKHR( const VULKAN_HPP_NAMESPACE::FenceGetWin32HandleInfoKHR * pGetWin32HandleInfo,
                                                        HANDLE *                                                 pHandle,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<HANDLE>::type
      getFenceWin32HandleKHR( const VULKAN_HPP_NAMESPACE::FenceGetWin32HandleInfoKHR & getWin32HandleInfo,
                              Dispatch const & d                                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_WIN32_KHR*/

    //=== VK_KHR_external_fence_fd ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result importFenceFdKHR( const VULKAN_HPP_NAMESPACE::ImportFenceFdInfoKHR * pImportFenceFdInfo,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      importFenceFdKHR( const VULKAN_HPP_NAMESPACE::ImportFenceFdInfoKHR & importFenceFdInfo,
                        Dispatch const & d                                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getFenceFdKHR( const VULKAN_HPP_NAMESPACE::FenceGetFdInfoKHR * pGetFdInfo,
                                               int *                                           pFd,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<int>::type getFenceFdKHR( const VULKAN_HPP_NAMESPACE::FenceGetFdInfoKHR & getFdInfo,
                                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_performance_query ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result acquireProfilingLockKHR( const VULKAN_HPP_NAMESPACE::AcquireProfilingLockInfoKHR * pInfo,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      acquireProfilingLockKHR( const VULKAN_HPP_NAMESPACE::AcquireProfilingLockInfoKHR & info,
                               Dispatch const & d                                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void releaseProfilingLockKHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_EXT_debug_utils ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result setDebugUtilsObjectNameEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsObjectNameInfoEXT * pNameInfo,
                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      setDebugUtilsObjectNameEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsObjectNameInfoEXT & nameInfo,
                                  Dispatch const & d                                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result setDebugUtilsObjectTagEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsObjectTagInfoEXT * pTagInfo,
                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      setDebugUtilsObjectTagEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsObjectTagInfoEXT & tagInfo,
                                 Dispatch const & d                                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    //=== VK_ANDROID_external_memory_android_hardware_buffer ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result
      getAndroidHardwareBufferPropertiesANDROID( const struct AHardwareBuffer *                                 buffer,
                                                 VULKAN_HPP_NAMESPACE::AndroidHardwareBufferPropertiesANDROID * pProperties,
                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::AndroidHardwareBufferPropertiesANDROID>::type
      getAndroidHardwareBufferPropertiesANDROID( const struct AHardwareBuffer & buffer, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<StructureChain<X, Y, Z...>>::type
      getAndroidHardwareBufferPropertiesANDROID( const struct AHardwareBuffer & buffer, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getMemoryAndroidHardwareBufferANDROID( const VULKAN_HPP_NAMESPACE::MemoryGetAndroidHardwareBufferInfoANDROID * pInfo,
                                                                       struct AHardwareBuffer **                                               pBuffer,
                                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<struct AHardwareBuffer *>::type
      getMemoryAndroidHardwareBufferANDROID( const VULKAN_HPP_NAMESPACE::MemoryGetAndroidHardwareBufferInfoANDROID & info,
                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_ANDROID_KHR*/

    //=== VK_KHR_get_memory_requirements2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getImageMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 * pInfo,
                                         VULKAN_HPP_NAMESPACE::MemoryRequirements2 *                pMemoryRequirements,
                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MemoryRequirements2
                         getImageMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 & info,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getImageMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::ImageMemoryRequirementsInfo2 & info,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getBufferMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 * pInfo,
                                          VULKAN_HPP_NAMESPACE::MemoryRequirements2 *                 pMemoryRequirements,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MemoryRequirements2
                         getBufferMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 & info,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getBufferMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::BufferMemoryRequirementsInfo2 & info,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getImageSparseMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::ImageSparseMemoryRequirementsInfo2 * pInfo,
                                               uint32_t *                                                       pSparseMemoryRequirementCount,
                                               VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2 *           pSparseMemoryRequirements,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename SparseImageMemoryRequirements2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2>,
              typename Dispatch                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2, SparseImageMemoryRequirements2Allocator>
                         getImageSparseMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::ImageSparseMemoryRequirementsInfo2 & info,
                                                               Dispatch const & d                                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename SparseImageMemoryRequirements2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2>,
              typename Dispatch                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                      = SparseImageMemoryRequirements2Allocator,
              typename std::enable_if<std::is_same<typename B1::value_type, SparseImageMemoryRequirements2>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2, SparseImageMemoryRequirements2Allocator>
                         getImageSparseMemoryRequirements2KHR( const VULKAN_HPP_NAMESPACE::ImageSparseMemoryRequirementsInfo2 & info,
                                                               SparseImageMemoryRequirements2Allocator &                        sparseImageMemoryRequirements2Allocator,
                                                               Dispatch const & d                                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_acceleration_structure ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createAccelerationStructureKHR( const VULKAN_HPP_NAMESPACE::AccelerationStructureCreateInfoKHR * pCreateInfo,
                                                                const VULKAN_HPP_NAMESPACE::AllocationCallbacks *                pAllocator,
                                                                VULKAN_HPP_NAMESPACE::AccelerationStructureKHR *                 pAccelerationStructure,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::AccelerationStructureKHR>::type
      createAccelerationStructureKHR( const VULKAN_HPP_NAMESPACE::AccelerationStructureCreateInfoKHR &    createInfo,
                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::AccelerationStructureKHR, Dispatch>>::type
      createAccelerationStructureKHRUnique( const VULKAN_HPP_NAMESPACE::AccelerationStructureCreateInfoKHR &    createInfo,
                                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyAccelerationStructureKHR( VULKAN_HPP_NAMESPACE::AccelerationStructureKHR    accelerationStructure,
                                          const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyAccelerationStructureKHR( VULKAN_HPP_NAMESPACE::AccelerationStructureKHR accelerationStructure VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator  VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::AccelerationStructureKHR    accelerationStructure,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::AccelerationStructureKHR                      accelerationStructure,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result buildAccelerationStructuresKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                                   deferredOperation,
                                                                uint32_t                                                                     infoCount,
                                                                const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR *      pInfos,
                                                                const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildRangeInfoKHR * const * ppBuildRangeInfos,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result
                         buildAccelerationStructuresKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                                                     deferredOperation,
                                                         ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR> const &      infos,
                                                         ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildRangeInfoKHR * const> const & pBuildRangeInfos,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result copyAccelerationStructureKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                     deferredOperation,
                                                              const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureInfoKHR * pInfo,
                                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result copyAccelerationStructureKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR deferredOperation,
                                                                                    const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureInfoKHR & info,
                                                                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result copyAccelerationStructureToMemoryKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                             deferredOperation,
                                                                      const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureToMemoryInfoKHR * pInfo,
                                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result
                         copyAccelerationStructureToMemoryKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                             deferredOperation,
                                                               const VULKAN_HPP_NAMESPACE::CopyAccelerationStructureToMemoryInfoKHR & info,
                                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result copyMemoryToAccelerationStructureKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                             deferredOperation,
                                                                      const VULKAN_HPP_NAMESPACE::CopyMemoryToAccelerationStructureInfoKHR * pInfo,
                                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result
                         copyMemoryToAccelerationStructureKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                             deferredOperation,
                                                               const VULKAN_HPP_NAMESPACE::CopyMemoryToAccelerationStructureInfoKHR & info,
                                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result
      writeAccelerationStructuresPropertiesKHR( uint32_t                                               accelerationStructureCount,
                                                const VULKAN_HPP_NAMESPACE::AccelerationStructureKHR * pAccelerationStructures,
                                                VULKAN_HPP_NAMESPACE::QueryType                        queryType,
                                                size_t                                                 dataSize,
                                                void *                                                 pData,
                                                size_t                                                 stride,
                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DataType, typename DataTypeAllocator = std::allocator<DataType>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<DataType, DataTypeAllocator>>::type
      writeAccelerationStructuresPropertiesKHR( ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureKHR> const & accelerationStructures,
                                                VULKAN_HPP_NAMESPACE::QueryType                                          queryType,
                                                size_t                                                                   dataSize,
                                                size_t                                                                   stride,
                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DataType, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<DataType>::type
      writeAccelerationStructuresPropertyKHR( ArrayProxy<const VULKAN_HPP_NAMESPACE::AccelerationStructureKHR> const & accelerationStructures,
                                              VULKAN_HPP_NAMESPACE::QueryType                                          queryType,
                                              size_t                                                                   stride,
                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    DeviceAddress getAccelerationStructureAddressKHR( const VULKAN_HPP_NAMESPACE::AccelerationStructureDeviceAddressInfoKHR * pInfo,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NAMESPACE::DeviceAddress
      getAccelerationStructureAddressKHR( const VULKAN_HPP_NAMESPACE::AccelerationStructureDeviceAddressInfoKHR & info,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getAccelerationStructureCompatibilityKHR( const VULKAN_HPP_NAMESPACE::AccelerationStructureVersionInfoKHR * pVersionInfo,
                                                   VULKAN_HPP_NAMESPACE::AccelerationStructureCompatibilityKHR *     pCompatibility,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::AccelerationStructureCompatibilityKHR
                         getAccelerationStructureCompatibilityKHR( const VULKAN_HPP_NAMESPACE::AccelerationStructureVersionInfoKHR & versionInfo,
                                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getAccelerationStructureBuildSizesKHR( VULKAN_HPP_NAMESPACE::AccelerationStructureBuildTypeKHR                 buildType,
                                                const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR * pBuildInfo,
                                                const uint32_t *                                                        pMaxPrimitiveCounts,
                                                VULKAN_HPP_NAMESPACE::AccelerationStructureBuildSizesInfoKHR *          pSizeInfo,
                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::AccelerationStructureBuildSizesInfoKHR
                         getAccelerationStructureBuildSizesKHR( VULKAN_HPP_NAMESPACE::AccelerationStructureBuildTypeKHR                 buildType,
                                                                const VULKAN_HPP_NAMESPACE::AccelerationStructureBuildGeometryInfoKHR & buildInfo,
                                                                ArrayProxy<const uint32_t> const & maxPrimitiveCounts VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT_WHEN_NO_EXCEPTIONS;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_sampler_ycbcr_conversion ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createSamplerYcbcrConversionKHR( const VULKAN_HPP_NAMESPACE::SamplerYcbcrConversionCreateInfo * pCreateInfo,
                                                                 const VULKAN_HPP_NAMESPACE::AllocationCallbacks *              pAllocator,
                                                                 VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion *                 pYcbcrConversion,
                                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion>::type
      createSamplerYcbcrConversionKHR( const VULKAN_HPP_NAMESPACE::SamplerYcbcrConversionCreateInfo &      createInfo,
                                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                       Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion, Dispatch>>::type
      createSamplerYcbcrConversionKHRUnique( const VULKAN_HPP_NAMESPACE::SamplerYcbcrConversionCreateInfo &      createInfo,
                                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroySamplerYcbcrConversionKHR( VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion      ycbcrConversion,
                                           const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroySamplerYcbcrConversionKHR( VULKAN_HPP_NAMESPACE::SamplerYcbcrConversion ycbcrConversion        VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_bind_memory2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result bindBufferMemory2KHR( uint32_t                                           bindInfoCount,
                                                      const VULKAN_HPP_NAMESPACE::BindBufferMemoryInfo * pBindInfos,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      bindBufferMemory2KHR( ArrayProxy<const VULKAN_HPP_NAMESPACE::BindBufferMemoryInfo> const & bindInfos,
                            Dispatch const & d                                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result bindImageMemory2KHR( uint32_t                                          bindInfoCount,
                                                     const VULKAN_HPP_NAMESPACE::BindImageMemoryInfo * pBindInfos,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      bindImageMemory2KHR( ArrayProxy<const VULKAN_HPP_NAMESPACE::BindImageMemoryInfo> const & bindInfos,
                           Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_image_drm_format_modifier ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getImageDrmFormatModifierPropertiesEXT( VULKAN_HPP_NAMESPACE::Image                                 image,
                                                                        VULKAN_HPP_NAMESPACE::ImageDrmFormatModifierPropertiesEXT * pProperties,
                                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::ImageDrmFormatModifierPropertiesEXT>::type
      getImageDrmFormatModifierPropertiesEXT( VULKAN_HPP_NAMESPACE::Image image, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_validation_cache ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createValidationCacheEXT( const VULKAN_HPP_NAMESPACE::ValidationCacheCreateInfoEXT * pCreateInfo,
                                                          const VULKAN_HPP_NAMESPACE::AllocationCallbacks *          pAllocator,
                                                          VULKAN_HPP_NAMESPACE::ValidationCacheEXT *                 pValidationCache,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::ValidationCacheEXT>::type
      createValidationCacheEXT( const VULKAN_HPP_NAMESPACE::ValidationCacheCreateInfoEXT &          createInfo,
                                Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::ValidationCacheEXT, Dispatch>>::type
      createValidationCacheEXTUnique( const VULKAN_HPP_NAMESPACE::ValidationCacheCreateInfoEXT &          createInfo,
                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyValidationCacheEXT( VULKAN_HPP_NAMESPACE::ValidationCacheEXT          validationCache,
                                    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                    Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyValidationCacheEXT( VULKAN_HPP_NAMESPACE::ValidationCacheEXT validationCache            VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                    Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::ValidationCacheEXT          validationCache,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::ValidationCacheEXT                            validationCache,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result mergeValidationCachesEXT( VULKAN_HPP_NAMESPACE::ValidationCacheEXT         dstCache,
                                                          uint32_t                                         srcCacheCount,
                                                          const VULKAN_HPP_NAMESPACE::ValidationCacheEXT * pSrcCaches,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      mergeValidationCachesEXT( VULKAN_HPP_NAMESPACE::ValidationCacheEXT                           dstCache,
                                ArrayProxy<const VULKAN_HPP_NAMESPACE::ValidationCacheEXT> const & srcCaches,
                                Dispatch const & d                                                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getValidationCacheDataEXT( VULKAN_HPP_NAMESPACE::ValidationCacheEXT validationCache,
                                                           size_t *                                 pDataSize,
                                                           void *                                   pData,
                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Uint8_tAllocator = std::allocator<uint8_t>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<uint8_t, Uint8_tAllocator>>::type
      getValidationCacheDataEXT( VULKAN_HPP_NAMESPACE::ValidationCacheEXT validationCache, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Uint8_tAllocator                                                                 = std::allocator<uint8_t>,
              typename Dispatch                                                                         = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                                                               = Uint8_tAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, uint8_t>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<uint8_t, Uint8_tAllocator>>::type
      getValidationCacheDataEXT( VULKAN_HPP_NAMESPACE::ValidationCacheEXT validationCache,
                                 Uint8_tAllocator &                       uint8_tAllocator,
                                 Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_NV_ray_tracing ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createAccelerationStructureNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureCreateInfoNV * pCreateInfo,
                                                               const VULKAN_HPP_NAMESPACE::AllocationCallbacks *               pAllocator,
                                                               VULKAN_HPP_NAMESPACE::AccelerationStructureNV *                 pAccelerationStructure,
                                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::AccelerationStructureNV>::type
      createAccelerationStructureNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureCreateInfoNV &     createInfo,
                                     Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                     Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::AccelerationStructureNV, Dispatch>>::type
      createAccelerationStructureNVUnique( const VULKAN_HPP_NAMESPACE::AccelerationStructureCreateInfoNV &     createInfo,
                                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                           Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyAccelerationStructureNV( VULKAN_HPP_NAMESPACE::AccelerationStructureNV     accelerationStructure,
                                         const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                         Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyAccelerationStructureNV( VULKAN_HPP_NAMESPACE::AccelerationStructureNV accelerationStructure VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                         Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::AccelerationStructureNV     accelerationStructure,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::AccelerationStructureNV                       accelerationStructure,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getAccelerationStructureMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureMemoryRequirementsInfoNV * pInfo,
                                                       VULKAN_HPP_NAMESPACE::MemoryRequirements2KHR *                              pMemoryRequirements,
                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MemoryRequirements2KHR
                         getAccelerationStructureMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureMemoryRequirementsInfoNV & info,
                                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getAccelerationStructureMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::AccelerationStructureMemoryRequirementsInfoNV & info,
                                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result bindAccelerationStructureMemoryNV( uint32_t                                                            bindInfoCount,
                                                                   const VULKAN_HPP_NAMESPACE::BindAccelerationStructureMemoryInfoNV * pBindInfos,
                                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      bindAccelerationStructureMemoryNV( ArrayProxy<const VULKAN_HPP_NAMESPACE::BindAccelerationStructureMemoryInfoNV> const & bindInfos,
                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createRayTracingPipelinesNV( VULKAN_HPP_NAMESPACE::PipelineCache                          pipelineCache,
                                                             uint32_t                                                     createInfoCount,
                                                             const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV * pCreateInfos,
                                                             const VULKAN_HPP_NAMESPACE::AllocationCallbacks *            pAllocator,
                                                             VULKAN_HPP_NAMESPACE::Pipeline *                             pPipelines,
                                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PipelineAllocator = std::allocator<VULKAN_HPP_NAMESPACE::Pipeline>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<VULKAN_HPP_NAMESPACE::Pipeline, PipelineAllocator>>
                         createRayTracingPipelinesNV( VULKAN_HPP_NAMESPACE::PipelineCache                                            pipelineCache,
                                                      ArrayProxy<const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV> const & createInfos,
                                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PipelineAllocator                                                                 = std::allocator<VULKAN_HPP_NAMESPACE::Pipeline>,
              typename Dispatch                                                                          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B0                                                                                = PipelineAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, Pipeline>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<VULKAN_HPP_NAMESPACE::Pipeline, PipelineAllocator>>
                         createRayTracingPipelinesNV( VULKAN_HPP_NAMESPACE::PipelineCache                                            pipelineCache,
                                                      ArrayProxy<const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV> const & createInfos,
                                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks>                      allocator,
                                                      PipelineAllocator &                                                            pipelineAllocator,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<VULKAN_HPP_NAMESPACE::Pipeline>
                         createRayTracingPipelineNV( VULKAN_HPP_NAMESPACE::PipelineCache                                 pipelineCache,
                                                     const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV &        createInfo,
                                                     Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                     Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename PipelineAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>>>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>, PipelineAllocator>>
                         createRayTracingPipelinesNVUnique( VULKAN_HPP_NAMESPACE::PipelineCache                                            pipelineCache,
                                                            ArrayProxy<const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV> const & createInfos,
                                                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                            Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename PipelineAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>>,
              typename B0                = PipelineAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, UniqueHandle<Pipeline, Dispatch>>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>, PipelineAllocator>>
                         createRayTracingPipelinesNVUnique( VULKAN_HPP_NAMESPACE::PipelineCache                                            pipelineCache,
                                                            ArrayProxy<const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV> const & createInfos,
                                                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks>                      allocator,
                                                            PipelineAllocator &                                                            pipelineAllocator,
                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>>
                         createRayTracingPipelineNVUnique( VULKAN_HPP_NAMESPACE::PipelineCache                                 pipelineCache,
                                                           const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoNV &        createInfo,
                                                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                           Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getRayTracingShaderGroupHandlesNV( VULKAN_HPP_NAMESPACE::Pipeline pipeline,
                                                                   uint32_t                       firstGroup,
                                                                   uint32_t                       groupCount,
                                                                   size_t                         dataSize,
                                                                   void *                         pData,
                                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DataType, typename DataTypeAllocator = std::allocator<DataType>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<DataType, DataTypeAllocator>>::type
      getRayTracingShaderGroupHandlesNV( VULKAN_HPP_NAMESPACE::Pipeline pipeline,
                                         uint32_t                       firstGroup,
                                         uint32_t                       groupCount,
                                         size_t                         dataSize,
                                         Dispatch const & d             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DataType, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<DataType>::type getRayTracingShaderGroupHandleNV(
      VULKAN_HPP_NAMESPACE::Pipeline pipeline, uint32_t firstGroup, uint32_t groupCount, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getAccelerationStructureHandleNV( VULKAN_HPP_NAMESPACE::AccelerationStructureNV accelerationStructure,
                                                                  size_t                                        dataSize,
                                                                  void *                                        pData,
                                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DataType, typename DataTypeAllocator = std::allocator<DataType>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<DataType, DataTypeAllocator>>::type getAccelerationStructureHandleNV(
      VULKAN_HPP_NAMESPACE::AccelerationStructureNV accelerationStructure, size_t dataSize, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DataType, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<DataType>::type
      getAccelerationStructureHandleNV( VULKAN_HPP_NAMESPACE::AccelerationStructureNV accelerationStructure,
                                        Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result compileDeferredNV( VULKAN_HPP_NAMESPACE::Pipeline pipeline,
                                                   uint32_t                       shader,
                                                   Dispatch const & d             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      compileDeferredNV( VULKAN_HPP_NAMESPACE::Pipeline pipeline, uint32_t shader, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_maintenance3 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getDescriptorSetLayoutSupportKHR( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo * pCreateInfo,
                                           VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport *          pSupport,
                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::DescriptorSetLayoutSupport
                         getDescriptorSetLayoutSupportKHR( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo & createInfo,
                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getDescriptorSetLayoutSupportKHR( const VULKAN_HPP_NAMESPACE::DescriptorSetLayoutCreateInfo & createInfo,
                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_external_memory_host ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getMemoryHostPointerPropertiesEXT( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType,
                                                                   const void *                                           pHostPointer,
                                                                   VULKAN_HPP_NAMESPACE::MemoryHostPointerPropertiesEXT * pMemoryHostPointerProperties,
                                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::MemoryHostPointerPropertiesEXT>::type
      getMemoryHostPointerPropertiesEXT( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType,
                                         const void *                                           pHostPointer,
                                         Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_calibrated_timestamps ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getCalibratedTimestampsEXT( uint32_t                                                 timestampCount,
                                                            const VULKAN_HPP_NAMESPACE::CalibratedTimestampInfoEXT * pTimestampInfos,
                                                            uint64_t *                                               pTimestamps,
                                                            uint64_t *                                               pMaxDeviation,
                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Uint64_tAllocator = std::allocator<uint64_t>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::pair<std::vector<uint64_t, Uint64_tAllocator>, uint64_t>>::type
      getCalibratedTimestampsEXT( ArrayProxy<const VULKAN_HPP_NAMESPACE::CalibratedTimestampInfoEXT> const & timestampInfos,
                                  Dispatch const & d                                                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Uint64_tAllocator                                                                 = std::allocator<uint64_t>,
              typename Dispatch                                                                          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B0                                                                                = Uint64_tAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, uint64_t>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::pair<std::vector<uint64_t, Uint64_tAllocator>, uint64_t>>::type
      getCalibratedTimestampsEXT( ArrayProxy<const VULKAN_HPP_NAMESPACE::CalibratedTimestampInfoEXT> const & timestampInfos,
                                  Uint64_tAllocator &                                                        uint64_tAllocator,
                                  Dispatch const & d                                                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::pair<uint64_t, uint64_t>>::type
      getCalibratedTimestampEXT( const VULKAN_HPP_NAMESPACE::CalibratedTimestampInfoEXT & timestampInfo,
                                 Dispatch const & d                                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_timeline_semaphore ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSemaphoreCounterValueKHR( VULKAN_HPP_NAMESPACE::Semaphore semaphore,
                                                             uint64_t *                      pValue,
                                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<uint64_t>::type
      getSemaphoreCounterValueKHR( VULKAN_HPP_NAMESPACE::Semaphore semaphore, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result waitSemaphoresKHR( const VULKAN_HPP_NAMESPACE::SemaphoreWaitInfo * pWaitInfo,
                                                   uint64_t                                        timeout,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result waitSemaphoresKHR( const VULKAN_HPP_NAMESPACE::SemaphoreWaitInfo & waitInfo,
                                                                         uint64_t                                        timeout,
                                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result signalSemaphoreKHR( const VULKAN_HPP_NAMESPACE::SemaphoreSignalInfo * pSignalInfo,
                                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      signalSemaphoreKHR( const VULKAN_HPP_NAMESPACE::SemaphoreSignalInfo & signalInfo, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_INTEL_performance_query ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result initializePerformanceApiINTEL( const VULKAN_HPP_NAMESPACE::InitializePerformanceApiInfoINTEL * pInitializeInfo,
                                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      initializePerformanceApiINTEL( const VULKAN_HPP_NAMESPACE::InitializePerformanceApiInfoINTEL & initializeInfo,
                                     Dispatch const & d                                              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void uninitializePerformanceApiINTEL( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result acquirePerformanceConfigurationINTEL( const VULKAN_HPP_NAMESPACE::PerformanceConfigurationAcquireInfoINTEL * pAcquireInfo,
                                                                      VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL *                  pConfiguration,
                                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL>::type
      acquirePerformanceConfigurationINTEL( const VULKAN_HPP_NAMESPACE::PerformanceConfigurationAcquireInfoINTEL & acquireInfo,
                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL, Dispatch>>::type
      acquirePerformanceConfigurationINTELUnique( const VULKAN_HPP_NAMESPACE::PerformanceConfigurationAcquireInfoINTEL & acquireInfo,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result releasePerformanceConfigurationINTEL( VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL configuration,
                                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      releasePerformanceConfigurationINTEL( VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL configuration VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                            Dispatch const & d                                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result release( VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL configuration,
                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type release( VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL configuration,
                                                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getPerformanceParameterINTEL( VULKAN_HPP_NAMESPACE::PerformanceParameterTypeINTEL parameter,
                                                              VULKAN_HPP_NAMESPACE::PerformanceValueINTEL *       pValue,
                                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::PerformanceValueINTEL>::type
      getPerformanceParameterINTEL( VULKAN_HPP_NAMESPACE::PerformanceParameterTypeINTEL parameter,
                                    Dispatch const & d                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_AMD_display_native_hdr ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setLocalDimmingAMD( VULKAN_HPP_NAMESPACE::SwapchainKHR swapChain,
                             VULKAN_HPP_NAMESPACE::Bool32       localDimmingEnable,
                             Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_EXT_buffer_device_address ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    DeviceAddress getBufferAddressEXT( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo * pInfo,
                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NAMESPACE::DeviceAddress getBufferAddressEXT( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info,
                                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_present_wait ===

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result waitForPresentKHR( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain,
                                                   uint64_t                           presentId,
                                                   uint64_t                           timeout,
                                                   Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result waitForPresentKHR( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain,
                                                                         uint64_t                           presentId,
                                                                         uint64_t                           timeout,
                                                                         Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
    //=== VK_EXT_full_screen_exclusive ===

#  ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result acquireFullScreenExclusiveModeEXT( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain,
                                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      acquireFullScreenExclusiveModeEXT( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#  ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result releaseFullScreenExclusiveModeEXT( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain,
                                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      releaseFullScreenExclusiveModeEXT( VULKAN_HPP_NAMESPACE::SwapchainKHR swapchain, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getGroupSurfacePresentModes2EXT( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo,
                                                                 VULKAN_HPP_NAMESPACE::DeviceGroupPresentModeFlagsKHR *      pModes,
                                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DeviceGroupPresentModeFlagsKHR>::type
      getGroupSurfacePresentModes2EXT( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo,
                                       Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_WIN32_KHR*/

    //=== VK_KHR_buffer_device_address ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    DeviceAddress getBufferAddressKHR( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo * pInfo,
                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NAMESPACE::DeviceAddress getBufferAddressKHR( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info,
                                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    uint64_t getBufferOpaqueCaptureAddressKHR( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo * pInfo,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    uint64_t getBufferOpaqueCaptureAddressKHR( const VULKAN_HPP_NAMESPACE::BufferDeviceAddressInfo & info,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    uint64_t getMemoryOpaqueCaptureAddressKHR( const VULKAN_HPP_NAMESPACE::DeviceMemoryOpaqueCaptureAddressInfo * pInfo,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    uint64_t getMemoryOpaqueCaptureAddressKHR( const VULKAN_HPP_NAMESPACE::DeviceMemoryOpaqueCaptureAddressInfo & info,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_host_query_reset ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void resetQueryPoolEXT( VULKAN_HPP_NAMESPACE::QueryPool queryPool,
                            uint32_t                        firstQuery,
                            uint32_t                        queryCount,
                            Dispatch const & d              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_KHR_deferred_host_operations ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createDeferredOperationKHR( const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                                            VULKAN_HPP_NAMESPACE::DeferredOperationKHR *      pDeferredOperation,
                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DeferredOperationKHR>::type
      createDeferredOperationKHR( Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::DeferredOperationKHR, Dispatch>>::type
      createDeferredOperationKHRUnique( Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                        Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDeferredOperationKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR        operation,
                                      const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                      Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDeferredOperationKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR operation                VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::DeferredOperationKHR        operation,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                          operation,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    uint32_t getDeferredOperationMaxConcurrencyKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR operation,
                                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getDeferredOperationResultKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR operation,
                                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result
                         getDeferredOperationResultKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR operation,
                                                        Dispatch const & d                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result deferredOperationJoinKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR operation,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::Result deferredOperationJoinKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR operation,
                                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_pipeline_executable_properties ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getPipelineExecutablePropertiesKHR( const VULKAN_HPP_NAMESPACE::PipelineInfoKHR *           pPipelineInfo,
                                                                    uint32_t *                                              pExecutableCount,
                                                                    VULKAN_HPP_NAMESPACE::PipelineExecutablePropertiesKHR * pProperties,
                                                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PipelineExecutablePropertiesKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PipelineExecutablePropertiesKHR>,
              typename Dispatch                                 = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutablePropertiesKHR, PipelineExecutablePropertiesKHRAllocator>>::type
      getPipelineExecutablePropertiesKHR( const VULKAN_HPP_NAMESPACE::PipelineInfoKHR & pipelineInfo,
                                          Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PipelineExecutablePropertiesKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PipelineExecutablePropertiesKHR>,
              typename Dispatch                                 = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                       = PipelineExecutablePropertiesKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PipelineExecutablePropertiesKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutablePropertiesKHR, PipelineExecutablePropertiesKHRAllocator>>::type
      getPipelineExecutablePropertiesKHR( const VULKAN_HPP_NAMESPACE::PipelineInfoKHR & pipelineInfo,
                                          PipelineExecutablePropertiesKHRAllocator &    pipelineExecutablePropertiesKHRAllocator,
                                          Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getPipelineExecutableStatisticsKHR( const VULKAN_HPP_NAMESPACE::PipelineExecutableInfoKHR * pExecutableInfo,
                                                                    uint32_t *                                              pStatisticCount,
                                                                    VULKAN_HPP_NAMESPACE::PipelineExecutableStatisticKHR *  pStatistics,
                                                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PipelineExecutableStatisticKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PipelineExecutableStatisticKHR>,
              typename Dispatch                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutableStatisticKHR, PipelineExecutableStatisticKHRAllocator>>::type
      getPipelineExecutableStatisticsKHR( const VULKAN_HPP_NAMESPACE::PipelineExecutableInfoKHR & executableInfo,
                                          Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PipelineExecutableStatisticKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PipelineExecutableStatisticKHR>,
              typename Dispatch                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                      = PipelineExecutableStatisticKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PipelineExecutableStatisticKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutableStatisticKHR, PipelineExecutableStatisticKHRAllocator>>::type
      getPipelineExecutableStatisticsKHR( const VULKAN_HPP_NAMESPACE::PipelineExecutableInfoKHR & executableInfo,
                                          PipelineExecutableStatisticKHRAllocator &               pipelineExecutableStatisticKHRAllocator,
                                          Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result
      getPipelineExecutableInternalRepresentationsKHR( const VULKAN_HPP_NAMESPACE::PipelineExecutableInfoKHR *             pExecutableInfo,
                                                       uint32_t *                                                          pInternalRepresentationCount,
                                                       VULKAN_HPP_NAMESPACE::PipelineExecutableInternalRepresentationKHR * pInternalRepresentations,
                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PipelineExecutableInternalRepresentationKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PipelineExecutableInternalRepresentationKHR>,
              typename Dispatch                                             = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<
      std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutableInternalRepresentationKHR, PipelineExecutableInternalRepresentationKHRAllocator>>::type
      getPipelineExecutableInternalRepresentationsKHR( const VULKAN_HPP_NAMESPACE::PipelineExecutableInfoKHR & executableInfo,
                                                       Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PipelineExecutableInternalRepresentationKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PipelineExecutableInternalRepresentationKHR>,
              typename Dispatch                                             = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                                   = PipelineExecutableInternalRepresentationKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PipelineExecutableInternalRepresentationKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<
      std::vector<VULKAN_HPP_NAMESPACE::PipelineExecutableInternalRepresentationKHR, PipelineExecutableInternalRepresentationKHRAllocator>>::type
      getPipelineExecutableInternalRepresentationsKHR(
        const VULKAN_HPP_NAMESPACE::PipelineExecutableInfoKHR & executableInfo,
        PipelineExecutableInternalRepresentationKHRAllocator &  pipelineExecutableInternalRepresentationKHRAllocator,
        Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_NV_device_generated_commands ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getGeneratedCommandsMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::GeneratedCommandsMemoryRequirementsInfoNV * pInfo,
                                                   VULKAN_HPP_NAMESPACE::MemoryRequirements2 *                             pMemoryRequirements,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MemoryRequirements2
                         getGeneratedCommandsMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::GeneratedCommandsMemoryRequirementsInfoNV & info,
                                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getGeneratedCommandsMemoryRequirementsNV( const VULKAN_HPP_NAMESPACE::GeneratedCommandsMemoryRequirementsInfoNV & info,
                                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createIndirectCommandsLayoutNV( const VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutCreateInfoNV * pCreateInfo,
                                                                const VULKAN_HPP_NAMESPACE::AllocationCallbacks *                pAllocator,
                                                                VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutNV *                 pIndirectCommandsLayout,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutNV>::type
      createIndirectCommandsLayoutNV( const VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutCreateInfoNV &    createInfo,
                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutNV, Dispatch>>::type
      createIndirectCommandsLayoutNVUnique( const VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutCreateInfoNV &    createInfo,
                                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyIndirectCommandsLayoutNV( VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutNV    indirectCommandsLayout,
                                          const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyIndirectCommandsLayoutNV( VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutNV indirectCommandsLayout VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator   VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutNV    indirectCommandsLayout,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::IndirectCommandsLayoutNV                      indirectCommandsLayout,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_private_data ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createPrivateDataSlotEXT( const VULKAN_HPP_NAMESPACE::PrivateDataSlotCreateInfo * pCreateInfo,
                                                          const VULKAN_HPP_NAMESPACE::AllocationCallbacks *       pAllocator,
                                                          VULKAN_HPP_NAMESPACE::PrivateDataSlot *                 pPrivateDataSlot,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::PrivateDataSlot>::type
      createPrivateDataSlotEXT( const VULKAN_HPP_NAMESPACE::PrivateDataSlotCreateInfo &             createInfo,
                                Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::PrivateDataSlot, Dispatch>>::type
      createPrivateDataSlotEXTUnique( const VULKAN_HPP_NAMESPACE::PrivateDataSlotCreateInfo &             createInfo,
                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyPrivateDataSlotEXT( VULKAN_HPP_NAMESPACE::PrivateDataSlot             privateDataSlot,
                                    const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                    Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyPrivateDataSlotEXT( VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot               VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                    Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result setPrivateDataEXT( VULKAN_HPP_NAMESPACE::ObjectType      objectType,
                                                   uint64_t                              objectHandle,
                                                   VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot,
                                                   uint64_t                              data,
                                                   Dispatch const & d                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    typename ResultValueType<void>::type setPrivateDataEXT( VULKAN_HPP_NAMESPACE::ObjectType      objectType,
                                                            uint64_t                              objectHandle,
                                                            VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot,
                                                            uint64_t                              data,
                                                            Dispatch const & d                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getPrivateDataEXT( VULKAN_HPP_NAMESPACE::ObjectType      objectType,
                            uint64_t                              objectHandle,
                            VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot,
                            uint64_t *                            pData,
                            Dispatch const & d                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD uint64_t getPrivateDataEXT( VULKAN_HPP_NAMESPACE::ObjectType      objectType,
                                                     uint64_t                              objectHandle,
                                                     VULKAN_HPP_NAMESPACE::PrivateDataSlot privateDataSlot,
                                                     Dispatch const & d                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_METAL_EXT )
    //=== VK_EXT_metal_objects ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void exportMetalObjectsEXT( VULKAN_HPP_NAMESPACE::ExportMetalObjectsInfoEXT * pMetalObjectsInfo,
                                Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::ExportMetalObjectsInfoEXT
                         exportMetalObjectsEXT( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         exportMetalObjectsEXT( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_METAL_EXT*/

    //=== VK_EXT_image_compression_control ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getImageSubresourceLayout2EXT( VULKAN_HPP_NAMESPACE::Image                        image,
                                        const VULKAN_HPP_NAMESPACE::ImageSubresource2EXT * pSubresource,
                                        VULKAN_HPP_NAMESPACE::SubresourceLayout2EXT *      pLayout,
                                        Dispatch const & d                                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::SubresourceLayout2EXT
                         getImageSubresourceLayout2EXT( VULKAN_HPP_NAMESPACE::Image                        image,
                                                        const VULKAN_HPP_NAMESPACE::ImageSubresource2EXT & subresource,
                                                        Dispatch const & d                                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getImageSubresourceLayout2EXT( VULKAN_HPP_NAMESPACE::Image                        image,
                                                        const VULKAN_HPP_NAMESPACE::ImageSubresource2EXT & subresource,
                                                        Dispatch const & d                                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_ray_tracing_pipeline ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createRayTracingPipelinesKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                    deferredOperation,
                                                              VULKAN_HPP_NAMESPACE::PipelineCache                           pipelineCache,
                                                              uint32_t                                                      createInfoCount,
                                                              const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR * pCreateInfos,
                                                              const VULKAN_HPP_NAMESPACE::AllocationCallbacks *             pAllocator,
                                                              VULKAN_HPP_NAMESPACE::Pipeline *                              pPipelines,
                                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PipelineAllocator = std::allocator<VULKAN_HPP_NAMESPACE::Pipeline>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<VULKAN_HPP_NAMESPACE::Pipeline, PipelineAllocator>>
                         createRayTracingPipelinesKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                                      deferredOperation,
                                                       VULKAN_HPP_NAMESPACE::PipelineCache                                             pipelineCache,
                                                       ArrayProxy<const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR> const & createInfos,
                                                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                       Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PipelineAllocator                                                                 = std::allocator<VULKAN_HPP_NAMESPACE::Pipeline>,
              typename Dispatch                                                                          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B0                                                                                = PipelineAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, Pipeline>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<VULKAN_HPP_NAMESPACE::Pipeline, PipelineAllocator>>
                         createRayTracingPipelinesKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                                      deferredOperation,
                                                       VULKAN_HPP_NAMESPACE::PipelineCache                                             pipelineCache,
                                                       ArrayProxy<const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR> const & createInfos,
                                                       Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks>                       allocator,
                                                       PipelineAllocator &                                                             pipelineAllocator,
                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<VULKAN_HPP_NAMESPACE::Pipeline>
                         createRayTracingPipelineKHR( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                          deferredOperation,
                                                      VULKAN_HPP_NAMESPACE::PipelineCache                                 pipelineCache,
                                                      const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR &       createInfo,
                                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename PipelineAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>>>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>, PipelineAllocator>>
                         createRayTracingPipelinesKHRUnique( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                                      deferredOperation,
                                                             VULKAN_HPP_NAMESPACE::PipelineCache                                             pipelineCache,
                                                             ArrayProxy<const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR> const & createInfos,
                                                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                             Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename PipelineAllocator = std::allocator<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>>,
              typename B0                = PipelineAllocator,
              typename std::enable_if<std::is_same<typename B0::value_type, UniqueHandle<Pipeline, Dispatch>>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD ResultValue<std::vector<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>, PipelineAllocator>>
                         createRayTracingPipelinesKHRUnique( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                                      deferredOperation,
                                                             VULKAN_HPP_NAMESPACE::PipelineCache                                             pipelineCache,
                                                             ArrayProxy<const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR> const & createInfos,
                                                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks>                       allocator,
                                                             PipelineAllocator &                                                             pipelineAllocator,
                                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<UniqueHandle<VULKAN_HPP_NAMESPACE::Pipeline, Dispatch>>
                         createRayTracingPipelineKHRUnique( VULKAN_HPP_NAMESPACE::DeferredOperationKHR                          deferredOperation,
                                                            VULKAN_HPP_NAMESPACE::PipelineCache                                 pipelineCache,
                                                            const VULKAN_HPP_NAMESPACE::RayTracingPipelineCreateInfoKHR &       createInfo,
                                                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                                            Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getRayTracingShaderGroupHandlesKHR( VULKAN_HPP_NAMESPACE::Pipeline pipeline,
                                                                    uint32_t                       firstGroup,
                                                                    uint32_t                       groupCount,
                                                                    size_t                         dataSize,
                                                                    void *                         pData,
                                                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DataType, typename DataTypeAllocator = std::allocator<DataType>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<DataType, DataTypeAllocator>>::type
      getRayTracingShaderGroupHandlesKHR( VULKAN_HPP_NAMESPACE::Pipeline pipeline,
                                          uint32_t                       firstGroup,
                                          uint32_t                       groupCount,
                                          size_t                         dataSize,
                                          Dispatch const & d             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DataType, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<DataType>::type getRayTracingShaderGroupHandleKHR(
      VULKAN_HPP_NAMESPACE::Pipeline pipeline, uint32_t firstGroup, uint32_t groupCount, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result
      getRayTracingCaptureReplayShaderGroupHandlesKHR( VULKAN_HPP_NAMESPACE::Pipeline pipeline,
                                                       uint32_t                       firstGroup,
                                                       uint32_t                       groupCount,
                                                       size_t                         dataSize,
                                                       void *                         pData,
                                                       Dispatch const & d             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DataType, typename DataTypeAllocator = std::allocator<DataType>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<DataType, DataTypeAllocator>>::type
      getRayTracingCaptureReplayShaderGroupHandlesKHR( VULKAN_HPP_NAMESPACE::Pipeline pipeline,
                                                       uint32_t                       firstGroup,
                                                       uint32_t                       groupCount,
                                                       size_t                         dataSize,
                                                       Dispatch const & d             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DataType, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<DataType>::type getRayTracingCaptureReplayShaderGroupHandleKHR(
      VULKAN_HPP_NAMESPACE::Pipeline pipeline, uint32_t firstGroup, uint32_t groupCount, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    DeviceSize getRayTracingShaderGroupStackSizeKHR( VULKAN_HPP_NAMESPACE::Pipeline             pipeline,
                                                     uint32_t                                   group,
                                                     VULKAN_HPP_NAMESPACE::ShaderGroupShaderKHR groupShader,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

#if defined( VK_USE_PLATFORM_FUCHSIA )
    //=== VK_FUCHSIA_external_memory ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getMemoryZirconHandleFUCHSIA( const VULKAN_HPP_NAMESPACE::MemoryGetZirconHandleInfoFUCHSIA * pGetZirconHandleInfo,
                                                              zx_handle_t *                                                  pZirconHandle,
                                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<zx_handle_t>::type
      getMemoryZirconHandleFUCHSIA( const VULKAN_HPP_NAMESPACE::MemoryGetZirconHandleInfoFUCHSIA & getZirconHandleInfo,
                                    Dispatch const & d                                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result
      getMemoryZirconHandlePropertiesFUCHSIA( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits      handleType,
                                              zx_handle_t                                                 zirconHandle,
                                              VULKAN_HPP_NAMESPACE::MemoryZirconHandlePropertiesFUCHSIA * pMemoryZirconHandleProperties,
                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::MemoryZirconHandlePropertiesFUCHSIA>::type
      getMemoryZirconHandlePropertiesFUCHSIA( VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagBits handleType,
                                              zx_handle_t                                            zirconHandle,
                                              Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
    //=== VK_FUCHSIA_external_semaphore ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result
      importSemaphoreZirconHandleFUCHSIA( const VULKAN_HPP_NAMESPACE::ImportSemaphoreZirconHandleInfoFUCHSIA * pImportSemaphoreZirconHandleInfo,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      importSemaphoreZirconHandleFUCHSIA( const VULKAN_HPP_NAMESPACE::ImportSemaphoreZirconHandleInfoFUCHSIA & importSemaphoreZirconHandleInfo,
                                          Dispatch const & d                                                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSemaphoreZirconHandleFUCHSIA( const VULKAN_HPP_NAMESPACE::SemaphoreGetZirconHandleInfoFUCHSIA * pGetZirconHandleInfo,
                                                                 zx_handle_t *                                                     pZirconHandle,
                                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<zx_handle_t>::type
      getSemaphoreZirconHandleFUCHSIA( const VULKAN_HPP_NAMESPACE::SemaphoreGetZirconHandleInfoFUCHSIA & getZirconHandleInfo,
                                       Dispatch const & d                                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
    //=== VK_FUCHSIA_buffer_collection ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createBufferCollectionFUCHSIA( const VULKAN_HPP_NAMESPACE::BufferCollectionCreateInfoFUCHSIA * pCreateInfo,
                                                               const VULKAN_HPP_NAMESPACE::AllocationCallbacks *               pAllocator,
                                                               VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA *                 pCollection,
                                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA>::type
      createBufferCollectionFUCHSIA( const VULKAN_HPP_NAMESPACE::BufferCollectionCreateInfoFUCHSIA &     createInfo,
                                     Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                     Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA, Dispatch>>::type
      createBufferCollectionFUCHSIAUnique( const VULKAN_HPP_NAMESPACE::BufferCollectionCreateInfoFUCHSIA &     createInfo,
                                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                           Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result
      setBufferCollectionImageConstraintsFUCHSIA( VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA             collection,
                                                  const VULKAN_HPP_NAMESPACE::ImageConstraintsInfoFUCHSIA * pImageConstraintsInfo,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      setBufferCollectionImageConstraintsFUCHSIA( VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA             collection,
                                                  const VULKAN_HPP_NAMESPACE::ImageConstraintsInfoFUCHSIA & imageConstraintsInfo,
                                                  Dispatch const & d                                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result
      setBufferCollectionBufferConstraintsFUCHSIA( VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA              collection,
                                                   const VULKAN_HPP_NAMESPACE::BufferConstraintsInfoFUCHSIA * pBufferConstraintsInfo,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      setBufferCollectionBufferConstraintsFUCHSIA( VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA              collection,
                                                   const VULKAN_HPP_NAMESPACE::BufferConstraintsInfoFUCHSIA & bufferConstraintsInfo,
                                                   Dispatch const & d                                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyBufferCollectionFUCHSIA( VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA     collection,
                                         const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                         Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyBufferCollectionFUCHSIA( VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA                       collection,
                                         Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA     collection,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA                       collection,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getBufferCollectionPropertiesFUCHSIA( VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA             collection,
                                                                      VULKAN_HPP_NAMESPACE::BufferCollectionPropertiesFUCHSIA * pProperties,
                                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::BufferCollectionPropertiesFUCHSIA>::type
      getBufferCollectionPropertiesFUCHSIA( VULKAN_HPP_NAMESPACE::BufferCollectionFUCHSIA collection,
                                            Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_FUCHSIA*/

    //=== VK_HUAWEI_subpass_shading ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result
      getSubpassShadingMaxWorkgroupSizeHUAWEI( VULKAN_HPP_NAMESPACE::RenderPass renderpass,
                                               VULKAN_HPP_NAMESPACE::Extent2D * pMaxWorkgroupSize,
                                               Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD ResultValue<VULKAN_HPP_NAMESPACE::Extent2D>
      getSubpassShadingMaxWorkgroupSizeHUAWEI( VULKAN_HPP_NAMESPACE::RenderPass renderpass, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_NV_external_memory_rdma ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getMemoryRemoteAddressNV( const VULKAN_HPP_NAMESPACE::MemoryGetRemoteAddressInfoNV * pMemoryGetRemoteAddressInfo,
                                                          VULKAN_HPP_NAMESPACE::RemoteAddressNV *                    pAddress,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::RemoteAddressNV>::type
      getMemoryRemoteAddressNV( const VULKAN_HPP_NAMESPACE::MemoryGetRemoteAddressInfoNV & memoryGetRemoteAddressInfo,
                                Dispatch const & d                                         VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_pipeline_properties ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getPipelinePropertiesEXT( const VULKAN_HPP_NAMESPACE::PipelineInfoEXT * pPipelineInfo,
                                                          VULKAN_HPP_NAMESPACE::BaseOutStructure *      pPipelineProperties,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::BaseOutStructure>::type
      getPipelinePropertiesEXT( const VULKAN_HPP_NAMESPACE::PipelineInfoEXT & pipelineInfo, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_pageable_device_local_memory ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void setMemoryPriorityEXT( VULKAN_HPP_NAMESPACE::DeviceMemory memory,
                               float                              priority,
                               Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;

    //=== VK_KHR_maintenance4 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getBufferMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements * pInfo,
                                         VULKAN_HPP_NAMESPACE::MemoryRequirements2 *                  pMemoryRequirements,
                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MemoryRequirements2
                         getBufferMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements & info,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getBufferMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceBufferMemoryRequirements & info,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getImageMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements * pInfo,
                                        VULKAN_HPP_NAMESPACE::MemoryRequirements2 *                 pMemoryRequirements,
                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MemoryRequirements2
                         getImageMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getImageMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getImageSparseMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements * pInfo,
                                              uint32_t *                                                  pSparseMemoryRequirementCount,
                                              VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2 *      pSparseMemoryRequirements,
                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename SparseImageMemoryRequirements2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2>,
              typename Dispatch                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2, SparseImageMemoryRequirements2Allocator>
                         getImageSparseMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info,
                                                              Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename SparseImageMemoryRequirements2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2>,
              typename Dispatch                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                      = SparseImageMemoryRequirements2Allocator,
              typename std::enable_if<std::is_same<typename B1::value_type, SparseImageMemoryRequirements2>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageMemoryRequirements2, SparseImageMemoryRequirements2Allocator>
                         getImageSparseMemoryRequirementsKHR( const VULKAN_HPP_NAMESPACE::DeviceImageMemoryRequirements & info,
                                                              SparseImageMemoryRequirements2Allocator &                   sparseImageMemoryRequirements2Allocator,
                                                              Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_VALVE_descriptor_set_host_mapping ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getDescriptorSetLayoutHostMappingInfoVALVE( const VULKAN_HPP_NAMESPACE::DescriptorSetBindingReferenceVALVE * pBindingReference,
                                                     VULKAN_HPP_NAMESPACE::DescriptorSetLayoutHostMappingInfoVALVE *  pHostMapping,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::DescriptorSetLayoutHostMappingInfoVALVE
                         getDescriptorSetLayoutHostMappingInfoVALVE( const VULKAN_HPP_NAMESPACE::DescriptorSetBindingReferenceVALVE & bindingReference,
                                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getDescriptorSetHostMappingVALVE( VULKAN_HPP_NAMESPACE::DescriptorSet descriptorSet,
                                           void **                             ppData,
                                           Dispatch const & d                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD void * getDescriptorSetHostMappingVALVE( VULKAN_HPP_NAMESPACE::DescriptorSet descriptorSet,
                                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_shader_module_identifier ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getShaderModuleIdentifierEXT( VULKAN_HPP_NAMESPACE::ShaderModule                shaderModule,
                                       VULKAN_HPP_NAMESPACE::ShaderModuleIdentifierEXT * pIdentifier,
                                       Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::ShaderModuleIdentifierEXT
                         getShaderModuleIdentifierEXT( VULKAN_HPP_NAMESPACE::ShaderModule shaderModule,
                                                       Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getShaderModuleCreateInfoIdentifierEXT( const VULKAN_HPP_NAMESPACE::ShaderModuleCreateInfo * pCreateInfo,
                                                 VULKAN_HPP_NAMESPACE::ShaderModuleIdentifierEXT *    pIdentifier,
                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::ShaderModuleIdentifierEXT
                         getShaderModuleCreateInfoIdentifierEXT( const VULKAN_HPP_NAMESPACE::ShaderModuleCreateInfo & createInfo,
                                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_QCOM_tile_properties ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getFramebufferTilePropertiesQCOM( VULKAN_HPP_NAMESPACE::Framebuffer          framebuffer,
                                                                  uint32_t *                                 pPropertiesCount,
                                                                  VULKAN_HPP_NAMESPACE::TilePropertiesQCOM * pProperties,
                                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename TilePropertiesQCOMAllocator = std::allocator<VULKAN_HPP_NAMESPACE::TilePropertiesQCOM>,
              typename Dispatch                    = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::TilePropertiesQCOM, TilePropertiesQCOMAllocator>>::type
      getFramebufferTilePropertiesQCOM( VULKAN_HPP_NAMESPACE::Framebuffer framebuffer, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename TilePropertiesQCOMAllocator = std::allocator<VULKAN_HPP_NAMESPACE::TilePropertiesQCOM>,
              typename Dispatch                    = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                          = TilePropertiesQCOMAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, TilePropertiesQCOM>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::TilePropertiesQCOM, TilePropertiesQCOMAllocator>>::type
      getFramebufferTilePropertiesQCOM( VULKAN_HPP_NAMESPACE::Framebuffer framebuffer,
                                        TilePropertiesQCOMAllocator &     tilePropertiesQCOMAllocator,
                                        Dispatch const & d                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    Result getDynamicRenderingTilePropertiesQCOM( const VULKAN_HPP_NAMESPACE::RenderingInfo * pRenderingInfo,
                                                  VULKAN_HPP_NAMESPACE::TilePropertiesQCOM *  pProperties,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::TilePropertiesQCOM
                         getDynamicRenderingTilePropertiesQCOM( const VULKAN_HPP_NAMESPACE::RenderingInfo & renderingInfo,
                                                                Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    operator VkDevice() const VULKAN_HPP_NOEXCEPT
    {
      return m_device;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_device != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_device == VK_NULL_HANDLE;
    }

  private:
    VkDevice m_device = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eDevice>
  {
    using Type = VULKAN_HPP_NAMESPACE::Device;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDevice>
  {
    using Type = VULKAN_HPP_NAMESPACE::Device;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::Device>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  class DisplayModeKHR
  {
  public:
    using CType      = VkDisplayModeKHR;
    using NativeType = VkDisplayModeKHR;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eDisplayModeKHR;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDisplayModeKHR;

  public:
    VULKAN_HPP_CONSTEXPR         DisplayModeKHR() = default;
    VULKAN_HPP_CONSTEXPR         DisplayModeKHR( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    VULKAN_HPP_TYPESAFE_EXPLICIT DisplayModeKHR( VkDisplayModeKHR displayModeKHR ) VULKAN_HPP_NOEXCEPT : m_displayModeKHR( displayModeKHR ) {}

#if defined( VULKAN_HPP_TYPESAFE_CONVERSION )
    DisplayModeKHR & operator=( VkDisplayModeKHR displayModeKHR ) VULKAN_HPP_NOEXCEPT
    {
      m_displayModeKHR = displayModeKHR;
      return *this;
    }
#endif

    DisplayModeKHR & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_displayModeKHR = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( DisplayModeKHR const & ) const = default;
#else
    bool                                 operator==( DisplayModeKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_displayModeKHR == rhs.m_displayModeKHR;
    }

    bool operator!=( DisplayModeKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_displayModeKHR != rhs.m_displayModeKHR;
    }

    bool operator<( DisplayModeKHR const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_displayModeKHR < rhs.m_displayModeKHR;
    }
#endif

    VULKAN_HPP_TYPESAFE_EXPLICIT operator VkDisplayModeKHR() const VULKAN_HPP_NOEXCEPT
    {
      return m_displayModeKHR;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_displayModeKHR != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_displayModeKHR == VK_NULL_HANDLE;
    }

  private:
    VkDisplayModeKHR m_displayModeKHR = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eDisplayModeKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::DisplayModeKHR;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eDisplayModeKHR>
  {
    using Type = VULKAN_HPP_NAMESPACE::DisplayModeKHR;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::DisplayModeKHR>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

#ifndef VULKAN_HPP_NO_SMART_HANDLE
  template <typename Dispatch>
  class UniqueHandleTraits<Device, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<NoParent, Dispatch>;
  };
  using UniqueDevice = UniqueHandle<Device, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
#endif /*VULKAN_HPP_NO_SMART_HANDLE*/

  class PhysicalDevice
  {
  public:
    using CType      = VkPhysicalDevice;
    using NativeType = VkPhysicalDevice;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::ePhysicalDevice;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::ePhysicalDevice;

  public:
    VULKAN_HPP_CONSTEXPR PhysicalDevice() = default;
    VULKAN_HPP_CONSTEXPR PhysicalDevice( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    PhysicalDevice( VkPhysicalDevice physicalDevice ) VULKAN_HPP_NOEXCEPT : m_physicalDevice( physicalDevice ) {}

    PhysicalDevice & operator=( VkPhysicalDevice physicalDevice ) VULKAN_HPP_NOEXCEPT
    {
      m_physicalDevice = physicalDevice;
      return *this;
    }

    PhysicalDevice & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_physicalDevice = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( PhysicalDevice const & ) const = default;
#else
    bool operator==( PhysicalDevice const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_physicalDevice == rhs.m_physicalDevice;
    }

    bool operator!=( PhysicalDevice const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_physicalDevice != rhs.m_physicalDevice;
    }

    bool operator<( PhysicalDevice const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_physicalDevice < rhs.m_physicalDevice;
    }
#endif

    //=== VK_VERSION_1_0 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getFeatures( VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures * pFeatures,
                      Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures
                         getFeatures( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getFormatProperties( VULKAN_HPP_NAMESPACE::Format             format,
                              VULKAN_HPP_NAMESPACE::FormatProperties * pFormatProperties,
                              Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::FormatProperties
      getFormatProperties( VULKAN_HPP_NAMESPACE::Format format, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getImageFormatProperties( VULKAN_HPP_NAMESPACE::Format                  format,
                                                          VULKAN_HPP_NAMESPACE::ImageType               type,
                                                          VULKAN_HPP_NAMESPACE::ImageTiling             tiling,
                                                          VULKAN_HPP_NAMESPACE::ImageUsageFlags         usage,
                                                          VULKAN_HPP_NAMESPACE::ImageCreateFlags        flags,
                                                          VULKAN_HPP_NAMESPACE::ImageFormatProperties * pImageFormatProperties,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::ImageFormatProperties>::type
      getImageFormatProperties( VULKAN_HPP_NAMESPACE::Format                 format,
                                VULKAN_HPP_NAMESPACE::ImageType              type,
                                VULKAN_HPP_NAMESPACE::ImageTiling            tiling,
                                VULKAN_HPP_NAMESPACE::ImageUsageFlags        usage,
                                VULKAN_HPP_NAMESPACE::ImageCreateFlags flags VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                Dispatch const & d                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getProperties( VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties * pProperties,
                        Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties
                         getProperties( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getQueueFamilyProperties( uint32_t *                                    pQueueFamilyPropertyCount,
                                   VULKAN_HPP_NAMESPACE::QueueFamilyProperties * pQueueFamilyProperties,
                                   Dispatch const & d                            VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename QueueFamilyPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::QueueFamilyProperties>,
              typename Dispatch                       = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties, QueueFamilyPropertiesAllocator>
                         getQueueFamilyProperties( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename QueueFamilyPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::QueueFamilyProperties>,
              typename Dispatch                       = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                             = QueueFamilyPropertiesAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, QueueFamilyProperties>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties, QueueFamilyPropertiesAllocator>
                         getQueueFamilyProperties( QueueFamilyPropertiesAllocator & queueFamilyPropertiesAllocator,
                                                   Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getMemoryProperties( VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties * pMemoryProperties,
                              Dispatch const & d                                     VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties
                         getMemoryProperties( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createDevice( const VULKAN_HPP_NAMESPACE::DeviceCreateInfo *    pCreateInfo,
                                              const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                              VULKAN_HPP_NAMESPACE::Device *                    pDevice,
                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::Device>::type
      createDevice( const VULKAN_HPP_NAMESPACE::DeviceCreateInfo &                      createInfo,
                    Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                    Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::Device, Dispatch>>::type
      createDeviceUnique( const VULKAN_HPP_NAMESPACE::DeviceCreateInfo &                      createInfo,
                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                          Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result enumerateDeviceExtensionProperties( const char *                                pLayerName,
                                                                    uint32_t *                                  pPropertyCount,
                                                                    VULKAN_HPP_NAMESPACE::ExtensionProperties * pProperties,
                                                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename ExtensionPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::ExtensionProperties>,
              typename Dispatch                     = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::ExtensionProperties, ExtensionPropertiesAllocator>>::type
      enumerateDeviceExtensionProperties( Optional<const std::string> layerName VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                          Dispatch const & d                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename ExtensionPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::ExtensionProperties>,
              typename Dispatch                     = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                           = ExtensionPropertiesAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, ExtensionProperties>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::ExtensionProperties, ExtensionPropertiesAllocator>>::type
      enumerateDeviceExtensionProperties( Optional<const std::string>    layerName,
                                          ExtensionPropertiesAllocator & extensionPropertiesAllocator,
                                          Dispatch const & d             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result enumerateDeviceLayerProperties( uint32_t *                              pPropertyCount,
                                                                VULKAN_HPP_NAMESPACE::LayerProperties * pProperties,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename LayerPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::LayerProperties>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::LayerProperties, LayerPropertiesAllocator>>::type
      enumerateDeviceLayerProperties( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename LayerPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::LayerProperties>,
              typename Dispatch                 = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                       = LayerPropertiesAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, LayerProperties>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::LayerProperties, LayerPropertiesAllocator>>::type
      enumerateDeviceLayerProperties( LayerPropertiesAllocator & layerPropertiesAllocator, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getSparseImageFormatProperties( VULKAN_HPP_NAMESPACE::Format                        format,
                                         VULKAN_HPP_NAMESPACE::ImageType                     type,
                                         VULKAN_HPP_NAMESPACE::SampleCountFlagBits           samples,
                                         VULKAN_HPP_NAMESPACE::ImageUsageFlags               usage,
                                         VULKAN_HPP_NAMESPACE::ImageTiling                   tiling,
                                         uint32_t *                                          pPropertyCount,
                                         VULKAN_HPP_NAMESPACE::SparseImageFormatProperties * pProperties,
                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename SparseImageFormatPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties>,
              typename Dispatch                             = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties, SparseImageFormatPropertiesAllocator>
                         getSparseImageFormatProperties( VULKAN_HPP_NAMESPACE::Format              format,
                                                         VULKAN_HPP_NAMESPACE::ImageType           type,
                                                         VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples,
                                                         VULKAN_HPP_NAMESPACE::ImageUsageFlags     usage,
                                                         VULKAN_HPP_NAMESPACE::ImageTiling         tiling,
                                                         Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename SparseImageFormatPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties>,
              typename Dispatch                             = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                   = SparseImageFormatPropertiesAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, SparseImageFormatProperties>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties, SparseImageFormatPropertiesAllocator>
                         getSparseImageFormatProperties( VULKAN_HPP_NAMESPACE::Format              format,
                                                         VULKAN_HPP_NAMESPACE::ImageType           type,
                                                         VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples,
                                                         VULKAN_HPP_NAMESPACE::ImageUsageFlags     usage,
                                                         VULKAN_HPP_NAMESPACE::ImageTiling         tiling,
                                                         SparseImageFormatPropertiesAllocator &    sparseImageFormatPropertiesAllocator,
                                                         Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_VERSION_1_1 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getFeatures2( VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2 * pFeatures,
                       Dispatch const & d                              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2
                         getFeatures2( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...> getFeatures2( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getProperties2( VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2 * pProperties,
                         Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2
                         getProperties2( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...> getProperties2( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getFormatProperties2( VULKAN_HPP_NAMESPACE::Format              format,
                               VULKAN_HPP_NAMESPACE::FormatProperties2 * pFormatProperties,
                               Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::FormatProperties2
      getFormatProperties2( VULKAN_HPP_NAMESPACE::Format format, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
      getFormatProperties2( VULKAN_HPP_NAMESPACE::Format format, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getImageFormatProperties2( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 * pImageFormatInfo,
                                                           VULKAN_HPP_NAMESPACE::ImageFormatProperties2 *               pImageFormatProperties,
                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::ImageFormatProperties2>::type
      getImageFormatProperties2( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 & imageFormatInfo,
                                 Dispatch const & d                                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<StructureChain<X, Y, Z...>>::type
      getImageFormatProperties2( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 & imageFormatInfo,
                                 Dispatch const & d                                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getQueueFamilyProperties2( uint32_t *                                     pQueueFamilyPropertyCount,
                                    VULKAN_HPP_NAMESPACE::QueueFamilyProperties2 * pQueueFamilyProperties,
                                    Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename QueueFamilyProperties2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2>,
              typename Dispatch                        = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2, QueueFamilyProperties2Allocator>
                         getQueueFamilyProperties2( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename QueueFamilyProperties2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2>,
              typename Dispatch                        = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                              = QueueFamilyProperties2Allocator,
              typename std::enable_if<std::is_same<typename B1::value_type, QueueFamilyProperties2>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2, QueueFamilyProperties2Allocator>
                         getQueueFamilyProperties2( QueueFamilyProperties2Allocator & queueFamilyProperties2Allocator,
                                                    Dispatch const & d                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename StructureChain,
              typename StructureChainAllocator = std::allocator<StructureChain>,
              typename Dispatch                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<StructureChain, StructureChainAllocator>
                         getQueueFamilyProperties2( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename StructureChain,
              typename StructureChainAllocator                                                                 = std::allocator<StructureChain>,
              typename Dispatch                                                                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                                                                      = StructureChainAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, StructureChain>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<StructureChain, StructureChainAllocator>
      getQueueFamilyProperties2( StructureChainAllocator & structureChainAllocator, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getMemoryProperties2( VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2 * pMemoryProperties,
                               Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2
                         getMemoryProperties2( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getMemoryProperties2( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getSparseImageFormatProperties2( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSparseImageFormatInfo2 * pFormatInfo,
                                          uint32_t *                                                         pPropertyCount,
                                          VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2 *               pProperties,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename SparseImageFormatProperties2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2>,
              typename Dispatch                              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2, SparseImageFormatProperties2Allocator>
                         getSparseImageFormatProperties2( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSparseImageFormatInfo2 & formatInfo,
                                                          Dispatch const & d                                                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename SparseImageFormatProperties2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2>,
              typename Dispatch                              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                    = SparseImageFormatProperties2Allocator,
              typename std::enable_if<std::is_same<typename B1::value_type, SparseImageFormatProperties2>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2, SparseImageFormatProperties2Allocator>
                         getSparseImageFormatProperties2( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSparseImageFormatInfo2 & formatInfo,
                                                          SparseImageFormatProperties2Allocator &                            sparseImageFormatProperties2Allocator,
                                                          Dispatch const & d                                                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getExternalBufferProperties( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalBufferInfo * pExternalBufferInfo,
                                      VULKAN_HPP_NAMESPACE::ExternalBufferProperties *               pExternalBufferProperties,
                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::ExternalBufferProperties
                         getExternalBufferProperties( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalBufferInfo & externalBufferInfo,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getExternalFenceProperties( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalFenceInfo * pExternalFenceInfo,
                                     VULKAN_HPP_NAMESPACE::ExternalFenceProperties *               pExternalFenceProperties,
                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::ExternalFenceProperties
                         getExternalFenceProperties( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalFenceInfo & externalFenceInfo,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getExternalSemaphoreProperties( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo,
                                         VULKAN_HPP_NAMESPACE::ExternalSemaphoreProperties *               pExternalSemaphoreProperties,
                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::ExternalSemaphoreProperties
                         getExternalSemaphoreProperties( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalSemaphoreInfo & externalSemaphoreInfo,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_VERSION_1_3 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getToolProperties( uint32_t *                                           pToolCount,
                                                   VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties * pToolProperties,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PhysicalDeviceToolPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties>,
              typename Dispatch                              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties, PhysicalDeviceToolPropertiesAllocator>>::type
      getToolProperties( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PhysicalDeviceToolPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties>,
              typename Dispatch                              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                    = PhysicalDeviceToolPropertiesAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PhysicalDeviceToolProperties>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties, PhysicalDeviceToolPropertiesAllocator>>::type
      getToolProperties( PhysicalDeviceToolPropertiesAllocator & physicalDeviceToolPropertiesAllocator,
                         Dispatch const & d                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSurfaceSupportKHR( uint32_t                         queueFamilyIndex,
                                                      VULKAN_HPP_NAMESPACE::SurfaceKHR surface,
                                                      VULKAN_HPP_NAMESPACE::Bool32 *   pSupported,
                                                      Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::Bool32>::type getSurfaceSupportKHR(
      uint32_t queueFamilyIndex, VULKAN_HPP_NAMESPACE::SurfaceKHR surface, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSurfaceCapabilitiesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR               surface,
                                                           VULKAN_HPP_NAMESPACE::SurfaceCapabilitiesKHR * pSurfaceCapabilities,
                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceCapabilitiesKHR>::type
      getSurfaceCapabilitiesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSurfaceFormatsKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR         surface,
                                                      uint32_t *                               pSurfaceFormatCount,
                                                      VULKAN_HPP_NAMESPACE::SurfaceFormatKHR * pSurfaceFormats,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename SurfaceFormatKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::SurfaceFormatKHR>,
              typename Dispatch                  = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::SurfaceFormatKHR, SurfaceFormatKHRAllocator>>::type
      getSurfaceFormatsKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                            Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename SurfaceFormatKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::SurfaceFormatKHR>,
              typename Dispatch                  = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                        = SurfaceFormatKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, SurfaceFormatKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::SurfaceFormatKHR, SurfaceFormatKHRAllocator>>::type
      getSurfaceFormatsKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface,
                            SurfaceFormatKHRAllocator &      surfaceFormatKHRAllocator,
                            Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSurfacePresentModesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR       surface,
                                                           uint32_t *                             pPresentModeCount,
                                                           VULKAN_HPP_NAMESPACE::PresentModeKHR * pPresentModes,
                                                           Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PresentModeKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PresentModeKHR>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PresentModeKHR, PresentModeKHRAllocator>>::type
      getSurfacePresentModesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                 Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PresentModeKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PresentModeKHR>,
              typename Dispatch                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                      = PresentModeKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PresentModeKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PresentModeKHR, PresentModeKHRAllocator>>::type
      getSurfacePresentModesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface,
                                 PresentModeKHRAllocator &        presentModeKHRAllocator,
                                 Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_swapchain ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getPresentRectanglesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface,
                                                         uint32_t *                       pRectCount,
                                                         VULKAN_HPP_NAMESPACE::Rect2D *   pRects,
                                                         Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Rect2DAllocator = std::allocator<VULKAN_HPP_NAMESPACE::Rect2D>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::Rect2D, Rect2DAllocator>>::type
      getPresentRectanglesKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename Rect2DAllocator                                                                 = std::allocator<VULKAN_HPP_NAMESPACE::Rect2D>,
              typename Dispatch                                                                        = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                                                              = Rect2DAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, Rect2D>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::Rect2D, Rect2DAllocator>>::type getPresentRectanglesKHR(
      VULKAN_HPP_NAMESPACE::SurfaceKHR surface, Rect2DAllocator & rect2DAllocator, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_display ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getDisplayPropertiesKHR( uint32_t *                                   pPropertyCount,
                                                         VULKAN_HPP_NAMESPACE::DisplayPropertiesKHR * pProperties,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DisplayPropertiesKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayPropertiesKHR>,
              typename Dispatch                      = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayPropertiesKHR, DisplayPropertiesKHRAllocator>>::type
      getDisplayPropertiesKHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DisplayPropertiesKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayPropertiesKHR>,
              typename Dispatch                      = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                            = DisplayPropertiesKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, DisplayPropertiesKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayPropertiesKHR, DisplayPropertiesKHRAllocator>>::type
      getDisplayPropertiesKHR( DisplayPropertiesKHRAllocator & displayPropertiesKHRAllocator,
                               Dispatch const & d              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getDisplayPlanePropertiesKHR( uint32_t *                                        pPropertyCount,
                                                              VULKAN_HPP_NAMESPACE::DisplayPlanePropertiesKHR * pProperties,
                                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DisplayPlanePropertiesKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayPlanePropertiesKHR>,
              typename Dispatch                           = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayPlanePropertiesKHR, DisplayPlanePropertiesKHRAllocator>>::type
      getDisplayPlanePropertiesKHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DisplayPlanePropertiesKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayPlanePropertiesKHR>,
              typename Dispatch                           = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                 = DisplayPlanePropertiesKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, DisplayPlanePropertiesKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayPlanePropertiesKHR, DisplayPlanePropertiesKHRAllocator>>::type
      getDisplayPlanePropertiesKHR( DisplayPlanePropertiesKHRAllocator & displayPlanePropertiesKHRAllocator,
                                    Dispatch const & d                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getDisplayPlaneSupportedDisplaysKHR( uint32_t                           planeIndex,
                                                                     uint32_t *                         pDisplayCount,
                                                                     VULKAN_HPP_NAMESPACE::DisplayKHR * pDisplays,
                                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DisplayKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayKHR>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayKHR, DisplayKHRAllocator>>::type
      getDisplayPlaneSupportedDisplaysKHR( uint32_t planeIndex, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DisplayKHRAllocator                                                                 = std::allocator<VULKAN_HPP_NAMESPACE::DisplayKHR>,
              typename Dispatch                                                                            = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                                                                  = DisplayKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, DisplayKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayKHR, DisplayKHRAllocator>>::type getDisplayPlaneSupportedDisplaysKHR(
      uint32_t planeIndex, DisplayKHRAllocator & displayKHRAllocator, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getDisplayModePropertiesKHR( VULKAN_HPP_NAMESPACE::DisplayKHR                 display,
                                                             uint32_t *                                       pPropertyCount,
                                                             VULKAN_HPP_NAMESPACE::DisplayModePropertiesKHR * pProperties,
                                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DisplayModePropertiesKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayModePropertiesKHR>,
              typename Dispatch                          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayModePropertiesKHR, DisplayModePropertiesKHRAllocator>>::type
      getDisplayModePropertiesKHR( VULKAN_HPP_NAMESPACE::DisplayKHR display, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DisplayModePropertiesKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayModePropertiesKHR>,
              typename Dispatch                          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                = DisplayModePropertiesKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, DisplayModePropertiesKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayModePropertiesKHR, DisplayModePropertiesKHRAllocator>>::type
      getDisplayModePropertiesKHR( VULKAN_HPP_NAMESPACE::DisplayKHR    display,
                                   DisplayModePropertiesKHRAllocator & displayModePropertiesKHRAllocator,
                                   Dispatch const & d                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createDisplayModeKHR( VULKAN_HPP_NAMESPACE::DisplayKHR                       display,
                                                      const VULKAN_HPP_NAMESPACE::DisplayModeCreateInfoKHR * pCreateInfo,
                                                      const VULKAN_HPP_NAMESPACE::AllocationCallbacks *      pAllocator,
                                                      VULKAN_HPP_NAMESPACE::DisplayModeKHR *                 pMode,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DisplayModeKHR>::type
      createDisplayModeKHR( VULKAN_HPP_NAMESPACE::DisplayKHR                                    display,
                            const VULKAN_HPP_NAMESPACE::DisplayModeCreateInfoKHR &              createInfo,
                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                            Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::DisplayModeKHR, Dispatch>>::type
      createDisplayModeKHRUnique( VULKAN_HPP_NAMESPACE::DisplayKHR                                    display,
                                  const VULKAN_HPP_NAMESPACE::DisplayModeCreateInfoKHR &              createInfo,
                                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getDisplayPlaneCapabilitiesKHR( VULKAN_HPP_NAMESPACE::DisplayModeKHR                mode,
                                                                uint32_t                                            planeIndex,
                                                                VULKAN_HPP_NAMESPACE::DisplayPlaneCapabilitiesKHR * pCapabilities,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DisplayPlaneCapabilitiesKHR>::type getDisplayPlaneCapabilitiesKHR(
      VULKAN_HPP_NAMESPACE::DisplayModeKHR mode, uint32_t planeIndex, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_XLIB_KHR )
    //=== VK_KHR_xlib_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    Bool32 getXlibPresentationSupportKHR( uint32_t           queueFamilyIndex,
                                          Display *          dpy,
                                          VisualID           visualID,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NAMESPACE::Bool32 getXlibPresentationSupportKHR( uint32_t           queueFamilyIndex,
                                                                Display &          dpy,
                                                                VisualID           visualID,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_XLIB_KHR*/

#if defined( VK_USE_PLATFORM_XCB_KHR )
    //=== VK_KHR_xcb_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    Bool32 getXcbPresentationSupportKHR( uint32_t           queueFamilyIndex,
                                         xcb_connection_t * connection,
                                         xcb_visualid_t     visual_id,
                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NAMESPACE::Bool32 getXcbPresentationSupportKHR( uint32_t           queueFamilyIndex,
                                                               xcb_connection_t & connection,
                                                               xcb_visualid_t     visual_id,
                                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_XCB_KHR*/

#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
    //=== VK_KHR_wayland_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    Bool32 getWaylandPresentationSupportKHR( uint32_t            queueFamilyIndex,
                                             struct wl_display * display,
                                             Dispatch const & d  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NAMESPACE::Bool32 getWaylandPresentationSupportKHR( uint32_t            queueFamilyIndex,
                                                                   struct wl_display & display,
                                                                   Dispatch const & d  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_WAYLAND_KHR*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
    //=== VK_KHR_win32_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    Bool32 getWin32PresentationSupportKHR( uint32_t queueFamilyIndex, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VK_USE_PLATFORM_WIN32_KHR*/

#if defined( VK_ENABLE_BETA_EXTENSIONS )
    //=== VK_KHR_video_queue ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getVideoCapabilitiesKHR( const VULKAN_HPP_NAMESPACE::VideoProfileInfoKHR * pVideoProfile,
                                                         VULKAN_HPP_NAMESPACE::VideoCapabilitiesKHR *      pCapabilities,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::VideoCapabilitiesKHR>::type
      getVideoCapabilitiesKHR( const VULKAN_HPP_NAMESPACE::VideoProfileInfoKHR & videoProfile,
                               Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<StructureChain<X, Y, Z...>>::type
      getVideoCapabilitiesKHR( const VULKAN_HPP_NAMESPACE::VideoProfileInfoKHR & videoProfile,
                               Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getVideoFormatPropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceVideoFormatInfoKHR * pVideoFormatInfo,
                                                             uint32_t *                                                     pVideoFormatPropertyCount,
                                                             VULKAN_HPP_NAMESPACE::VideoFormatPropertiesKHR *               pVideoFormatProperties,
                                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename VideoFormatPropertiesKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::VideoFormatPropertiesKHR>,
              typename Dispatch                          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::VideoFormatPropertiesKHR, VideoFormatPropertiesKHRAllocator>>::type
      getVideoFormatPropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceVideoFormatInfoKHR & videoFormatInfo,
                                   Dispatch const & d                                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename VideoFormatPropertiesKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::VideoFormatPropertiesKHR>,
              typename Dispatch                          = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                = VideoFormatPropertiesKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, VideoFormatPropertiesKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::VideoFormatPropertiesKHR, VideoFormatPropertiesKHRAllocator>>::type
      getVideoFormatPropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceVideoFormatInfoKHR & videoFormatInfo,
                                   VideoFormatPropertiesKHRAllocator &                            videoFormatPropertiesKHRAllocator,
                                   Dispatch const & d                                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_ENABLE_BETA_EXTENSIONS*/

    //=== VK_NV_external_memory_capabilities ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getExternalImageFormatPropertiesNV( VULKAN_HPP_NAMESPACE::Format                            format,
                                                                    VULKAN_HPP_NAMESPACE::ImageType                         type,
                                                                    VULKAN_HPP_NAMESPACE::ImageTiling                       tiling,
                                                                    VULKAN_HPP_NAMESPACE::ImageUsageFlags                   usage,
                                                                    VULKAN_HPP_NAMESPACE::ImageCreateFlags                  flags,
                                                                    VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV   externalHandleType,
                                                                    VULKAN_HPP_NAMESPACE::ExternalImageFormatPropertiesNV * pExternalImageFormatProperties,
                                                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::ExternalImageFormatPropertiesNV>::type
      getExternalImageFormatPropertiesNV( VULKAN_HPP_NAMESPACE::Format                                             format,
                                          VULKAN_HPP_NAMESPACE::ImageType                                          type,
                                          VULKAN_HPP_NAMESPACE::ImageTiling                                        tiling,
                                          VULKAN_HPP_NAMESPACE::ImageUsageFlags                                    usage,
                                          VULKAN_HPP_NAMESPACE::ImageCreateFlags flags                             VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                          VULKAN_HPP_NAMESPACE::ExternalMemoryHandleTypeFlagsNV externalHandleType VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_get_physical_device_properties2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getFeatures2KHR( VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2 * pFeatures,
                          Dispatch const & d                              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::PhysicalDeviceFeatures2
                         getFeatures2KHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...> getFeatures2KHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getProperties2KHR( VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2 * pProperties,
                            Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::PhysicalDeviceProperties2
                         getProperties2KHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...> getProperties2KHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getFormatProperties2KHR( VULKAN_HPP_NAMESPACE::Format              format,
                                  VULKAN_HPP_NAMESPACE::FormatProperties2 * pFormatProperties,
                                  Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::FormatProperties2
      getFormatProperties2KHR( VULKAN_HPP_NAMESPACE::Format format, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
      getFormatProperties2KHR( VULKAN_HPP_NAMESPACE::Format format, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getImageFormatProperties2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 * pImageFormatInfo,
                                                              VULKAN_HPP_NAMESPACE::ImageFormatProperties2 *               pImageFormatProperties,
                                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::ImageFormatProperties2>::type
      getImageFormatProperties2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 & imageFormatInfo,
                                    Dispatch const & d                                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<StructureChain<X, Y, Z...>>::type
      getImageFormatProperties2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceImageFormatInfo2 & imageFormatInfo,
                                    Dispatch const & d                                           VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getQueueFamilyProperties2KHR( uint32_t *                                     pQueueFamilyPropertyCount,
                                       VULKAN_HPP_NAMESPACE::QueueFamilyProperties2 * pQueueFamilyProperties,
                                       Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename QueueFamilyProperties2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2>,
              typename Dispatch                        = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2, QueueFamilyProperties2Allocator>
                         getQueueFamilyProperties2KHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename QueueFamilyProperties2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2>,
              typename Dispatch                        = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                              = QueueFamilyProperties2Allocator,
              typename std::enable_if<std::is_same<typename B1::value_type, QueueFamilyProperties2>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::QueueFamilyProperties2, QueueFamilyProperties2Allocator>
                         getQueueFamilyProperties2KHR( QueueFamilyProperties2Allocator & queueFamilyProperties2Allocator,
                                                       Dispatch const & d                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename StructureChain,
              typename StructureChainAllocator = std::allocator<StructureChain>,
              typename Dispatch                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<StructureChain, StructureChainAllocator>
                         getQueueFamilyProperties2KHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename StructureChain,
              typename StructureChainAllocator                                                                 = std::allocator<StructureChain>,
              typename Dispatch                                                                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                                                                      = StructureChainAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, StructureChain>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<StructureChain, StructureChainAllocator>
      getQueueFamilyProperties2KHR( StructureChainAllocator & structureChainAllocator, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getMemoryProperties2KHR( VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2 * pMemoryProperties,
                                  Dispatch const & d                                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::PhysicalDeviceMemoryProperties2
                         getMemoryProperties2KHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD StructureChain<X, Y, Z...>
                         getMemoryProperties2KHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getSparseImageFormatProperties2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSparseImageFormatInfo2 * pFormatInfo,
                                             uint32_t *                                                         pPropertyCount,
                                             VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2 *               pProperties,
                                             Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename SparseImageFormatProperties2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2>,
              typename Dispatch                              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2, SparseImageFormatProperties2Allocator>
                         getSparseImageFormatProperties2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSparseImageFormatInfo2 & formatInfo,
                                                             Dispatch const & d                                                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename SparseImageFormatProperties2Allocator = std::allocator<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2>,
              typename Dispatch                              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                    = SparseImageFormatProperties2Allocator,
              typename std::enable_if<std::is_same<typename B1::value_type, SparseImageFormatProperties2>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD std::vector<VULKAN_HPP_NAMESPACE::SparseImageFormatProperties2, SparseImageFormatProperties2Allocator>
                         getSparseImageFormatProperties2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSparseImageFormatInfo2 & formatInfo,
                                                             SparseImageFormatProperties2Allocator &                            sparseImageFormatProperties2Allocator,
                                                             Dispatch const & d                                                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_external_memory_capabilities ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getExternalBufferPropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalBufferInfo * pExternalBufferInfo,
                                         VULKAN_HPP_NAMESPACE::ExternalBufferProperties *               pExternalBufferProperties,
                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::ExternalBufferProperties
                         getExternalBufferPropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalBufferInfo & externalBufferInfo,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_external_semaphore_capabilities ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getExternalSemaphorePropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo,
                                            VULKAN_HPP_NAMESPACE::ExternalSemaphoreProperties *               pExternalSemaphoreProperties,
                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::ExternalSemaphoreProperties
                         getExternalSemaphorePropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalSemaphoreInfo & externalSemaphoreInfo,
                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_direct_mode_display ===

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    Result releaseDisplayEXT( VULKAN_HPP_NAMESPACE::DisplayKHR display, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void releaseDisplayEXT( VULKAN_HPP_NAMESPACE::DisplayKHR display, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_XLIB_XRANDR_EXT )
    //=== VK_EXT_acquire_xlib_display ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result acquireXlibDisplayEXT( Display *                        dpy,
                                                       VULKAN_HPP_NAMESPACE::DisplayKHR display,
                                                       Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      acquireXlibDisplayEXT( Display & dpy, VULKAN_HPP_NAMESPACE::DisplayKHR display, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getRandROutputDisplayEXT( Display *                          dpy,
                                                          RROutput                           rrOutput,
                                                          VULKAN_HPP_NAMESPACE::DisplayKHR * pDisplay,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DisplayKHR>::type
      getRandROutputDisplayEXT( Display & dpy, RROutput rrOutput, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::DisplayKHR, Dispatch>>::type
      getRandROutputDisplayEXTUnique( Display & dpy, RROutput rrOutput, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_XLIB_XRANDR_EXT*/

    //=== VK_EXT_display_surface_counter ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSurfaceCapabilities2EXT( VULKAN_HPP_NAMESPACE::SurfaceKHR                surface,
                                                            VULKAN_HPP_NAMESPACE::SurfaceCapabilities2EXT * pSurfaceCapabilities,
                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceCapabilities2EXT>::type
      getSurfaceCapabilities2EXT( VULKAN_HPP_NAMESPACE::SurfaceKHR surface, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_external_fence_capabilities ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getExternalFencePropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalFenceInfo * pExternalFenceInfo,
                                        VULKAN_HPP_NAMESPACE::ExternalFenceProperties *               pExternalFenceProperties,
                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::ExternalFenceProperties
                         getExternalFencePropertiesKHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceExternalFenceInfo & externalFenceInfo,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_performance_query ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result
      enumerateQueueFamilyPerformanceQueryCountersKHR( uint32_t                                                 queueFamilyIndex,
                                                       uint32_t *                                               pCounterCount,
                                                       VULKAN_HPP_NAMESPACE::PerformanceCounterKHR *            pCounters,
                                                       VULKAN_HPP_NAMESPACE::PerformanceCounterDescriptionKHR * pCounterDescriptions,
                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PerformanceCounterKHRAllocator            = std::allocator<VULKAN_HPP_NAMESPACE::PerformanceCounterKHR>,
              typename PerformanceCounterDescriptionKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PerformanceCounterDescriptionKHR>,
              typename Dispatch                                  = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::pair<std::vector<VULKAN_HPP_NAMESPACE::PerformanceCounterKHR, PerformanceCounterKHRAllocator>,
                                         std::vector<VULKAN_HPP_NAMESPACE::PerformanceCounterDescriptionKHR, PerformanceCounterDescriptionKHRAllocator>>>::type
      enumerateQueueFamilyPerformanceQueryCountersKHR( uint32_t queueFamilyIndex, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PerformanceCounterKHRAllocator            = std::allocator<VULKAN_HPP_NAMESPACE::PerformanceCounterKHR>,
              typename PerformanceCounterDescriptionKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PerformanceCounterDescriptionKHR>,
              typename Dispatch                                  = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                        = PerformanceCounterKHRAllocator,
              typename B2                                        = PerformanceCounterDescriptionKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PerformanceCounterKHR>::value &&
                                        std::is_same<typename B2::value_type, PerformanceCounterDescriptionKHR>::value,
                                      int>::type                 = 0>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::pair<std::vector<VULKAN_HPP_NAMESPACE::PerformanceCounterKHR, PerformanceCounterKHRAllocator>,
                                         std::vector<VULKAN_HPP_NAMESPACE::PerformanceCounterDescriptionKHR, PerformanceCounterDescriptionKHRAllocator>>>::type
      enumerateQueueFamilyPerformanceQueryCountersKHR( uint32_t                                    queueFamilyIndex,
                                                       PerformanceCounterKHRAllocator &            performanceCounterKHRAllocator,
                                                       PerformanceCounterDescriptionKHRAllocator & performanceCounterDescriptionKHRAllocator,
                                                       Dispatch const & d                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getQueueFamilyPerformanceQueryPassesKHR( const VULKAN_HPP_NAMESPACE::QueryPoolPerformanceCreateInfoKHR * pPerformanceQueryCreateInfo,
                                                  uint32_t *                                                      pNumPasses,
                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD uint32_t
      getQueueFamilyPerformanceQueryPassesKHR( const VULKAN_HPP_NAMESPACE::QueryPoolPerformanceCreateInfoKHR & performanceQueryCreateInfo,
                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_get_surface_capabilities2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSurfaceCapabilities2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo,
                                                            VULKAN_HPP_NAMESPACE::SurfaceCapabilities2KHR *             pSurfaceCapabilities,
                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceCapabilities2KHR>::type
      getSurfaceCapabilities2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo,
                                  Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename X, typename Y, typename... Z, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<StructureChain<X, Y, Z...>>::type
      getSurfaceCapabilities2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo,
                                  Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSurfaceFormats2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo,
                                                       uint32_t *                                                  pSurfaceFormatCount,
                                                       VULKAN_HPP_NAMESPACE::SurfaceFormat2KHR *                   pSurfaceFormats,
                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename SurfaceFormat2KHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::SurfaceFormat2KHR>,
              typename Dispatch                   = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::SurfaceFormat2KHR, SurfaceFormat2KHRAllocator>>::type
      getSurfaceFormats2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo,
                             Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename SurfaceFormat2KHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::SurfaceFormat2KHR>,
              typename Dispatch                   = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                         = SurfaceFormat2KHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, SurfaceFormat2KHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::SurfaceFormat2KHR, SurfaceFormat2KHRAllocator>>::type
      getSurfaceFormats2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo,
                             SurfaceFormat2KHRAllocator &                                surfaceFormat2KHRAllocator,
                             Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename StructureChain,
              typename StructureChainAllocator = std::allocator<StructureChain>,
              typename Dispatch                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<StructureChain, StructureChainAllocator>>::type
      getSurfaceFormats2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo,
                             Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename StructureChain,
              typename StructureChainAllocator                                                                 = std::allocator<StructureChain>,
              typename Dispatch                                                                                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                                                                      = StructureChainAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, StructureChain>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<StructureChain, StructureChainAllocator>>::type
      getSurfaceFormats2KHR( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo,
                             StructureChainAllocator &                                   structureChainAllocator,
                             Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_get_display_properties2 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getDisplayProperties2KHR( uint32_t *                                    pPropertyCount,
                                                          VULKAN_HPP_NAMESPACE::DisplayProperties2KHR * pProperties,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DisplayProperties2KHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayProperties2KHR>,
              typename Dispatch                       = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayProperties2KHR, DisplayProperties2KHRAllocator>>::type
      getDisplayProperties2KHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DisplayProperties2KHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayProperties2KHR>,
              typename Dispatch                       = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                             = DisplayProperties2KHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, DisplayProperties2KHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayProperties2KHR, DisplayProperties2KHRAllocator>>::type
      getDisplayProperties2KHR( DisplayProperties2KHRAllocator & displayProperties2KHRAllocator,
                                Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getDisplayPlaneProperties2KHR( uint32_t *                                         pPropertyCount,
                                                               VULKAN_HPP_NAMESPACE::DisplayPlaneProperties2KHR * pProperties,
                                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DisplayPlaneProperties2KHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayPlaneProperties2KHR>,
              typename Dispatch                            = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayPlaneProperties2KHR, DisplayPlaneProperties2KHRAllocator>>::type
      getDisplayPlaneProperties2KHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DisplayPlaneProperties2KHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayPlaneProperties2KHR>,
              typename Dispatch                            = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                  = DisplayPlaneProperties2KHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, DisplayPlaneProperties2KHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayPlaneProperties2KHR, DisplayPlaneProperties2KHRAllocator>>::type
      getDisplayPlaneProperties2KHR( DisplayPlaneProperties2KHRAllocator & displayPlaneProperties2KHRAllocator,
                                     Dispatch const & d                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getDisplayModeProperties2KHR( VULKAN_HPP_NAMESPACE::DisplayKHR                  display,
                                                              uint32_t *                                        pPropertyCount,
                                                              VULKAN_HPP_NAMESPACE::DisplayModeProperties2KHR * pProperties,
                                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename DisplayModeProperties2KHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayModeProperties2KHR>,
              typename Dispatch                           = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayModeProperties2KHR, DisplayModeProperties2KHRAllocator>>::type
      getDisplayModeProperties2KHR( VULKAN_HPP_NAMESPACE::DisplayKHR display, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename DisplayModeProperties2KHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::DisplayModeProperties2KHR>,
              typename Dispatch                           = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                 = DisplayModeProperties2KHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, DisplayModeProperties2KHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::DisplayModeProperties2KHR, DisplayModeProperties2KHRAllocator>>::type
      getDisplayModeProperties2KHR( VULKAN_HPP_NAMESPACE::DisplayKHR     display,
                                    DisplayModeProperties2KHRAllocator & displayModeProperties2KHRAllocator,
                                    Dispatch const & d                   VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getDisplayPlaneCapabilities2KHR( const VULKAN_HPP_NAMESPACE::DisplayPlaneInfo2KHR *   pDisplayPlaneInfo,
                                                                 VULKAN_HPP_NAMESPACE::DisplayPlaneCapabilities2KHR * pCapabilities,
                                                                 Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DisplayPlaneCapabilities2KHR>::type
      getDisplayPlaneCapabilities2KHR( const VULKAN_HPP_NAMESPACE::DisplayPlaneInfo2KHR & displayPlaneInfo,
                                       Dispatch const & d                                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_sample_locations ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void getMultisamplePropertiesEXT( VULKAN_HPP_NAMESPACE::SampleCountFlagBits        samples,
                                      VULKAN_HPP_NAMESPACE::MultisamplePropertiesEXT * pMultisampleProperties,
                                      Dispatch const & d                               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD VULKAN_HPP_NAMESPACE::MultisamplePropertiesEXT
                         getMultisamplePropertiesEXT( VULKAN_HPP_NAMESPACE::SampleCountFlagBits samples,
                                                      Dispatch const & d                        VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_calibrated_timestamps ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getCalibrateableTimeDomainsEXT( uint32_t *                            pTimeDomainCount,
                                                                VULKAN_HPP_NAMESPACE::TimeDomainEXT * pTimeDomains,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename TimeDomainEXTAllocator = std::allocator<VULKAN_HPP_NAMESPACE::TimeDomainEXT>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::TimeDomainEXT, TimeDomainEXTAllocator>>::type
      getCalibrateableTimeDomainsEXT( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename TimeDomainEXTAllocator = std::allocator<VULKAN_HPP_NAMESPACE::TimeDomainEXT>,
              typename Dispatch               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                     = TimeDomainEXTAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, TimeDomainEXT>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::TimeDomainEXT, TimeDomainEXTAllocator>>::type
      getCalibrateableTimeDomainsEXT( TimeDomainEXTAllocator & timeDomainEXTAllocator, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_fragment_shading_rate ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getFragmentShadingRatesKHR( uint32_t *                                                   pFragmentShadingRateCount,
                                                            VULKAN_HPP_NAMESPACE::PhysicalDeviceFragmentShadingRateKHR * pFragmentShadingRates,
                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PhysicalDeviceFragmentShadingRateKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PhysicalDeviceFragmentShadingRateKHR>,
              typename Dispatch                                      = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceFragmentShadingRateKHR, PhysicalDeviceFragmentShadingRateKHRAllocator>>::type
      getFragmentShadingRatesKHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PhysicalDeviceFragmentShadingRateKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PhysicalDeviceFragmentShadingRateKHR>,
              typename Dispatch                                      = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                            = PhysicalDeviceFragmentShadingRateKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PhysicalDeviceFragmentShadingRateKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceFragmentShadingRateKHR, PhysicalDeviceFragmentShadingRateKHRAllocator>>::type
      getFragmentShadingRatesKHR( PhysicalDeviceFragmentShadingRateKHRAllocator & physicalDeviceFragmentShadingRateKHRAllocator,
                                  Dispatch const & d                              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_EXT_tooling_info ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getToolPropertiesEXT( uint32_t *                                           pToolCount,
                                                      VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties * pToolProperties,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PhysicalDeviceToolPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties>,
              typename Dispatch                              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties, PhysicalDeviceToolPropertiesAllocator>>::type
      getToolPropertiesEXT( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PhysicalDeviceToolPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties>,
              typename Dispatch                              = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                    = PhysicalDeviceToolPropertiesAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PhysicalDeviceToolProperties>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceToolProperties, PhysicalDeviceToolPropertiesAllocator>>::type
      getToolPropertiesEXT( PhysicalDeviceToolPropertiesAllocator & physicalDeviceToolPropertiesAllocator,
                            Dispatch const & d                      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_NV_cooperative_matrix ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getCooperativeMatrixPropertiesNV( uint32_t *                                            pPropertyCount,
                                                                  VULKAN_HPP_NAMESPACE::CooperativeMatrixPropertiesNV * pProperties,
                                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename CooperativeMatrixPropertiesNVAllocator = std::allocator<VULKAN_HPP_NAMESPACE::CooperativeMatrixPropertiesNV>,
              typename Dispatch                               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::CooperativeMatrixPropertiesNV, CooperativeMatrixPropertiesNVAllocator>>::type
      getCooperativeMatrixPropertiesNV( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename CooperativeMatrixPropertiesNVAllocator = std::allocator<VULKAN_HPP_NAMESPACE::CooperativeMatrixPropertiesNV>,
              typename Dispatch                               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                     = CooperativeMatrixPropertiesNVAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, CooperativeMatrixPropertiesNV>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::CooperativeMatrixPropertiesNV, CooperativeMatrixPropertiesNVAllocator>>::type
      getCooperativeMatrixPropertiesNV( CooperativeMatrixPropertiesNVAllocator & cooperativeMatrixPropertiesNVAllocator,
                                        Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_NV_coverage_reduction_mode ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result
      getSupportedFramebufferMixedSamplesCombinationsNV( uint32_t *                                                   pCombinationCount,
                                                         VULKAN_HPP_NAMESPACE::FramebufferMixedSamplesCombinationNV * pCombinations,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename FramebufferMixedSamplesCombinationNVAllocator = std::allocator<VULKAN_HPP_NAMESPACE::FramebufferMixedSamplesCombinationNV>,
              typename Dispatch                                      = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::FramebufferMixedSamplesCombinationNV, FramebufferMixedSamplesCombinationNVAllocator>>::type
      getSupportedFramebufferMixedSamplesCombinationsNV( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename FramebufferMixedSamplesCombinationNVAllocator = std::allocator<VULKAN_HPP_NAMESPACE::FramebufferMixedSamplesCombinationNV>,
              typename Dispatch                                      = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                            = FramebufferMixedSamplesCombinationNVAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, FramebufferMixedSamplesCombinationNV>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::FramebufferMixedSamplesCombinationNV, FramebufferMixedSamplesCombinationNVAllocator>>::type
      getSupportedFramebufferMixedSamplesCombinationsNV( FramebufferMixedSamplesCombinationNVAllocator & framebufferMixedSamplesCombinationNVAllocator,
                                                         Dispatch const & d                              VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
    //=== VK_EXT_full_screen_exclusive ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getSurfacePresentModes2EXT( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo,
                                                            uint32_t *                                                  pPresentModeCount,
                                                            VULKAN_HPP_NAMESPACE::PresentModeKHR *                      pPresentModes,
                                                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PresentModeKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PresentModeKHR>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PresentModeKHR, PresentModeKHRAllocator>>::type
      getSurfacePresentModes2EXT( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo,
                                  Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PresentModeKHRAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PresentModeKHR>,
              typename Dispatch                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                      = PresentModeKHRAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PresentModeKHR>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PresentModeKHR, PresentModeKHRAllocator>>::type
      getSurfacePresentModes2EXT( const VULKAN_HPP_NAMESPACE::PhysicalDeviceSurfaceInfo2KHR & surfaceInfo,
                                  PresentModeKHRAllocator &                                   presentModeKHRAllocator,
                                  Dispatch const & d                                          VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_WIN32_KHR*/

    //=== VK_EXT_acquire_drm_display ===

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result acquireDrmDisplayEXT( int32_t                          drmFd,
                                                      VULKAN_HPP_NAMESPACE::DisplayKHR display,
                                                      Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    typename ResultValueType<void>::type
         acquireDrmDisplayEXT( int32_t drmFd, VULKAN_HPP_NAMESPACE::DisplayKHR display, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getDrmDisplayEXT( int32_t                            drmFd,
                                                  uint32_t                           connectorId,
                                                  VULKAN_HPP_NAMESPACE::DisplayKHR * display,
                                                  Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DisplayKHR>::type
      getDrmDisplayEXT( int32_t drmFd, uint32_t connectorId, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::DisplayKHR, Dispatch>>::type
      getDrmDisplayEXTUnique( int32_t drmFd, uint32_t connectorId, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
    //=== VK_NV_acquire_winrt_display ===

#  ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result acquireWinrtDisplayNV( VULKAN_HPP_NAMESPACE::DisplayKHR display,
                                                       Dispatch const & d               VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  else
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD_WHEN_NO_EXCEPTIONS typename ResultValueType<void>::type
      acquireWinrtDisplayNV( VULKAN_HPP_NAMESPACE::DisplayKHR display, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result getWinrtDisplayNV( uint32_t                           deviceRelativeId,
                                                   VULKAN_HPP_NAMESPACE::DisplayKHR * pDisplay,
                                                   Dispatch const & d                 VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DisplayKHR>::type
      getWinrtDisplayNV( uint32_t deviceRelativeId, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::DisplayKHR, Dispatch>>::type
      getWinrtDisplayNVUnique( uint32_t deviceRelativeId, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_WIN32_KHR*/

#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
    //=== VK_EXT_directfb_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    Bool32 getDirectFBPresentationSupportEXT( uint32_t           queueFamilyIndex,
                                              IDirectFB *        dfb,
                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NAMESPACE::Bool32 getDirectFBPresentationSupportEXT( uint32_t           queueFamilyIndex,
                                                                    IDirectFB &        dfb,
                                                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_DIRECTFB_EXT*/

#if defined( VK_USE_PLATFORM_SCREEN_QNX )
    //=== VK_QNX_screen_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    Bool32 getScreenPresentationSupportQNX( uint32_t                queueFamilyIndex,
                                            struct _screen_window * window,
                                            Dispatch const & d      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NAMESPACE::Bool32 getScreenPresentationSupportQNX( uint32_t                queueFamilyIndex,
                                                                  struct _screen_window & window,
                                                                  Dispatch const & d      VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif   /*VK_USE_PLATFORM_SCREEN_QNX*/

    operator VkPhysicalDevice() const VULKAN_HPP_NOEXCEPT
    {
      return m_physicalDevice;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_physicalDevice != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_physicalDevice == VK_NULL_HANDLE;
    }

  private:
    VkPhysicalDevice m_physicalDevice = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::ePhysicalDevice>
  {
    using Type = VULKAN_HPP_NAMESPACE::PhysicalDevice;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::ePhysicalDevice>
  {
    using Type = VULKAN_HPP_NAMESPACE::PhysicalDevice;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::PhysicalDevice>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

#ifndef VULKAN_HPP_NO_SMART_HANDLE
  class Instance;
  template <typename Dispatch>
  class UniqueHandleTraits<DebugReportCallbackEXT, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Instance, Dispatch>;
  };
  using UniqueDebugReportCallbackEXT = UniqueHandle<DebugReportCallbackEXT, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<DebugUtilsMessengerEXT, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Instance, Dispatch>;
  };
  using UniqueDebugUtilsMessengerEXT = UniqueHandle<DebugUtilsMessengerEXT, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
  template <typename Dispatch>
  class UniqueHandleTraits<SurfaceKHR, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<Instance, Dispatch>;
  };
  using UniqueSurfaceKHR = UniqueHandle<SurfaceKHR, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
#endif /*VULKAN_HPP_NO_SMART_HANDLE*/

  class Instance
  {
  public:
    using CType      = VkInstance;
    using NativeType = VkInstance;

    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::ObjectType objectType = VULKAN_HPP_NAMESPACE::ObjectType::eInstance;
    static VULKAN_HPP_CONST_OR_CONSTEXPR VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT debugReportObjectType =
      VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eInstance;

  public:
    VULKAN_HPP_CONSTEXPR Instance() = default;
    VULKAN_HPP_CONSTEXPR Instance( std::nullptr_t ) VULKAN_HPP_NOEXCEPT {}
    Instance( VkInstance instance ) VULKAN_HPP_NOEXCEPT : m_instance( instance ) {}

    Instance & operator=( VkInstance instance ) VULKAN_HPP_NOEXCEPT
    {
      m_instance = instance;
      return *this;
    }

    Instance & operator=( std::nullptr_t ) VULKAN_HPP_NOEXCEPT
    {
      m_instance = {};
      return *this;
    }

#if defined( VULKAN_HPP_HAS_SPACESHIP_OPERATOR )
    auto operator<=>( Instance const & ) const = default;
#else
    bool operator==( Instance const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_instance == rhs.m_instance;
    }

    bool operator!=( Instance const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_instance != rhs.m_instance;
    }

    bool operator<( Instance const & rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return m_instance < rhs.m_instance;
    }
#endif

    //=== VK_VERSION_1_0 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result enumeratePhysicalDevices( uint32_t *                             pPhysicalDeviceCount,
                                                          VULKAN_HPP_NAMESPACE::PhysicalDevice * pPhysicalDevices,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PhysicalDeviceAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PhysicalDevice>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PhysicalDevice, PhysicalDeviceAllocator>>::type
      enumeratePhysicalDevices( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PhysicalDeviceAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PhysicalDevice>,
              typename Dispatch                = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                      = PhysicalDeviceAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PhysicalDevice>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PhysicalDevice, PhysicalDeviceAllocator>>::type
      enumeratePhysicalDevices( PhysicalDeviceAllocator & physicalDeviceAllocator, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    PFN_vkVoidFunction getProcAddr( const char * pName, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    PFN_vkVoidFunction getProcAddr( const std::string & name, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_VERSION_1_1 ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result enumeratePhysicalDeviceGroups( uint32_t *                                            pPhysicalDeviceGroupCount,
                                                               VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties,
                                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PhysicalDeviceGroupPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties>,
              typename Dispatch                               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties, PhysicalDeviceGroupPropertiesAllocator>>::type
      enumeratePhysicalDeviceGroups( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PhysicalDeviceGroupPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties>,
              typename Dispatch                               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                     = PhysicalDeviceGroupPropertiesAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PhysicalDeviceGroupProperties>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties, PhysicalDeviceGroupPropertiesAllocator>>::type
      enumeratePhysicalDeviceGroups( PhysicalDeviceGroupPropertiesAllocator & physicalDeviceGroupPropertiesAllocator,
                                     Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroySurfaceKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR                  surface,
                            const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                            Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroySurfaceKHR( VULKAN_HPP_NAMESPACE::SurfaceKHR surface                            VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                            Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::SurfaceKHR                  surface,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::SurfaceKHR                                    surface,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    //=== VK_KHR_display ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createDisplayPlaneSurfaceKHR( const VULKAN_HPP_NAMESPACE::DisplaySurfaceCreateInfoKHR * pCreateInfo,
                                                              const VULKAN_HPP_NAMESPACE::AllocationCallbacks *         pAllocator,
                                                              VULKAN_HPP_NAMESPACE::SurfaceKHR *                        pSurface,
                                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createDisplayPlaneSurfaceKHR( const VULKAN_HPP_NAMESPACE::DisplaySurfaceCreateInfoKHR &           createInfo,
                                    Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                    Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createDisplayPlaneSurfaceKHRUnique( const VULKAN_HPP_NAMESPACE::DisplaySurfaceCreateInfoKHR &           createInfo,
                                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                          Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_XLIB_KHR )
    //=== VK_KHR_xlib_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createXlibSurfaceKHR( const VULKAN_HPP_NAMESPACE::XlibSurfaceCreateInfoKHR * pCreateInfo,
                                                      const VULKAN_HPP_NAMESPACE::AllocationCallbacks *      pAllocator,
                                                      VULKAN_HPP_NAMESPACE::SurfaceKHR *                     pSurface,
                                                      Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createXlibSurfaceKHR( const VULKAN_HPP_NAMESPACE::XlibSurfaceCreateInfoKHR &              createInfo,
                            Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                            Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createXlibSurfaceKHRUnique( const VULKAN_HPP_NAMESPACE::XlibSurfaceCreateInfoKHR &              createInfo,
                                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_XLIB_KHR*/

#if defined( VK_USE_PLATFORM_XCB_KHR )
    //=== VK_KHR_xcb_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createXcbSurfaceKHR( const VULKAN_HPP_NAMESPACE::XcbSurfaceCreateInfoKHR * pCreateInfo,
                                                     const VULKAN_HPP_NAMESPACE::AllocationCallbacks *     pAllocator,
                                                     VULKAN_HPP_NAMESPACE::SurfaceKHR *                    pSurface,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createXcbSurfaceKHR( const VULKAN_HPP_NAMESPACE::XcbSurfaceCreateInfoKHR &               createInfo,
                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                           Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createXcbSurfaceKHRUnique( const VULKAN_HPP_NAMESPACE::XcbSurfaceCreateInfoKHR &               createInfo,
                                 Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                 Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_XCB_KHR*/

#if defined( VK_USE_PLATFORM_WAYLAND_KHR )
    //=== VK_KHR_wayland_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createWaylandSurfaceKHR( const VULKAN_HPP_NAMESPACE::WaylandSurfaceCreateInfoKHR * pCreateInfo,
                                                         const VULKAN_HPP_NAMESPACE::AllocationCallbacks *         pAllocator,
                                                         VULKAN_HPP_NAMESPACE::SurfaceKHR *                        pSurface,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createWaylandSurfaceKHR( const VULKAN_HPP_NAMESPACE::WaylandSurfaceCreateInfoKHR &           createInfo,
                               Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                               Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createWaylandSurfaceKHRUnique( const VULKAN_HPP_NAMESPACE::WaylandSurfaceCreateInfoKHR &           createInfo,
                                     Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                     Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_WAYLAND_KHR*/

#if defined( VK_USE_PLATFORM_ANDROID_KHR )
    //=== VK_KHR_android_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createAndroidSurfaceKHR( const VULKAN_HPP_NAMESPACE::AndroidSurfaceCreateInfoKHR * pCreateInfo,
                                                         const VULKAN_HPP_NAMESPACE::AllocationCallbacks *         pAllocator,
                                                         VULKAN_HPP_NAMESPACE::SurfaceKHR *                        pSurface,
                                                         Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createAndroidSurfaceKHR( const VULKAN_HPP_NAMESPACE::AndroidSurfaceCreateInfoKHR &           createInfo,
                               Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                               Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createAndroidSurfaceKHRUnique( const VULKAN_HPP_NAMESPACE::AndroidSurfaceCreateInfoKHR &           createInfo,
                                     Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                     Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_ANDROID_KHR*/

#if defined( VK_USE_PLATFORM_WIN32_KHR )
    //=== VK_KHR_win32_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createWin32SurfaceKHR( const VULKAN_HPP_NAMESPACE::Win32SurfaceCreateInfoKHR * pCreateInfo,
                                                       const VULKAN_HPP_NAMESPACE::AllocationCallbacks *       pAllocator,
                                                       VULKAN_HPP_NAMESPACE::SurfaceKHR *                      pSurface,
                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createWin32SurfaceKHR( const VULKAN_HPP_NAMESPACE::Win32SurfaceCreateInfoKHR &             createInfo,
                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createWin32SurfaceKHRUnique( const VULKAN_HPP_NAMESPACE::Win32SurfaceCreateInfoKHR &             createInfo,
                                   Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                   Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_WIN32_KHR*/

    //=== VK_EXT_debug_report ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createDebugReportCallbackEXT( const VULKAN_HPP_NAMESPACE::DebugReportCallbackCreateInfoEXT * pCreateInfo,
                                                              const VULKAN_HPP_NAMESPACE::AllocationCallbacks *              pAllocator,
                                                              VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT *                 pCallback,
                                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT>::type
      createDebugReportCallbackEXT( const VULKAN_HPP_NAMESPACE::DebugReportCallbackCreateInfoEXT &      createInfo,
                                    Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                    Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT, Dispatch>>::type
      createDebugReportCallbackEXTUnique( const VULKAN_HPP_NAMESPACE::DebugReportCallbackCreateInfoEXT &      createInfo,
                                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                          Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDebugReportCallbackEXT( VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT      callback,
                                        const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                        Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDebugReportCallbackEXT( VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT callback               VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                        Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT      callback,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::DebugReportCallbackEXT                        callback,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void debugReportMessageEXT( VULKAN_HPP_NAMESPACE::DebugReportFlagsEXT      flags,
                                VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT objectType,
                                uint64_t                                       object,
                                size_t                                         location,
                                int32_t                                        messageCode,
                                const char *                                   pLayerPrefix,
                                const char *                                   pMessage,
                                Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void debugReportMessageEXT( VULKAN_HPP_NAMESPACE::DebugReportFlagsEXT      flags,
                                VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT objectType,
                                uint64_t                                       object,
                                size_t                                         location,
                                int32_t                                        messageCode,
                                const std::string &                            layerPrefix,
                                const std::string &                            message,
                                Dispatch const & d                             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_GGP )
    //=== VK_GGP_stream_descriptor_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createStreamDescriptorSurfaceGGP( const VULKAN_HPP_NAMESPACE::StreamDescriptorSurfaceCreateInfoGGP * pCreateInfo,
                                                                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks *                  pAllocator,
                                                                  VULKAN_HPP_NAMESPACE::SurfaceKHR *                                 pSurface,
                                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createStreamDescriptorSurfaceGGP( const VULKAN_HPP_NAMESPACE::StreamDescriptorSurfaceCreateInfoGGP &  createInfo,
                                        Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                        Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type createStreamDescriptorSurfaceGGPUnique(
      const VULKAN_HPP_NAMESPACE::StreamDescriptorSurfaceCreateInfoGGP &  createInfo,
      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_GGP*/

#if defined( VK_USE_PLATFORM_VI_NN )
    //=== VK_NN_vi_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createViSurfaceNN( const VULKAN_HPP_NAMESPACE::ViSurfaceCreateInfoNN * pCreateInfo,
                                                   const VULKAN_HPP_NAMESPACE::AllocationCallbacks *   pAllocator,
                                                   VULKAN_HPP_NAMESPACE::SurfaceKHR *                  pSurface,
                                                   Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createViSurfaceNN( const VULKAN_HPP_NAMESPACE::ViSurfaceCreateInfoNN &                 createInfo,
                         Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                         Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createViSurfaceNNUnique( const VULKAN_HPP_NAMESPACE::ViSurfaceCreateInfoNN &                 createInfo,
                               Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                               Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_VI_NN*/

    //=== VK_KHR_device_group_creation ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result enumeratePhysicalDeviceGroupsKHR( uint32_t *                                            pPhysicalDeviceGroupCount,
                                                                  VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties,
                                                                  Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename PhysicalDeviceGroupPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties>,
              typename Dispatch                               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties, PhysicalDeviceGroupPropertiesAllocator>>::type
      enumeratePhysicalDeviceGroupsKHR( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
    template <typename PhysicalDeviceGroupPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties>,
              typename Dispatch                               = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
              typename B1                                     = PhysicalDeviceGroupPropertiesAllocator,
              typename std::enable_if<std::is_same<typename B1::value_type, PhysicalDeviceGroupProperties>::value, int>::type = 0>
    VULKAN_HPP_NODISCARD
      typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::PhysicalDeviceGroupProperties, PhysicalDeviceGroupPropertiesAllocator>>::type
      enumeratePhysicalDeviceGroupsKHR( PhysicalDeviceGroupPropertiesAllocator & physicalDeviceGroupPropertiesAllocator,
                                        Dispatch const & d                       VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_IOS_MVK )
    //=== VK_MVK_ios_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createIOSSurfaceMVK( const VULKAN_HPP_NAMESPACE::IOSSurfaceCreateInfoMVK * pCreateInfo,
                                                     const VULKAN_HPP_NAMESPACE::AllocationCallbacks *     pAllocator,
                                                     VULKAN_HPP_NAMESPACE::SurfaceKHR *                    pSurface,
                                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createIOSSurfaceMVK( const VULKAN_HPP_NAMESPACE::IOSSurfaceCreateInfoMVK &               createInfo,
                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                           Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createIOSSurfaceMVKUnique( const VULKAN_HPP_NAMESPACE::IOSSurfaceCreateInfoMVK &               createInfo,
                                 Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                 Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_IOS_MVK*/

#if defined( VK_USE_PLATFORM_MACOS_MVK )
    //=== VK_MVK_macos_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createMacOSSurfaceMVK( const VULKAN_HPP_NAMESPACE::MacOSSurfaceCreateInfoMVK * pCreateInfo,
                                                       const VULKAN_HPP_NAMESPACE::AllocationCallbacks *       pAllocator,
                                                       VULKAN_HPP_NAMESPACE::SurfaceKHR *                      pSurface,
                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createMacOSSurfaceMVK( const VULKAN_HPP_NAMESPACE::MacOSSurfaceCreateInfoMVK &             createInfo,
                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createMacOSSurfaceMVKUnique( const VULKAN_HPP_NAMESPACE::MacOSSurfaceCreateInfoMVK &             createInfo,
                                   Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                   Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_MACOS_MVK*/

    //=== VK_EXT_debug_utils ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createDebugUtilsMessengerEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCreateInfoEXT * pCreateInfo,
                                                              const VULKAN_HPP_NAMESPACE::AllocationCallbacks *              pAllocator,
                                                              VULKAN_HPP_NAMESPACE::DebugUtilsMessengerEXT *                 pMessenger,
                                                              Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::DebugUtilsMessengerEXT>::type
      createDebugUtilsMessengerEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCreateInfoEXT &      createInfo,
                                    Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                    Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::DebugUtilsMessengerEXT, Dispatch>>::type
      createDebugUtilsMessengerEXTUnique( const VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCreateInfoEXT &      createInfo,
                                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                          Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDebugUtilsMessengerEXT( VULKAN_HPP_NAMESPACE::DebugUtilsMessengerEXT      messenger,
                                        const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                        Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroyDebugUtilsMessengerEXT( VULKAN_HPP_NAMESPACE::DebugUtilsMessengerEXT messenger              VULKAN_HPP_DEFAULT_ARGUMENT_ASSIGNMENT,
                                        Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::DebugUtilsMessengerEXT      messenger,
                  const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                  Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void destroy( VULKAN_HPP_NAMESPACE::DebugUtilsMessengerEXT                        messenger,
                  Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                  Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void submitDebugUtilsMessageEXT( VULKAN_HPP_NAMESPACE::DebugUtilsMessageSeverityFlagBitsEXT       messageSeverity,
                                     VULKAN_HPP_NAMESPACE::DebugUtilsMessageTypeFlagsEXT              messageTypes,
                                     const VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCallbackDataEXT * pCallbackData,
                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    void submitDebugUtilsMessageEXT( VULKAN_HPP_NAMESPACE::DebugUtilsMessageSeverityFlagBitsEXT       messageSeverity,
                                     VULKAN_HPP_NAMESPACE::DebugUtilsMessageTypeFlagsEXT              messageTypes,
                                     const VULKAN_HPP_NAMESPACE::DebugUtilsMessengerCallbackDataEXT & callbackData,
                                     Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_FUCHSIA )
    //=== VK_FUCHSIA_imagepipe_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createImagePipeSurfaceFUCHSIA( const VULKAN_HPP_NAMESPACE::ImagePipeSurfaceCreateInfoFUCHSIA * pCreateInfo,
                                                               const VULKAN_HPP_NAMESPACE::AllocationCallbacks *               pAllocator,
                                                               VULKAN_HPP_NAMESPACE::SurfaceKHR *                              pSurface,
                                                               Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createImagePipeSurfaceFUCHSIA( const VULKAN_HPP_NAMESPACE::ImagePipeSurfaceCreateInfoFUCHSIA &     createInfo,
                                     Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                     Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createImagePipeSurfaceFUCHSIAUnique( const VULKAN_HPP_NAMESPACE::ImagePipeSurfaceCreateInfoFUCHSIA &     createInfo,
                                           Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                           Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_FUCHSIA*/

#if defined( VK_USE_PLATFORM_METAL_EXT )
    //=== VK_EXT_metal_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createMetalSurfaceEXT( const VULKAN_HPP_NAMESPACE::MetalSurfaceCreateInfoEXT * pCreateInfo,
                                                       const VULKAN_HPP_NAMESPACE::AllocationCallbacks *       pAllocator,
                                                       VULKAN_HPP_NAMESPACE::SurfaceKHR *                      pSurface,
                                                       Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createMetalSurfaceEXT( const VULKAN_HPP_NAMESPACE::MetalSurfaceCreateInfoEXT &             createInfo,
                             Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                             Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createMetalSurfaceEXTUnique( const VULKAN_HPP_NAMESPACE::MetalSurfaceCreateInfoEXT &             createInfo,
                                   Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                   Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_METAL_EXT*/

    //=== VK_EXT_headless_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createHeadlessSurfaceEXT( const VULKAN_HPP_NAMESPACE::HeadlessSurfaceCreateInfoEXT * pCreateInfo,
                                                          const VULKAN_HPP_NAMESPACE::AllocationCallbacks *          pAllocator,
                                                          VULKAN_HPP_NAMESPACE::SurfaceKHR *                         pSurface,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createHeadlessSurfaceEXT( const VULKAN_HPP_NAMESPACE::HeadlessSurfaceCreateInfoEXT &          createInfo,
                                Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createHeadlessSurfaceEXTUnique( const VULKAN_HPP_NAMESPACE::HeadlessSurfaceCreateInfoEXT &          createInfo,
                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#if defined( VK_USE_PLATFORM_DIRECTFB_EXT )
    //=== VK_EXT_directfb_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createDirectFBSurfaceEXT( const VULKAN_HPP_NAMESPACE::DirectFBSurfaceCreateInfoEXT * pCreateInfo,
                                                          const VULKAN_HPP_NAMESPACE::AllocationCallbacks *          pAllocator,
                                                          VULKAN_HPP_NAMESPACE::SurfaceKHR *                         pSurface,
                                                          Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createDirectFBSurfaceEXT( const VULKAN_HPP_NAMESPACE::DirectFBSurfaceCreateInfoEXT &          createInfo,
                                Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createDirectFBSurfaceEXTUnique( const VULKAN_HPP_NAMESPACE::DirectFBSurfaceCreateInfoEXT &          createInfo,
                                      Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                      Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_DIRECTFB_EXT*/

#if defined( VK_USE_PLATFORM_SCREEN_QNX )
    //=== VK_QNX_screen_surface ===

    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD Result createScreenSurfaceQNX( const VULKAN_HPP_NAMESPACE::ScreenSurfaceCreateInfoQNX * pCreateInfo,
                                                        const VULKAN_HPP_NAMESPACE::AllocationCallbacks *        pAllocator,
                                                        VULKAN_HPP_NAMESPACE::SurfaceKHR *                       pSurface,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const VULKAN_HPP_NOEXCEPT;
#  ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::SurfaceKHR>::type
      createScreenSurfaceQNX( const VULKAN_HPP_NAMESPACE::ScreenSurfaceCreateInfoQNX &            createInfo,
                              Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                              Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    ifndef VULKAN_HPP_NO_SMART_HANDLE
    template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
    VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::SurfaceKHR, Dispatch>>::type
      createScreenSurfaceQNXUnique( const VULKAN_HPP_NAMESPACE::ScreenSurfaceCreateInfoQNX &            createInfo,
                                    Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                    Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) const;
#    endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#  endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
#endif     /*VK_USE_PLATFORM_SCREEN_QNX*/

    operator VkInstance() const VULKAN_HPP_NOEXCEPT
    {
      return m_instance;
    }

    explicit operator bool() const VULKAN_HPP_NOEXCEPT
    {
      return m_instance != VK_NULL_HANDLE;
    }

    bool operator!() const VULKAN_HPP_NOEXCEPT
    {
      return m_instance == VK_NULL_HANDLE;
    }

  private:
    VkInstance m_instance = {};
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::ObjectType, VULKAN_HPP_NAMESPACE::ObjectType::eInstance>
  {
    using Type = VULKAN_HPP_NAMESPACE::Instance;
  };

  template <>
  struct CppType<VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT, VULKAN_HPP_NAMESPACE::DebugReportObjectTypeEXT::eInstance>
  {
    using Type = VULKAN_HPP_NAMESPACE::Instance;
  };

  template <>
  struct isVulkanHandleType<VULKAN_HPP_NAMESPACE::Instance>
  {
    static VULKAN_HPP_CONST_OR_CONSTEXPR bool value = true;
  };

  //=== VK_VERSION_1_0 ===

#ifndef VULKAN_HPP_NO_SMART_HANDLE
  template <typename Dispatch>
  class UniqueHandleTraits<Instance, Dispatch>
  {
  public:
    using deleter = ObjectDestroy<NoParent, Dispatch>;
  };
  using UniqueInstance = UniqueHandle<Instance, VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>;
#endif /*VULKAN_HPP_NO_SMART_HANDLE*/

  template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
  VULKAN_HPP_NODISCARD Result createInstance( const VULKAN_HPP_NAMESPACE::InstanceCreateInfo *  pCreateInfo,
                                              const VULKAN_HPP_NAMESPACE::AllocationCallbacks * pAllocator,
                                              VULKAN_HPP_NAMESPACE::Instance *                  pInstance,
                                              Dispatch const & d                                VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
  VULKAN_HPP_NODISCARD typename ResultValueType<VULKAN_HPP_NAMESPACE::Instance>::type
    createInstance( const VULKAN_HPP_NAMESPACE::InstanceCreateInfo &                    createInfo,
                    Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                    Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT );
#  ifndef VULKAN_HPP_NO_SMART_HANDLE
  template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
  VULKAN_HPP_NODISCARD typename ResultValueType<UniqueHandle<VULKAN_HPP_NAMESPACE::Instance, Dispatch>>::type
    createInstanceUnique( const VULKAN_HPP_NAMESPACE::InstanceCreateInfo &                    createInfo,
                          Optional<const VULKAN_HPP_NAMESPACE::AllocationCallbacks> allocator VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                          Dispatch const & d                                                  VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT );
#  endif /*VULKAN_HPP_NO_SMART_HANDLE*/
#endif   /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

  template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
  VULKAN_HPP_NODISCARD Result enumerateInstanceExtensionProperties( const char *                                pLayerName,
                                                                    uint32_t *                                  pPropertyCount,
                                                                    VULKAN_HPP_NAMESPACE::ExtensionProperties * pProperties,
                                                                    Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template <typename ExtensionPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::ExtensionProperties>,
            typename Dispatch                     = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
  VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::ExtensionProperties, ExtensionPropertiesAllocator>>::type
    enumerateInstanceExtensionProperties( Optional<const std::string> layerName VULKAN_HPP_DEFAULT_ARGUMENT_NULLPTR_ASSIGNMENT,
                                          Dispatch const & d                    VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT );
  template <typename ExtensionPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::ExtensionProperties>,
            typename Dispatch                     = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
            typename B1                           = ExtensionPropertiesAllocator,
            typename std::enable_if<std::is_same<typename B1::value_type, ExtensionProperties>::value, int>::type = 0>
  VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::ExtensionProperties, ExtensionPropertiesAllocator>>::type
    enumerateInstanceExtensionProperties( Optional<const std::string>    layerName,
                                          ExtensionPropertiesAllocator & extensionPropertiesAllocator,
                                          Dispatch const & d             VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT );
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

  template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
  VULKAN_HPP_NODISCARD Result enumerateInstanceLayerProperties( uint32_t *                              pPropertyCount,
                                                                VULKAN_HPP_NAMESPACE::LayerProperties * pProperties,
                                                                Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template <typename LayerPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::LayerProperties>, typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
  VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::LayerProperties, LayerPropertiesAllocator>>::type
    enumerateInstanceLayerProperties( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT );
  template <typename LayerPropertiesAllocator = std::allocator<VULKAN_HPP_NAMESPACE::LayerProperties>,
            typename Dispatch                 = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE,
            typename B1                       = LayerPropertiesAllocator,
            typename std::enable_if<std::is_same<typename B1::value_type, LayerProperties>::value, int>::type = 0>
  VULKAN_HPP_NODISCARD typename ResultValueType<std::vector<VULKAN_HPP_NAMESPACE::LayerProperties, LayerPropertiesAllocator>>::type
    enumerateInstanceLayerProperties( LayerPropertiesAllocator & layerPropertiesAllocator, Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT );
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

  //=== VK_VERSION_1_1 ===

  template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
  VULKAN_HPP_NODISCARD Result enumerateInstanceVersion( uint32_t *         pApiVersion,
                                                        Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT ) VULKAN_HPP_NOEXCEPT;
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template <typename Dispatch = VULKAN_HPP_DEFAULT_DISPATCHER_TYPE>
  VULKAN_HPP_NODISCARD typename ResultValueType<uint32_t>::type enumerateInstanceVersion( Dispatch const & d VULKAN_HPP_DEFAULT_DISPATCHER_ASSIGNMENT );
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

}  // namespace VULKAN_HPP_NAMESPACE
#endif
