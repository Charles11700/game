#include "engine.h"
#include "heros.h"
#include "monsters.h"
#include "monstertype.h"

int main() {
    std::string filename{"settings.txt"};
    Settings settings = read_settings(filename);
    Engine engine{settings};

    engine.create_hero(Heros::dragon);
    MonsterType new_monster_type = goblin();
    for (int i = 0; i < 20; ++i) {
        engine.create_monster(new_monster_type);
    }
    /* MonsterType zombie = zombie();
    for (int i = 0; i < 10; ++i) {
        engine.create_monster(zombie);
    }*/
}
