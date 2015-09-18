#include <iostream>

#include "ArrayReader.h"
#include "DataArray.h"
#include "PieceArray.h"
#include "PureArmour.h"

using namespace std;

int main()
{
    //Declaration of all Arrays. Each array takes their armour pieces from a corresponding config file.

    int fileLength;

    //Helmets
    fileLength = getFileLength("Congig/HeadConfig.txt");
    PieceArray Helmets(fileLength);
    Helmets.readfile("Config/HeadConfig.txt");

    //Breastplates
    fileLength = getFileLength("Config/ChestConfig.txt");
    PieceArray Breastplates(fileLength);
    Breastplates.readfile("Config/ChestConfig.txt");

    //Gauntlets
    fileLength = getFileLength("Config/ArmsConfig.txt");
    PieceArray Gauntlets(fileLength);
    Gauntlets.readfile("Config/ArmsConfig.txt");

    //Greaves
    fileLength = getFileLength("Config/LegsConfig.txt");
    PieceArray Greaves(fileLength);
    Greaves.readfile("Config/LegsConfig.txt");



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
