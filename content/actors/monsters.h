#pragma once

#include "action.h"
#include "engine.h"
#include "monstertype.h"
#include "move.h"
#include "none.h"
#include "rest.h"
#include "wander.h"

std::unique_ptr<Action> default_behavior(Engine& engine, Monster& me);
MonsterType goblin();
MonsterType zombie();
MonsterType demon();