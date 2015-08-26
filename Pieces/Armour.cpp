#include "Armour.h"

//Armour Operators
bool operator>= (Armour &a1, Armour &a2)
{
    return a1.totalArmour >= a2.totalArmour;
}

void Armour::setValues(Head head, Chest chest, Arms arms, Legs legs)
{
    helmet = head;
    breastplate = chest;
    gauntlets = arms;
    greaves = legs;
    totalArmour = helmet.getTotal() + breastplate.getTotal() + gauntlets.getTotal() + greaves.getTotal();
    totalWeight = helmet.getWeight() + breastplate.getWeight() + gauntlets.getWeight() + greaves.getWeight();
}
