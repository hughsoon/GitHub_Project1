#include "Arms.h"
#include <iostream>

ostream& operator<< (ostream &out, const Arms &subjectArms)
    {
        out << subjectArms.m_name;
        return out;
    }

Arms& Arms::operator= (const Arms &sourceArms)
    {
        m_name = sourceArms.m_name;
        m_physical = sourceArms.m_physical;
        m_magic = sourceArms.m_magic;
        m_fire = sourceArms.m_fire;
        m_lightning = sourceArms.m_lightning;
        m_total = sourceArms.m_total;
        m_weight = sourceArms.m_weight;

        return *this;
    }

void Arms::setValues(string name, int phys, int mag, int fire, int light, double weight)
{
    m_name = name;
    m_physical = phys;
    m_magic = mag;
    m_fire = fire;
    m_lightning = light;
    m_total = phys + mag + fire + light;
    m_weight = weight;
}
