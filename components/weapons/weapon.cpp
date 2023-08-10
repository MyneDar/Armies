#include "weapon.h"
#include <cstdlib>

int Weapon::UseForAttack(){
    return rand() % maxDamage + MinDamage;
}
