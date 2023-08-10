#include "..\weapons\weapon.h"
#include "unit.h"


FightUnit::FightUnit(int healthPoints = 1){
    this->healthPoints = healthPoints;
    this->armor = 0;
    this->strength = 1;
};

int FightUnit::makeAnAttack(){
    return strength + weapon.UseForAttack();
};

void FightUnit::getHit(int damage){
    healthPoints -= damage - armor;
}

int FightUnit::getHealthPoints(){
    return healthPoints;
};

bool FightUnit::isDead(){
    return healthPoints < 0;
};

FightUnit::~FightUnit(){};