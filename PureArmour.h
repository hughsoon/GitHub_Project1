#ifndef PUREARMOUR_H_INCLUDED
#define PUREARMOUR_H_INCLUDED

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

    PureArmour(double phys, mag, fire, light): m_physMod(phys), m_magMod(mag), m_fireMod(fire), m_lightMod(light)
    {
    }
};

#endif // PUREARMOUR_H_INCLUDED
