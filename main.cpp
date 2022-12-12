#include "engine.h"
#include "heros.h"
#include "monsters.h"
#include "monstertype.h"

int main() {
    std::string filename{"settings.txt"};
    Settings settings = read_settings(filename);
    Engine engine{settings};

    engine.create_hero(Heros::dragon);
    for (int i = 0; i < 20; ++i) {
        MonsterType new_monster_type = goblin();
        engine.create_monster(new_monster_type);
    }
    /* for (int i = 0; i < 10; ++i) {
        MonsterType zombie = zombie();
        engine.create_monster(zombie);
    } */
    engine.run();
}
