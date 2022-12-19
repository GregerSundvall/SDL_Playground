﻿#pragma once
#include <vector>
#include "Components.h"


class EntitySystem;

class CollisionSystem
{
    std::vector<Collider> colliders;
    EntitySystem* entitySystem;
    
public:
    CollisionSystem(EntitySystem* entitySystem) { this->entitySystem = entitySystem; }

    void Update();
    // int Sweep(int colliderID, Float2 velocity);
    void ScanOverlaps(int colliderID);
    void AddOffset(int colliderID, Float2 offset) {colliders[colliderID].Position += offset;}
    int Register(int EntityID, Float2 position, Float2 size);
    void Unregister(int index);
    void Destructor();
    
};
