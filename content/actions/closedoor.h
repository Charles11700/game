#pragma once
#include "action.h"
#include "door.h"

class CloseDoor : public Action {
public:
    CloseDoor(Door& door);
    Result perform(Engine& engine) override;

private:
    Door& door;
};