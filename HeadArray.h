#ifndef HEADARRAY_H_INCLUDED
#define HEADARRAY_H_INCLUDED
#include "Head.h"

class HeadArray
{
private:
    //Length of array and pointer list.
    int m_nLength;
    Head *m_padata;

public:
    //Create an array of length zero.
    HeadArray(): m_nLength(0), m_padata(0)
    {}

    //Dynamically allocate an array of a specific length.
    HeadArray(int nlength): m_nLength(nlength)
    {
        m_padata = new Head[nlength];
    }

    ~HeadArray()
    {
        delete[] m_padata;
    }

    int getLength() {return m_nLength;}
    Head& operator[] (int index);
    void Erase();

};

#endif // HEADARRAY_H_INCLUDED
