#ifndef WEAPON_H
#define WEAPON_H

class Weapon {
    protected:
        int maxDamage = 3;
        int MinDamage = 1;

    public:
        int UseForAttack();
};

#endif