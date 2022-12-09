#pragma once

#include "monstertype.h"
#include "move.h"
#include "none.h"

namespace Monsters {
constexpr int default_speed{8};
std::unique_ptr<Action> default_behavior(Engine& engine, Monster& me);
MonsterType goblin();
MonsterType zombie();
MonsterType demon();
};  // namespace Monsters