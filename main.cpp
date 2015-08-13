#include "HeadArray.h"
#include "ChestArray.h"
#include "ArmsArray.h"
#include "LegsArray.h"
#include "DataArray.h"
#include <iostream>

using namespace std;

int main()
{
    //Declaration of all items.

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

    //Greaves
    Legs No_Leggings("UNEQUIPPED", 0, 0, 0, 0, 0.0);
    Legs Knight_Leggings("Knight Leggings", 22, 10, 11, 8, 6.4);
    Legs Elite_Knight_Leggings("Elite Knight Leggings", 23, 11, 11, 9, 6.9);
    Legs Wanderer_Boots("Wanderer Boots", 14, 12, 15, 13, 2.1);
    Legs Black_Leather_Boots("Black Leather Boots", 12, 19, 13, 15, 3.0);
    Legs Leather_Boots("Leather Boots", 12, 12, 6, 13, 2.8);
    Legs Eastern_Leggings("Eastern Leggings", 15, 5, 11, 6, 4.0);
    Legs Shadow_Leggings("Shadow Leggings", 13, 7, 9, 10, 1.4);
    Legs Hollow_Soldier_Waistcloth("Hollow Soldier Waistcloth", 13, 8, 6, 8, 1.4);
    Legs Silver_Knight_Leggings("Silver Knight Leggings", 28, 15, 16, 19, 6.5);
    Legs Leggings_of_Favour("Leggings of Favour", 28, 14, 18, 11, 6.9);
    Legs Stone_Leggings("Stone Leggings", 54, 27, 33, 33, 10.4);
    Legs Havels_Leggings("Havel's Leggings", 54, 32, 32, 29, 11.5);


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
        Greaves[8] = Hollow_Soldier_Waistcloth,
        Greaves[9] = Silver_Knight_Leggings,
        Greaves[10] = Leggings_of_Favour,
        Greaves[11] = Stone_Leggings,
        Greaves[12] = Havels_Leggings;
    };

//    //Experimental block. I can't bear to remove it now that I no longer need it. Let it remain here as an artifact.
//    cout << Helmets[0];
//    Armour Havel(Havels_Helm, Havels_Armour, Havels_Gauntlets, Havels_Leggings);
//    cout << Havel.getArmour();
//    Havel.setValues(Knight_Helm, Knight_Armour, Knight_Gauntlets, Knight_Leggings);
//    cout << Havel.getArmour();
//    Head NewHelm = Havels_Helm;
//    cout << NewHelm;

    //Preset the trial armour and the list of successful candidates.
    DataArray ArmourList(10);
    Armour TrialSet;

    //Ask for a maximum weight

    double weightCap;
    cout << "Please enter a maximum weight: ";
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
                        for(int listCount = 0; listCount < ArmourList.getLength(); listCount++)
                        {
                            if(TrialSet.getArmour() >= ArmourList[listCount].getArmour())
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
        cout << ArmourList[listCount].getArmour() << endl;
        cout << ArmourList[listCount].getWeight() << endl << endl;
    }
    cout << "Good fighting.";

    return 0;
}
