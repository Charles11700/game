#pragma once

#include "monstertype.h"
#include "move.h"
#include "none.h"

struct MonsterType {
    std::string name;
    int spead, max_health;
    std::shared_ptr<Weapon> weapon;
    std::function<std::unique_ptr<Action>(Engine& engine, Monster& monster)>
        behavior;
    std::unique_ptr<Action> default_behavior(Engine& engine, Monster& me);
};
const MonsterType goblin{"goblin", 1, std::make_shared<None>()};
const MonsterType zombie{"zombie", 1, std::make_shared<None>()};
const MonsterType demon{"demon", 1, std::make_shared<None>()};