#include "..\weapons\weapon.hpp"

#ifndef FIGHTUNIT
#define FIGHTUNIT

class FightUnit {
    protected:
        int healthPoints;
        int strength;
        int armor;
        Weapon weapon;
    public:
        FightUnit(int healthPoints = 1);
        int makeAnAttack();
        void getHit(int damage);
        int getHealthPoints();
        bool isDead();
        ~FightUnit();
};

#endif