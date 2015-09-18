#ifndef DATAARRAY_H_INCLUDED
#define DATAARRAY_H_INCLUDED

#include "Armour.h"
class DataArray
{
private:
    int m_nLength;
    Armour *m_padata;

//Constructors, destructor, access function, [] and erase + supercede.
public:
    DataArray(): m_nLength(0), m_padata(0)
    {}

    DataArray(int nlength): m_nLength(nlength)
    {
        m_padata = new Armour[nlength];
        Armour Dummy;
        for(int iii = 0; iii < nlength; iii++)
        {
            m_padata[iii] = Dummy;
        }
    }

    ~DataArray()
    {
        delete[] m_padata;
    }

    int getLength() {return m_nLength;}
    Armour operator[] (int index);
    void Erase();
    void Supercede(Armour newInput, int index);

};

#endif // DATAARRAY_H_INCLUDED
