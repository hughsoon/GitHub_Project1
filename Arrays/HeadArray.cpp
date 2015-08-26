#include "HeadArray.h"

Head& HeadArray::operator[] (int index)
{
    return m_padata[index];
}

//Erasing function
void HeadArray::Erase()
{
    delete[] m_padata;

    m_padata = 0;
    m_nLength = 0;
}
