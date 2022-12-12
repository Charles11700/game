#include "take_health.h"

#include "actor.h"
#include "engine.h"

TakeHealth::TakeHealth(Actor& actor, int damage)
    : actor{actor}, damage{damage} {}

void TakeHealth::execute(Engine& engine) {
    actor.take_damage(-damage);
}