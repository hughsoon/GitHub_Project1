#ifndef LEGS_H_INCLUDED
#define LEGS_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

//All body parts classes contain member variables for their four types of damage resistance, their total damage resistance and their total weight.
//They also have access functions that return the total armour and total weight of the armour piece in question.
//Constructors are basic (create a dummy piece with no defense or weight) and enhanced (create defenses and weight according to specifications).
class Legs
{
private:
    string m_name;
    int m_physical;
    int m_magic;
    int m_fire;
    int m_lightning;
    int m_total;
    double m_weight;

public:
    Legs(): m_name(""), m_physical(0), m_magic(0), m_fire(0), m_lightning(0), m_total(0), m_weight(0.0)
    {
    }

    Legs(string name, int physical, int magic, int fire, int lightning, double weight): m_name(name), m_physical(physical),
    m_magic(magic), m_fire(fire), m_lightning(lightning), m_total(physical + magic + fire + lightning), m_weight(weight)
    {
    }

    int getPhys() {return m_physical;}
    int getMag() {return m_magic;}
    int getFire() {return m_fire;}
    int getLight() {return m_lightning;}

    int getTotal() {return m_total;}
    double getWeight() {return m_weight;}
    string getName() {return m_name;}

    friend ostream& operator<< (ostream &out, const Legs &subjectLegs);

    Legs& operator= (const Legs &sourceLegs);
};

#endif // LEGS_H_INCLUDED
