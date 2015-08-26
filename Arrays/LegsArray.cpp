#include "LegsArray.h"

Legs& LegsArray::operator[] (int index)
{
    return m_padata[index];
}

//Erasing function
void LegsArray::Erase()
{
    delete[] m_padata;

    m_padata = 0;
    m_nLength = 0;
}
