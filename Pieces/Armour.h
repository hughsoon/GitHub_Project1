#ifndef ARMOUR_H_INCLUDED
#define ARMOUR_H_INCLUDED

#include "Head.h"
#include "Chest.h"
#include "Arms.h"
#include "Legs.h"

class Armour
{

private:

    // Member variables
    Head helmet;
    Chest breastplate;
    Arms gauntlets;
    Legs greaves;
    int totalArmour;
    double totalWeight;

public:
    // Default Constructor: creates a set with dummy pieces that have zero defense and weight.
    Armour(): helmet(), breastplate(), gauntlets(), greaves()
    {
        totalArmour = helmet.getTotal() + breastplate.getTotal() + gauntlets.getTotal() + greaves.getTotal();
        totalWeight = helmet.getWeight() + breastplate.getWeight() + gauntlets.getWeight() + greaves.getWeight();
    }

    // Proper Constructor: creates a set from armour pieces according to specification.
    Armour(Head head, Chest chest, Arms arms, Legs legs): helmet(head), breastplate(chest), gauntlets(arms), greaves(legs),
    totalArmour(helmet.getTotal() + breastplate.getTotal() + gauntlets.getTotal() + greaves.getTotal()), totalWeight(helmet.getWeight() +
    breastplate.getWeight() + gauntlets.getWeight() + greaves.getWeight())
    {
    }

    // Value Setter: access function to swap out pieces of armour between comparisons.
    void setValues(Head head, Chest chest, Arms arms, Legs legs);

    //Getters
    Head getHelmet() {return helmet;}
    Chest getBreastplate() {return breastplate;}
    Arms getGauntlets() {return gauntlets;}
    Legs getGreaves() {return greaves;}
    double getWeight() {return totalWeight;}
    int getArmour() {return totalArmour;}

    friend bool operator>= (Armour &a1, Armour &a2);

};

#endif // ARMOUR_H_INCLUDED
