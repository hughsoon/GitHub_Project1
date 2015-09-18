#ifndef PUREARMOUR_H_INCLUDED
#define PUREARMOUR_H_INCLUDED

#include "Armour.h"

class PureArmour
{
private:
    double m_physMod;
    double m_magMod;
    double m_fireMod;
    double m_lightMod;

public:
    PureArmour(): m_physMod(2.0), m_magMod(0.0), m_fireMod(1.0), m_lightMod(1.0)
    {
    }

    PureArmour(double phys, double mag, double fire, double light): m_physMod(phys), m_magMod(mag), m_fireMod(fire), m_lightMod(light)
    {
    }

    void scale(Armour &newSet)
    {
        newSet.modPhysArmour = newSet.regPhysArmour * m_physMod;
        newSet.modMagArmour = newSet.regMagArmour * m_magMod;
        newSet.modFireArmour = newSet.regFireArmour * m_fireMod;
        newSet.modLightArmour = newSet.regLightArmour * m_lightMod;

        newSet.totalModArmour = newSet.modPhysArmour + newSet.modMagArmour + newSet.modFireArmour +
                                newSet.modLightArmour;
    }
};

#endif // PUREARMOUR_H_INCLUDED
