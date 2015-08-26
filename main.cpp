#include "HeadArray.h"
#include "ChestArray.h"
#include "ArmsArray.h"
#include "LegsArray.h"
#include "DataArray.h"
#include "PureArmour.h"
#include <iostream>

using namespace std;

int main()
{
    //Declaration of all items. Items separated after an empty line were added from my first character, Spire.

    //Helmets
    Head No_Helm("UNEQUIPPED", 0, 0, 0, 0, 0.0);
    Head Knight_Helm("Knight Helm", 14, 6, 8, 5, 4.2);
    Head Elite_Knight_Helm("Elite Knight Helm", 15, 7, 8, 6, 4.5);
    Head Wanderer_Hood("Wanderer Hood", 9, 8, 10, 9, 1.4);
    Head Thief_Mask("Thief Mask", 9, 8, 5, 6, 1.2);
    Head Pharis_Hat("Pharis' Hat", 7, 5, 7, 6, 1.2);
    Head Eastern_Helm("Eastern Helm", 17, 6, 12, 7, 4.7);
    Head Shadow_Mask("Shadow Mask", 9, 5, 6, 6, 0.9);
    Head Silver_Knight_Helm("Silver Knight Helm", 21, 10, 11, 14, 4.8);
    Head Helm_of_Favour("Helm of Favour", 18, 10, 11, 7, 4.5);
    Head Stone_Helm("Stone Helm", 35, 17, 21, 21, 6.8);
    Head Havels_Helm("Havel's Helm", 36, 22, 22, 18, 7.5);

    Head Standard_Helm("Standard Helm", 14, 8, 8, 3, 3.5);
    Head Chain_Helm("Chain Helm", 12, 10, 8, 3, 3.0);
    Head Brigand_Hood("Brigand Hood", 9, 8, 5, 6, 1.2);
    Head Sorcerer_Hat("Sorcerer Hat", 8, 10, 5, 6, 0.9);
    Head Black_Sorcerer_Hat("Black Sorcerer Hat", 5, 11, 8, 8, 0.7);
    Head Tattered_Cloth_Hood("Tattered Cloth Hood", 8, 9, 12, 6, 1.1);
    Head Priets_Hat("Priest's Hat", 8, 9, 5, 7, 1.2);
    Head Iron_Helm("Iron Helm", 14, 10, 10, 9, 4.5);
    Head Black_Iron_Helm("Black Iron Helm", 27, 11, 19, 8, 6.0);
    Head Crystalline_Helm("Crystalline Helm", 25, 8, 6, 2, 4.2);
    Head Mask_of_the_Sealer("Mask of the Sealer", 12, 12, 7, 9, 1.5);
    Head Gold_Hemmed_Black_Hood("Gold-Hemmed Black Hood", 11, 15, 22, 8, 1.4);
    Head Maiden_Hood("Maiden Hood", 7, 8, 5, 6, 0.8);
    Head Dingy_Hood("Dingy Hood", 6, 8, 5, 6, 0.8);
    Head Hollow_Warrior_Helm("Hollow Warrior Helm", 10, 6, 5, 6, 2.6);
    Head Hollow_Soldier_Helm("Hollow Soldier Helm", 10, 6, 6, 4, 3.0);
    Head Balder_Helm("Balder Helm", 14, 6, 8, 6, 4.2);
    Head Black_Knight_Helm("Black Knight Helm", 21, 11, 18, 6, 5.0);
    Head Six_Eyed_Helm_of_the_Channelers("Six-Eyed Helm of the Channelers", 20, 18, 17, 13, 3.9);
    Head Fang_Boar_Helm("Fang Boar Helm", 26, 5, 4, 4, 8.0);
    Head Gargoyle_Helm("Gargoyle Helm", 15, 15, 15, 15, 3.5);
    Head Mask_of_the_Child("Mask of the Child", 6, 10, 8, 10, 1.2);
    Head Sack("Sack", 6, 6, 8, 4, 0.6);
    Head Sunlight_Maggot("Sunlight_Maggot", 6, 5, 24, 13, 1.4);
    Head Symbol_of_Avarice("Symbol of Avarice", 21, 8, 2, 2, 10.0);

    //Breastplates
    Chest No_Armour("UNEQUIPPED", 0, 0, 0, 0, 0.0);
    Chest Knight_Armour("Knight Armour", 37, 16, 18, 13, 10.9);
    Chest Elite_Knight_Armour("Elite Knight Helm", 39, 17, 18, 15, 11.7);
    Chest Wanderer_Coat("Wanderer Coat", 23, 21, 26, 23, 3.5);
    Chest Black_Leather_Armour("Black Leather Armour", 23, 20, 14, 16, 3.1);
    Chest Leather_Armour("Leather Armour", 24, 20, 12, 23, 4.7);
    Chest Eastern_Armour("Eastern Armour", 45, 15, 33, 18, 12.3);
    Chest Shadow_Garb("Shadow Garb", 23, 12, 16, 17, 2.3);
    Chest Silver_Knight_Armour("Silver Knight Armour", 2, 26, 29, 34, 12.0);
    Chest Embraced_Armour_of_Favour("Embraced Armour of Favour", 48, 23, 30, 19, 11.7);
    Chest Stone_Armour("Stone Armour", 91, 45, 54, 54, 17.6);
    Chest Havels_Armour("Havel's Armour", 92, 56, 54, 49, 19.5);

    Chest Hard_Leather_Armour("Hard Leather Armour", 26, 20, 13, 23, 5.9);
    Chest Chain_Armour("Chain Armour", 30, 21, 16, 7, 6.0);
    Chest Brigand_Armour("Brigand Armour", 23, 20, 13, 17, 3.1);
    Chest Sorcerer_Cloak("Sorcerer Cloak", 20, 27, 13, 17, 2.3);
    Chest Black_Sorcerer_Cloak("Black Sorcerer Cloak", 13, 28, 21, 21, 1.8);
    Chest Tattered_Cloth_Road("Tattered Cloth Robe", 21, 23, 30, 17, 2.7);
    Chest Holy_Robe("Holy Robe", 22, 23, 14, 19, 4.0);
    Chest Armour_of_the_Sun("Armour of the Sun", 35, 21, 21, 19, 9.0);
    Chest Black_Iron_Armour("Black Iron Helm", 68, 30, 51, 21, 15.6);
    Chest Crystalline_Armour("Crystalline Armour", 59, 21, 15, 7, 10.9);
    Chest Crimson_Robe("Crimson Robe", 32, 33, 19, 24, 3.9);
    Chest Gold_Hemmed_Black_Cloak("Gold-Hemmed Black Cloak", 31, 38, 58, 21, 3.5);
    Chest Maiden_Robe("Maiden Robe", 19, 22, 13, 17, 2.0);
    Chest Dingy_Robe("Dingy Robe", 23, 33, 19, 25, 3.0);
    Chest Hollow_Warrior_Armour("Hollow Warrior Armour", 24, 16, 12, 17, 6.6);
    Chest Hollow_Soldier_Armour("Hollow Soldier Armour", 26, 16, 17, 10, 7.8);
    Chest Balder_Armour("Balder Armour", 37, 15, 18, 15, 10.9);
    Chest Steel_Armour("Steel Armour", 42, 22, 21, 13, 14.0);
    Chest Black_Knight_Armour("Black Knight Armour", 57, 29, 48, 17, 13.0);
    Chest Robe_of_the_Channelers("Robe of the Channelers", 53, 45, 45, 35, 10.1);

    //Gauntlets
    Arms No_Gauntlets("UNEQUIPPED", 0, 0, 0, 0, 0.0);
    Arms Knight_Gauntlets("Knight Gauntlets", 17, 7, 8, 4, 3.5);
    Arms Elite_Knight_Gauntlets("Elite Knight Gauntlets", 18, 7, 8, 5, 3.7);
    Arms Wanderer_Manchette("Wanderer Manchetter", 14, 12, 15, 13, 2.1);
    Arms Black_Leather_Gloves("Black Leather Gloves", 13, 12, 8, 9, 1.8);
    Arms Leather_Gloves("Leather Gloves", 12, 12, 6, 13, 2.8);
    Arms Eastern_Gauntlets("Eastern Gauntlets", 6, 1, 4, 2, 1.5);
    Arms Shadow_Gauntlets("Shadow Gauntlets", 13, 7, 9, 10, 1.4);
    Arms Silver_Knight_Gauntlets("Silver Knight Gauntlets", 25, 12, 14, 16, 5.5);
    Arms Gauntlets_of_Favour("Gauntlets of Favour", 21, 10, 12, 8, 5.0);
    Arms Stone_Gauntlets("Stone Gauntlets", 54, 27, 33, 33, 10.4);
    Arms Havels_Gauntlets("Havel's Gauntlets", 54, 32, 32, 29, 11.5);

    Arms Hard_Leather_Gauntlets("Hard Leather Gauntlets", 13, 12, 7, 13, 3.5);
    Arms Leather_Gauntlets("Leather Gauntlets", 12, 10, 8, 4, 3.6);
    Arms Brigand_Gauntlets("Brigand Gauntlets", 14, 12, 8, 10, 1.8);
    Arms Sorcerer_Gauntlets("Sorcerer Gauntlets", 12, 16, 8, 10, 1.3);
    Arms Black_Sorcerer_Gauntlets("Black Sorcerer Gauntlets", 8, 17, 12, 12, 1.0);
    Arms Tattered_Cloth_Manchette("Tattered Cloth Manchette", 12, 14, 18, 10, 1.6);
    Arms Traveling_Gloves("Traveling Gloves", 5, 5, 3, 4, 0.7);
    Arms Iron_Bracelet("Iron Bracelet", 17, 10, 10, 9, 4.3);
    Arms Black_Iron_Gauntlets("Black Iron Gauntlets", 40, 17, 30, 13, 9.2);
    Arms Crystalline_Gauntlets("Crystalline Gauntlets", 37, 12, 9, 4, 6.4);
    Arms Crimson_Gloves("Crimson Gloves", 7, 7, 4, 5, 0.8);
    Arms Gold_Hemmed_Black_Gloves("Gold-Hemmed Black Gloves", 12, 13, 24, 8, 1.2);
    Arms Maiden_Gloves("Maiden Gloves", 11, 13, 8, 10, 1.2);
    Arms Dingy_Gloves("Dingy Gloves", 9, 13, 8, 10, 1.2);
    Arms Black_Knight_Gauntlets("Black Knight Gauntlets", 26, 14, 23, 8, 6.0);
    Arms Gauntlets_of_the_Channelers("Gauntlets of the Channelers", 17, 13, 13, 10, 3.0);


    //Greaves
    Legs No_Leggings("UNEQUIPPED", 0, 0, 0, 0, 0.0);
    Legs Knight_Leggings("Knight Leggings", 22, 10, 11, 8, 6.4);
    Legs Elite_Knight_Leggings("Elite Knight Leggings", 23, 11, 11, 9, 6.9);
    Legs Wanderer_Boots("Wanderer Boots", 14, 12, 15, 13, 2.1);
    Legs Black_Leather_Boots("Black Leather Boots", 12, 19, 13, 15, 3.0);
    Legs Leather_Boots("Leather Boots", 12, 12, 6, 13, 2.8);
    Legs Eastern_Leggings("Eastern Leggings", 15, 5, 11, 6, 4.0);
    Legs Shadow_Leggings("Shadow Leggings", 13, 7, 9, 10, 1.4);
    Legs Hollow_Warrior_Waistcloth("Hollow Warrior Waistcloth", 13, 8, 6, 8, 1.4);
    Legs Silver_Knight_Leggings("Silver Knight Leggings", 28, 15, 16, 19, 6.5);
    Legs Leggings_of_Favour("Leggings of Favour", 28, 14, 18, 11, 6.9);
    Legs Stone_Leggings("Stone Leggings", 54, 27, 33, 33, 10.4);
    Legs Havels_Leggings("Havel's Leggings", 54, 32, 32, 29, 11.5);

    Legs Hard_Leather_Boots("Hard Leather Boots", 13, 12, 7, 13, 3.5);
    Legs Chain_leggings("Chain Leggings", 18, 14, 12, 5, 4.6);
    Legs Brigand_Trousers("Brigand Trousers", 14, 12, 8, 10, 1.8);
    Legs Sorcerer_Boots("Sorcerer Boots", 12, 16, 8, 10, 1.3);
    Legs Black_Sorcerer_Boots("Black Sorcerer Boots", 8, 17, 12, 12, 1.0);
    Legs Heavy_Boots("Heavy Boots", 12, 14, 18, 10, 1.6);
    Legs Holy_Trousers("Holy Trousers", 14, 15, 8, 12, 2.0);
    Legs Iron_Leggings("Iron Leggings", 21, 12, 12, 11, 5.3);
    Legs Black_Iron_Leggings("Black Iron Leggings", 40, 17, 30, 13, 9.2);
    Legs Crystalline_Leggings("Crystalline Leggings", 37, 12, 9, 4, 6.4);
    Legs Crimson_Wastecloth("Crimson Wastecloth", 29, 29, 17, 21, 3.5);
    Legs Gold_Hemmed_Black_Skirt("Gold-Hemmed Black Skirt", 23, 27, 49, 17, 3.0);
    Legs Maiden_Skirt("Maiden Skirt", 14, 27, 16, 21, 2.5);
    Legs Blood_Stained_Skirt("Blood-Stained Skirt", 13, 27, 16, 21, 2.5);
    Legs Black_Knight_Leggings("Black Knight Leggings", 30, 15, 26, 9, 7.0);
    Legs Waistcloth_of_the_Channelers("Waistcloth of the Channelers", 32, 27, 27, 20, 6.0);


    //Assigning the different armour arrays.

    //Helmets
    HeadArray Helmets(12);
    {
        Helmets[0] = No_Helm,
        Helmets[1] = Knight_Helm,
        Helmets[2] = Elite_Knight_Helm,
        Helmets[3] = Wanderer_Hood,
        Helmets[4] = Thief_Mask,
        Helmets[5] = Pharis_Hat,
        Helmets[6] = Eastern_Helm,
        Helmets[7] = Shadow_Mask,
        Helmets[8] = Silver_Knight_Helm,
        Helmets[9] = Helm_of_Favour,
        Helmets[10] = Stone_Helm,
        Helmets[11] = Havels_Helm;
    }

    //Breastplates
    ChestArray Breastplates(12);
    {
        Breastplates[0] = No_Armour,
        Breastplates[1] = Knight_Armour,
        Breastplates[2] = Elite_Knight_Armour,
        Breastplates[3] = Wanderer_Coat,
        Breastplates[4] = Black_Leather_Armour,
        Breastplates[5] = Leather_Armour,
        Breastplates[6] = Eastern_Armour,
        Breastplates[7] = Shadow_Garb,
        Breastplates[8] = Silver_Knight_Armour,
        Breastplates[9] = Embraced_Armour_of_Favour,
        Breastplates[10] = Stone_Armour,
        Breastplates[11] = Havels_Armour;
    };

    //Gauntlets
    ArmsArray Gauntlets(12);
    {
        Gauntlets[0] = No_Gauntlets,
        Gauntlets[1] = Knight_Gauntlets,
        Gauntlets[2] = Elite_Knight_Gauntlets,
        Gauntlets[3] = Wanderer_Manchette,
        Gauntlets[4] = Black_Leather_Gloves,
        Gauntlets[5] = Leather_Gloves,
        Gauntlets[6] = Eastern_Gauntlets,
        Gauntlets[7] = Shadow_Gauntlets,
        Gauntlets[8] = Silver_Knight_Gauntlets,
        Gauntlets[9] = Gauntlets_of_Favour,
        Gauntlets[10] = Stone_Gauntlets,
        Gauntlets[11] = Havels_Gauntlets;
    };

    //Greaves
    LegsArray Greaves(13);
    {
        Greaves[0] = No_Leggings,
        Greaves[1] = Knight_Leggings,
        Greaves[2] = Elite_Knight_Leggings,
        Greaves[3] = Wanderer_Boots,
        Greaves[4] = Black_Leather_Boots,
        Greaves[5] = Leather_Boots,
        Greaves[6] = Eastern_Leggings,
        Greaves[7] = Shadow_Leggings,
        Greaves[8] = Hollow_Warrior_Waistcloth,
        Greaves[9] = Silver_Knight_Leggings,
        Greaves[10] = Leggings_of_Favour,
        Greaves[11] = Stone_Leggings,
        Greaves[12] = Havels_Leggings;
    };

//    //Experimental block. I can't bear to remove it now that I no longer need it. Let it remain here as an artifact.
//
//    cout << Helmets[0];
//    Armour Havel(Havels_Helm, Havels_Armour, Havels_Gauntlets, Havels_Leggings);
//    cout << Havel.getRegArmour();
//    Modifier.scale(Havel);
//    cout << Havel.getPhysArmour();
//    Havel.setValues(Knight_Helm, Knight_Armour, Knight_Gauntlets, Knight_Leggings);
//    cout << Havel.getRegArmour();
//
//    Head NewHelm = Havels_Helm;
//    cout << NewHelm;

    Helmets.Export("HeadConfig.txt");

    //Preset the trial armour and the list of successful candidates.
    DataArray ArmourList(10);
    Armour TrialSet;
    PureArmour Modifier;

    //Ask for a maximum weight
    double weightCap;
    cout << endl << "Please enter a maximum weight: ";
    cin >> weightCap;



    //The heavy lifting: this will test the current set against each candidate in the list and have it take the space
    //of the first set it surpasses in quality. Every inferior set on the list is pushed down a place and bottom set
    //loses it's list status.
    for(int iii = 0; iii < Helmets.getLength(); iii++)
    {
        for(int jjj = 0; jjj < Breastplates.getLength(); jjj++)
        {
            for(int kkk = 0; kkk < Gauntlets.getLength(); kkk++)
            {
                for (int lll = 0; lll < Greaves.getLength(); lll++)
                {
                    TrialSet.setValues(Helmets[iii], Breastplates[jjj], Gauntlets[kkk], Greaves[lll]);
                    if(TrialSet.getWeight() < weightCap)
                    {
                        Modifier.scale(TrialSet);
                        for(int listCount = 0; listCount < ArmourList.getLength(); listCount++)
                        {
                            if(TrialSet.getTotalMod() >= ArmourList[listCount].getTotalMod())
                            {
                                ArmourList.Supercede(TrialSet, listCount);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }


    //With our armour list now complete we can output the results in a nice, easy to read format on the console.
    cout << "Results:" << endl << endl;
    for(int listCount = 0; listCount < ArmourList.getLength(); listCount++)
    {
        cout << "Armour" << listCount << ":" << endl;
        cout << ArmourList[listCount].getHelmet() << "," << endl;
        cout << ArmourList[listCount].getBreastplate() << "," << endl;
        cout << ArmourList[listCount].getGauntlets() << "," << endl;
        cout << ArmourList[listCount].getGreaves() << endl;

        cout << ArmourList[listCount].getRegPhys() << "(" <<  ArmourList[listCount].getModPhys() << ")  ";
        cout << ArmourList[listCount].getRegMag() << " (" <<  ArmourList[listCount].getModMag() << ") ";
        cout << ArmourList[listCount].getRegFire() << " (" <<  ArmourList[listCount].getModFire() << ")  ";
        cout << ArmourList[listCount].getRegLight() << " (" <<  ArmourList[listCount].getModLight() << ")  ";
        cout << ArmourList[listCount].getTotalReg() << " (" << ArmourList[listCount].getTotalMod() << ")" << endl;

        cout << ArmourList[listCount].getWeight() << endl << endl;
    }
    cout << "Good fighting.";

    return 0;
}
