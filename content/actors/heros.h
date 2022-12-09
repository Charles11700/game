#pragma once

#include "herotype.h"
#include "mace.h"
#include "move.h"
#include "none.h"
#include "rest.h"

namespace Heros {

const std::unordered_map<std::string, Reaction> key_bindings = {
    {"Right",
     []() {
         return std::make_unique<Move>(Vec{1, 0});
     }},
    {"Left",
     []() {
         return std::make_unique<Move>(Vec{-1, 0});
     }},
    {"Up",
     []() {
         return std::make_unique<Move>(Vec{0, 1});
     }},
    {"Down",
     []() {
         return std::make_unique<Move>(Vec{0, -1});
     }},
    {"R",
     []() {
         return std::make_unique<Rest>(Vec{0, 0});
     }},

};

constexpr int default_speed{8};
// const HeroType nobody{"none", default_speed, 1, std::make_shared<None>(),
// {}};
const HeroType dragon{"dragon", default_speed, 1, std::make_shared<Mace>(2),
                      key_bindings};
}  // namespace Heros
