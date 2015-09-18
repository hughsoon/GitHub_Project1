#include <iostream>

#include "Piece.h"

ostream& operator<< (ostream &out, const Piece &subjectPiece)
    {
        out << subjectPiece.m_name;
        return out;
    }

Piece& Piece::operator= (const Piece &sourcePiece)
    {
        m_name = sourcePiece.m_name;
        m_physical = sourcePiece.m_physical;
        m_magic = sourcePiece.m_magic;
        m_fire = sourcePiece.m_fire;
        m_lightning = sourcePiece.m_lightning;
        m_total = sourcePiece.m_total;
        m_weight = sourcePiece.m_weight;

        return *this;
    }

void Piece::setValues(string name, double phys, double mag, double fire, double light, EType type, double weight)
{
    m_name = name;
    m_physical = phys;
    m_magic = mag;
    m_fire = fire;
    m_lightning = light;
    m_type = type;

    m_total = phys + mag + fire + light;
    m_weight = weight;
}
