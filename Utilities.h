#pragma once

const std::vector<const char*> deviceExtensions = 
{
	VK_KHR_SWAPCHAIN_EXTENSION_NAME
};

// Indices (locations) of Queue Families (if they exist at all)
struct QueueFamilyIndices 
{
	int graphicsFamily = -1;			// Location of graphics Queue Family
	int presentationFamily = -1;		// Location of presentation Queue Family

	// Check if queue families are valid
	bool isValid()
	{
		return graphicsFamily >= 0 && presentationFamily >= 0;
	}
};

struct SwapChainDetails
{
	VkSurfaceCapabilitiesKHR surfaceCapabilities;			// Surface properties, e.g. image size/extent
	std::vector<VkSurfaceFormatKHR> formats;				// Surface image fortas, e.g. RGBA and size of each color
	std::vector<VkPresentModeKHR> presentationModes;		// How images should be presented to screen
};
