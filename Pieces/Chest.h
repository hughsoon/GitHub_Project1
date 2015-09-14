#ifndef CHEST_H_INCLUDED
#define CHEST_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

//All body parts classes contain member variables for their four types of damage resistance, their total damage resistance and their total weight.
//They also have access functions that return the total armour and total weight of the armour piece in question.
//Constructors are basic (create a dummy piece with no defense or weight) and enhanced (create defenses and weight according to specifications).
class Chest
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
    Chest(): m_name(""), m_physical(0), m_magic(0), m_fire(0), m_lightning(0), m_total(0), m_weight(0.0)
    {
    }

    Chest(string name, int physical, int magic, int fire, int lightning, double weight): m_name(name), m_physical(physical),
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

    void setValues(string name, int phys, int mag, int fire, int light, double weight);

    friend ostream& operator<< (ostream &out, const Chest &subjectChest);

    Chest& operator= (const Chest &sourceChest);

};

#endif // CHEST_H_INCLUDED
