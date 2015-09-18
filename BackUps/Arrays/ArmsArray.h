#ifndef ARMSARRAY_H_INCLUDED
#define ARMSARRAY_H_INCLUDED
#include "Arms.h"

class ArmsArray
{
private:
    //Length of array and pointer list.
    int m_nLength;
    Arms *m_padata;

public:
    //Create an array of length zero.
    ArmsArray(): m_nLength(0), m_padata(0)
    {}

    //Dynamically allocate an array of a specific length.
    ArmsArray(int nlength): m_nLength(nlength)
    {
        m_padata = new Arms[nlength];
    }

    ~ArmsArray()
    {
        delete[] m_padata;
    }

    int getLength() {return m_nLength;}

    Arms& operator[] (int index);
    void Add(string name, int phys, int mag, int fire, int light, double weight);
    void Erase();
    void Resize(int newSize);

    void readfile(string file);

    void Export(string filename);

};

#endif // ARMSARRAY_H_INCLUDED
