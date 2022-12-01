#pragma once
#include "action.h"

class OpenDoor : public Action {
public:
    Result perform(Enginge& engine) override;
};