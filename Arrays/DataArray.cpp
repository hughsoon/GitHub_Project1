#include "DataArray.h"

//Access function
Armour DataArray::operator[] (int index)
{
    return m_padata[index];
}

//Erasing function
void DataArray::Erase()
{
    delete[] m_padata;

    m_padata = 0;
    m_nLength = 0;
}

//Shifts all armour sets below the index threshold (2nd parameter) down a level and removes the final element.
//Used to update the armour list.
void DataArray::Supercede(Armour newInput, int index)
{
    for(int iii = m_nLength - 1; iii > index; iii--)
    {
        m_padata[iii] = m_padata[iii -1];
    }
    m_padata[index] = newInput;
}
