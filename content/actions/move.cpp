#include "move.h"

#include <iostream>

#include "actor.h"

Move::Move(Vec direction) : direction{direction} {}

Result Move::perform(Engine&) {
    Vec position = actor->get_position();
    Vec new_position = position + direction;
    actor->change_direction(direction);
    actor->move_to(new_position);
    return success();  // always return
}