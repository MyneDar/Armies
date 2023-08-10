#include "..\weapons\weapon.h"

#ifndef FIGHTUNIT_H
#define FIGHTUNIT_H

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