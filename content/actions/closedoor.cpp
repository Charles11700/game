#include "closedoor.h"

#include <updatefov.h>

#include <iostream>

#include "actor.h"
#include "engine.h"

Result CloseDoor::perform(Engine& engine) {
    Vec position = actor->get_position();
    std::vector<Vec> neighbors = engine.dungeon.neighbors(position);
    bool closed_any_doors = false;
    for (const Vec& neighbor : neighbors) {
        Tile& tile = engine.dungeon.tiles(neighbor);
        if (tile.is_door()) {
            Door& door = engine.dungeon.doors.at(neighbor);
            door.close();
            // tile.walkable = false;
            closed_any_doors = true;
            // std::cout << "Door at " << neighbor << '\n'; // REMOVE        }
        } else {
            std::cout << "Floor at " << neighbor << '\n';  // REMOVE
        }
    }
    if (closed_any_doors) {
        engine.events.add(UpdateFOV{});
        return success();
    } else {
        return failure();
    }
}