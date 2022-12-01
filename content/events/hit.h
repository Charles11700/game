#pragma once

#include "event.h"
class Actor;  // forward declaration

class Hit : public Event {
public:
    Hit(Actor& actor, int damage);
    void execute(Engine& engine) override;

private:
    Actor& actor;
    int damage;
};