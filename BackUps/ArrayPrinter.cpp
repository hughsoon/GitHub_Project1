#include "Arrays/HeadArray.h"
#include <string>
#include <fstream>
#include <iomanip>
#include "GenID.h"

using std::setw;

//Outputs all of this array's elements into the file used as an argument in matrix syntax.
void HeadArray::Export(string fileName)
{
    ofstream outfile(fileName, ios::app);
    for(int iii=0; iii < m_nLength; iii++)
        outfile << setw(32) << left << m_padata[iii]
        << right << setw(4) << "H" << "\t"
        << setw(4) << genID() << "\t"
        << setw(4) << m_padata[iii].getPhys() << "\t"
        << setw(4) << m_padata[iii].getMag() << "\t"
        << setw(4) << m_padata[iii].getFire() << "\t"
        << setw(4) << m_padata[iii].getLight() << "\t"
        << setw(4) << m_padata[iii].getWeight() << endl;
}

//Change array size to specification.
void HeadArray::Resize(int newSize)
{
    Head *padata = new Head[newSize];

    int elementsToCopy = (m_nLength > newSize) ? newSize : m_nLength;

    for(int iii = 0; iii < elementsToCopy; iii++)
    {
        padata[iii] = m_padata[iii];
    }

    delete[] m_padata;

    m_nLength = newSize;
    m_padata = padata;
}

//Add a single element to the end of the array.
void HeadArray::Add(string name, int phys, int mag, int fire, int light, double weight)
{
    Head newHelmet(name, phys, mag, fire, light, weight);
    Resize(m_nLength + 1);
    m_padata[m_nLength] = newHelmet;
}
