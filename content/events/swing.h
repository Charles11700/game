#pragma once

#include "actor.h"
#include "event.h"

class Swing : public Event {
public:
    Swing(Sprite& sprite, Vec direction, Actor& defender, Actor& attacker,
          int damage);
    //                                           ^needed for hit^
    void execute(Engine& engine) override;
    void when_done(Engine& engine) override;

private:
    Sprite& sprite;
    Sprite copy;
    Actor& defender;
    int damage;
    double starting_angle, delta;
    Actor& attacker;
};