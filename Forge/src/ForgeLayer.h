#pragma once
#include <glm/glm.hpp>
#include "Anvil.hpp"
#include "pannels/SceneView.h"
#include "GLFW/glfw3.h"

class ForgeLayer :
    public Anvil::AnvilLayer
{
public:

    ForgeLayer(SceneManager& manager);

    void Attach() override;
    void Update() override;
    void OnGUI()  override;
    void Detach() override;



private:
    SceneManager& scManager;
    SCENE activeScene;
    Anvil::Camera& camera;
};

