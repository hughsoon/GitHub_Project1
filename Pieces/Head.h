#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

//All body parts classes contain member variables for their four types of damage resistance, their total damage resistance and their total weight.
//They also have access functions that return the total armour and total weight of the armour piece in question.
//Constructors are basic (create a dummy piece with no defense or weight) and enhanced (create defenses and weight according to specifications).
class Head
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
    Head(): m_name(""), m_physical(0), m_magic(0), m_fire(0), m_lightning(0), m_total(0), m_weight(0.0)
    {
    }

    Head(string name, int physical, int magic, int fire, int lightning, double weight): m_name(name), m_physical(physical),
    m_magic(magic), m_fire(fire), m_lightning(lightning), m_total(physical + magic + fire + lightning), m_weight(weight)
    {
    }

//    Head(const Head &sourceHead)
//    {
//        m_name = sourceHead.m_name;
//        m_physical = sourceHead.m_physical;
//        m_magic = sourceHead.m_magic;
//        m_fire = sourceHead.m_fire;
//        m_lightning = sourceHead.m_lightning;
//        m_total = sourceHead.m_total;
//        m_weight = sourceHead.m_weight;
//    }

    int getTotal() {return m_total;}
    double getWeight() {return m_weight;}
    string getName() {return m_name;}

    friend ostream& operator<< (ostream &out, const Head &subjectHead);

    Head& operator= (const Head &sourceHead);

};

#endif // HEAD_H_INCLUDED
