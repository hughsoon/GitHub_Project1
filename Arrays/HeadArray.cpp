#include "HeadArray.h"
#include "ArrayReader.h"

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

void HeadArray::FitToFile(string file)
{
    delete[] m_padata;

    m_nLength = getFileLength(file);

    m_padata = new Head[m_nLength];
}

void HeadArray::ReadFromFile(string file)
{
    //sets the length of the array to the lenth of the file
    FitToFile(file);

    readfile(file);

}
