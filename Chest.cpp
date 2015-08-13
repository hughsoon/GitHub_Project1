#include "Chest.h"
#include <iostream>

ostream& operator<< (ostream &out, const Chest &subjectChest)
    {
        out << subjectChest.m_name;
        return out;
    }

Chest& Chest::operator= (const Chest &sourceChest)
    {
        m_name = sourceChest.m_name;
        m_physical = sourceChest.m_physical;
        m_magic = sourceChest.m_magic;
        m_fire = sourceChest.m_fire;
        m_lightning = sourceChest.m_lightning;
        m_total = sourceChest.m_total;
        m_weight = sourceChest.m_weight;

        return *this;
    }
