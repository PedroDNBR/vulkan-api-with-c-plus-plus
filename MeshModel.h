#pragma once

#include <vector>

#include <glm/glm.hpp>

#include <assimp/scene.h>

#include "Mesh.h"

class MeshModel
{
public:
	MeshModel();
	MeshModel(std::vector<Mesh> newMeshList);

	size_t getMeshCount();
	Mesh* getMesh(size_t index);

	glm::mat4 getModel();
	glm::mat4& getModelRef();

	void setModel(glm::mat4 newModel);

	void destroyMeshModel();

	static std::vector<std::string> LoadMaterials(const aiScene* scene);
	static std::vector<Mesh> LoadNode(VkPhysicalDevice newPhysicalDevice, VkDevice newDevice, VkQueue transferQueue, VkCommandPool transferCommandPoolm, aiNode* node, const aiScene* scene, std::vector<int> matToTex);
	static Mesh loadMesh(VkPhysicalDevice newPhysicalDevice, VkDevice newDevice, VkQueue transferQueue, VkCommandPool transferCommandPool, aiMesh* mesh, const aiScene* scene, std::vector<int> matToTex);
	
	~MeshModel();

private:
	std::vector<Mesh> meshList;
	glm::mat4 model;

};

