#include "Head.h"
#include <iostream>

ostream& operator<< (ostream &out, const Head &subjectHead)
    {
        out << subjectHead.m_name;
        return out;
    }

Head& Head::operator= (const Head &sourceHead)
    {
        m_name = sourceHead.m_name;
        m_physical = sourceHead.m_physical;
        m_magic = sourceHead.m_magic;
        m_fire = sourceHead.m_fire;
        m_lightning = sourceHead.m_lightning;
        m_total = sourceHead.m_total;
        m_weight = sourceHead.m_weight;

        return *this;
    }

void Head::setValues(string name, int phys, int mag, int fire, int light, double weight)
{
    m_name = name;
    m_physical = phys;
    m_magic = mag;
    m_fire = fire;
    m_lightning = light;
    m_total = phys + mag + fire + light;
    m_weight = weight;
}
