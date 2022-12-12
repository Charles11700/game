#pragma once
#include "event.h"
class Actor;

class TakeHealth : public Event {
public:
    TakeHealth(Actor& actor, int damage);
    void execute(Engine& engine) override;

private:
    Actor& actor;
    int damage;
};