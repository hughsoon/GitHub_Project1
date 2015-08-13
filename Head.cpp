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
