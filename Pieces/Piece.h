#ifndef PIECE_H_INCLUDED
#define PIECE_H_INCLUDED

#include <iostream>
#include <string>

#include "EPiece.h"

using namespace std;

//All body parts classes contain member variables for their four types of damage resistance, their total damage resistance and their total weight.
//They also have access functions that return the total armour and total weight of the armour piece in question.
//Constructors are basic (create a dummy piece with no defense or weight) and enhanced (create defenses and weight according to specifications).
class Piece
{
private:
    string m_name;
    double m_physical;
    double m_magic;
    double m_fire;
    double m_lightning;
    EType m_type;

    double m_total;
    double m_weight;

public:
    Piece(): m_name(""), m_physical(0), m_magic(0), m_fire(0), m_lightning(0), m_type(HEAD), m_total(0), m_weight(0.0)
    {
    }

    Piece(string name, int physical, int magic, int fire, int lightning, EType type, double weight): m_name(name), m_physical(physical),
    m_magic(magic), m_fire(fire), m_lightning(lightning), m_type(type), m_total(physical + magic + fire + lightning), m_weight(weight)
    {
    }

    string getName() {return m_name;}
    int getPhys() {return m_physical;}
    int getMag() {return m_magic;}
    int getFire() {return m_fire;}
    int getLight() {return m_lightning;}
    EType getType() {return m_type;}

    int getTotal() {return m_total;}
    double getWeight() {return m_weight;}


    void setValues(string name, double phys, double mag, double fire, double light, EType type, double weight);

    friend ostream& operator<< (ostream &out, const Piece &subjectPiece);

    Piece& operator= (const Piece &sourcePiece);
};

#endif // PIECE_H_INCLUDED
