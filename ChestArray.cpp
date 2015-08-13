#include "ChestArray.h"

Chest& ChestArray::operator[] (int index)
{
    return m_padata[index];
}

//Erasing function
void ChestArray::Erase()
{
    delete[] m_padata;

    m_padata = 0;
    m_nLength = 0;
}
