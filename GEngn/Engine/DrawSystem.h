﻿#pragma once
#include <SDL_render.h>
#include <vector>
#include "Components.h"

class DrawSystem
{
    SDL_Renderer* renderer;
    std::vector<DrawObject> objectsToDraw;
    std::vector<DrawObject> lvl0StuffToDraw; // Background objects
    std::vector<DrawObject> lvl1StuffToDraw; // Enemies?
    std::vector<DrawObject> lvl2StuffToDraw; // Player?
    std::vector<SDL_Texture*> lvl3StuffToDraw; // UI

public:
    DrawSystem(SDL_Renderer* renderer)
    {
        objectsToDraw.reserve(1000);
        this->renderer = renderer;
    }
    
    void Add(Float2 position, Float2 size, Sprite sprite);
    void DrawAll();
    void Draw(DrawObject& drawObject);

};
