﻿#pragma once
#include <string>
#include "../Engine/Engine.h"
struct Float2;


class Player
{
public:
    bool isAlive = true;
    
private:
    std::string name;
    int score = 0;
    int entityID;

public:
    Player(std::string name, float size);

    int EID(){ return entityID; }
    void UpdateEID(int eID) { entityID = eID; }
    void WasKilled();
    Float2* GetPosition();
    void SetVelocity(Float2 velocity);
};
