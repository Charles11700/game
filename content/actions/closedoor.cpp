#include "closedoor.h"

#include <updatefov.h>

#include <iostream>

#include "actor.h"
#include "engine.h"

CloseDoor::CloseDoor(Door& door) : door{door} {}

Result CloseDoor::perform(Engine& engine) {
    door.close();
    engine.events.add(UpdateFOV{});
    return success();
}