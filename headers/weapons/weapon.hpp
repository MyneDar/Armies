#ifndef WEAPON
#define WEAPON

class Weapon {
    protected:
        int maxDamage = 3;
        int MinDamage = 1;

    public:
        int UseForAttack();
};

#endif