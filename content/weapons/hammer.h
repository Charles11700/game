#pragma once
#include "take_health.h"
#include "weapon.h"

class Hammer : public Weapon {
public:
    Hammer(int damage);
    void use(Engine& engine, Actor& attacker, Actor& defender) override;
    void TakeHealth(Actor& actor, int damage);
};