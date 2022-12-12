#include "opendoor.h"

#include <updatefov.h>

#include <iostream>

#include "actor.h"
#include "engine.h"

OpenDoor::OpenDoor(Door& door) : door{door} {}

Result OpenDoor::perform(Engine& engine) {
    door.open();
    engine.events.add(UpdateFOV{});
    return success();
}