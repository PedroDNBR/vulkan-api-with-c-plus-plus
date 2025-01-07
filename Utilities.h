#pragma once

// Indices (locations) of Queue Families (if they exist at all)
struct QueueFamilyIndices {
	int graphicsFamily = -1;			// Location of graphics Queue Family

	// Check if queue families are valid
	bool isValid()
	{
		return graphicsFamily >= 0;
	}
};
