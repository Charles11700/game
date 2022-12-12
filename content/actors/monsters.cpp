#include "monsters.h"

#include <iostream>

#include "action.h"
#include "mace.h"
#include "monster.h"
#include "monstertype.h"
#include "randomness.h"

std::unique_ptr<Action> default_behavior(Engine& engine, Monster& me) {
    if (me.is_visible() && engine.hero) {
        Vec from = me.get_position();
        Vec to = engine.hero->get_position();
        std::vector<Vec> path = engine.dungeon.calculate_path(from, to);
        if (path.size() > 1) {
            Vec direction = path.at(1) - path.at(0);
            return std::make_unique<Move>(direction);
        }
    }
    if (probability(66)) {
        return std::make_unique<Wander>();
    } else {
        return std::make_unique<Rest>();
    }
}
constexpr int default_speed = 8;
MonsterType goblin() {
    int health = 4;
    return {"goblin", default_speed, health, std::make_shared<Mace>(1),
            default_behavior};
}
MonsterType zombie() {
    int health = 2;
    return {"zombie", default_speed, health, std::make_shared<Mace>(1),
            default_behavior};
}