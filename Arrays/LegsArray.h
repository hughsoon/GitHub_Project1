#ifndef LEGSARRAY_H_INCLUDED
#define LEGSARRAY_H_INCLUDED
#include "Legs.h"

class LegsArray
{
private:
    //Length of array and pointer list.
    int m_nLength;
    Legs *m_padata;

public:
    //Create an array of length zero.
    LegsArray(): m_nLength(0), m_padata(0)
    {}

    //Dynamically allocate an array of a specific length.
    LegsArray(int nlength): m_nLength(nlength)
    {
        m_padata = new Legs[nlength];
    }

    ~LegsArray()
    {
        delete[] m_padata;
    }

    int getLength() {return m_nLength;}

    Legs& operator[] (int index);
    void Add(string name, int phys, int mag, int fire, int light, double weight);
    void Erase();
    void Resize(int newSize);

    void readfile(string file);

    void Export(string filename);

};

#endif // LEGSARRAY_H_INCLUDED
