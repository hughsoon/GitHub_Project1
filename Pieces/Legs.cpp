#include "Legs.h"
#include <iostream>

ostream& operator<< (ostream &out, const Legs &subjectLegs)
    {
        out << subjectLegs.m_name;

        return out;
    }

Legs& Legs::operator= (const Legs &sourceLegs)
    {
        m_name = sourceLegs.m_name;
        m_physical = sourceLegs.m_physical;
        m_magic = sourceLegs.m_magic;
        m_fire = sourceLegs.m_fire;
        m_lightning = sourceLegs.m_lightning;
        m_total = sourceLegs.m_total;
        m_weight = sourceLegs.m_weight;

        return *this;
    }
