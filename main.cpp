#include <iostream>
#include "headers\weapons\weapon.hpp"
#include "headers\units\unit.hpp"

int main(){
    FightUnit unit1(1);
    FightUnit unit2(2);

    while(true){
        auto dmg1 = unit1.makeAnAttack();
        auto dmg2 = unit2.makeAnAttack();

        unit1.getHit(dmg2);
        unit2.getHit(dmg1);

        if (unit1.isDead())
        {
            std::cout << "Unit 2 has won!" << std::endl;
            break;
        }

        if (unit2.isDead())
        {
            std::cout << "Unit 1 has won!" << std::endl;
            break;
        }
        
        
    }
}