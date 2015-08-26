#include "Armour.h"

//Armour Operators
bool operator>= (Armour &a1, Armour &a2)
{
    return a1.totalModArmour >= a2.totalModArmour;
}

void Armour::setValues(Head head, Chest chest, Arms arms, Legs legs)
{
    helmet = head;
    breastplate = chest;
    gauntlets = arms;
    greaves = legs;
    totalRegArmour = helmet.getTotal() + breastplate.getTotal() + gauntlets.getTotal() + greaves.getTotal();
    totalWeight = helmet.getWeight() + breastplate.getWeight() + gauntlets.getWeight() + greaves.getWeight();

    regPhysArmour = helmet.getPhys() + breastplate.getPhys() + gauntlets.getPhys() + greaves.getPhys();
    regMagArmour = helmet.getMag() + breastplate.getMag() + gauntlets.getMag() + greaves.getMag();
    regFireArmour = helmet.getFire() + breastplate.getFire() + gauntlets.getFire() + greaves.getFire();
    regLightArmour = helmet.getLight() + breastplate.getLight() + gauntlets.getLight() + greaves.getLight();


}
