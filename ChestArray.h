#ifndef CHESTARRAY_H_INCLUDED
#define CHESTARRAY_H_INCLUDED
#include "Chest.h"

class ChestArray
{
private:
    //Length of array and pointer list.
    int m_nLength;
    Chest *m_padata;

public:
    //Create an array of length zero.
    ChestArray(): m_nLength(0), m_padata(0)
    {}

    //Dynamically allocate an array of a specific length.
    ChestArray(int nlength): m_nLength(nlength)
    {
        m_padata = new Chest[nlength];
    }

    ~ChestArray()
    {
        delete[] m_padata;
    }

    int getLength() {return m_nLength;}
    Chest& operator[] (int index);
    void Erase();

};

#endif // CHESTARRAY_H_INCLUDED
