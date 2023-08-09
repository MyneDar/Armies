#include "..\headers\weapons\weapon.hpp"
#include <cstdlib>

int Weapon::UseForAttack(){
    return rand() % maxDamage + MinDamage;
}
