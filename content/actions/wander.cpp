#include "wander.h"

#include <iostream>

#include "engine.h"
#include "move.h"
#include "randomness.h"
#include "rest.h"

Result Wander::perform(Engine& engine) {
    Vec pos = actor->get_position();
    std::vector<Vec> neighbors = engine.dungeon.neighbors(pos);
    // randomize directions
    shuffle(std::begin(neighbors), std::end(neighbors));
    for (const Vec& neighbor : neighbors) {
        Tile& tile = engine.dungeon.tiles(neighbor);
        if (!tiles.is_wall() && !tile.actor) {
            Vec direction = neighbor - position;
            return alternative(Move{direction});
        }
    }
    return alternative(Rest{});
}