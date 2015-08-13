#include "ArmsArray.h"

Arms& ArmsArray::operator[] (int index)
{
    return m_padata[index];
}

//Erasing function
void ArmsArray::Erase()
{
    delete[] m_padata;

    m_padata = 0;
    m_nLength = 0;
}
