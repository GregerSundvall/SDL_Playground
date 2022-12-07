﻿#pragma once
#include <vector>
#include <array>
#include <random>

struct Enemy
{
    float x;
    float y;
    float speed;

    Enemy()
    {
        x = -1;
        y = -1;
        speed = 0;
    }

    Enemy(float x, float y, float speed)
    {
        this->x = x;
        this->y = y;
        this->speed = speed;
    }
};

class Enemies
{
public:
    // Enemy* enemies;
    std::vector<Enemy> transforms;
    int enemyCount = 0;
    int capacity = 16;
    int nextFreshIndex = 0;
    std::vector<int> recycledIndexes;
    int enemiesToSpawn = 10000;
    
    std::default_random_engine generator;
    
    Enemies()
    {
        // enemies = new Enemy[capacity];
        generator.seed(static_cast<unsigned>(time(nullptr)));
    }

    void Update();
    void SpawnEnemy(float x, float y, float speed);
    void DestroyEnemy(int id);


};
