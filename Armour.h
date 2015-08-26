#ifndef ARMOUR_H_INCLUDED
#define ARMOUR_H_INCLUDED

#include "Head.h"
#include "Chest.h"
#include "Arms.h"
#include "Legs.h"

class PureArmour;

class Armour
{

friend class PureArmour;

private:

    // Member variables
    Head helmet;
    Chest breastplate;
    Arms gauntlets;
    Legs greaves;

    int regPhysArmour;
    int regMagArmour;
    int regFireArmour;
    int regLightArmour;
    int totalRegArmour;

    double modPhysArmour;
    double modMagArmour;
    double modFireArmour;
    double modLightArmour;
    double totalModArmour;

    double totalWeight;

public:
    // Default Constructor: creates a set with dummy pieces that have zero defense and weight.
    Armour(): helmet(), breastplate(), gauntlets(), greaves()
    {
        totalRegArmour = helmet.getTotal() + breastplate.getTotal() + gauntlets.getTotal() + greaves.getTotal();
        totalWeight = helmet.getWeight() + breastplate.getWeight() + gauntlets.getWeight() + greaves.getWeight();
    }


    // Proper Constructor: creates a set from armour pieces according to specification.
    Armour(Head head, Chest chest, Arms arms, Legs legs): helmet(head), breastplate(chest), gauntlets(arms), greaves(legs),
    regPhysArmour(helmet.getPhys() + breastplate.getPhys() + gauntlets.getPhys() + greaves.getPhys()),
    regMagArmour(helmet.getMag() + breastplate.getMag() + gauntlets.getMag() + greaves.getMag()),
    regFireArmour(helmet.getFire() + breastplate.getFire() + gauntlets.getFire() + greaves.getFire()),
    regLightArmour(helmet.getLight() + breastplate.getLight() + gauntlets.getLight() + greaves.getLight()),
    totalRegArmour(helmet.getTotal() + breastplate.getTotal() + gauntlets.getTotal() + greaves.getTotal()), totalWeight(helmet.getWeight() +
    breastplate.getWeight() + gauntlets.getWeight() + greaves.getWeight())
    {
        modPhysArmour = 0;
        modMagArmour = 0;
        modFireArmour = 0;
        modLightArmour = 0;
        totalModArmour = 0;
    }

    // Value Setter: access function to swap out pieces of armour between comparisons.
    void setValues(Head head, Chest chest, Arms arms, Legs legs);


    //Getters
    Head getHelmet() {return helmet;}
    Chest getBreastplate() {return breastplate;}
    Arms getGauntlets() {return gauntlets;}
    Legs getGreaves() {return greaves;}

    int getRegPhys() {return regPhysArmour;}
    int getRegMag() {return regMagArmour;}
    int getRegFire() {return regFireArmour;}
    int getRegLight() {return regLightArmour;}
    int getTotalReg() {return totalRegArmour;}

    double getModPhys() {return modPhysArmour;}
    double getModMag() {return modMagArmour;}
    double getModFire() {return modFireArmour;}
    double getModLight() {return modLightArmour;}
    double getTotalMod() {return totalModArmour;}

    double getWeight() {return totalWeight;}

    friend bool operator>= (Armour &a1, Armour &a2);

};

#endif // ARMOUR_H_INCLUDED
