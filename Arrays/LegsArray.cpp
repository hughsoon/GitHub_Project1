#include <iostream>
#include <fstream>
#include <iomanip>

#include "ArrayReader.h"
#include "GenID.h"
#include "LegsArray.h"

//Includes the following sections of Array functions:
//Basic operations: [], add(), erase(), resize()
//Reading: readfile()
//Writing: export()


//Basic operations
Legs& LegsArray::operator[] (int index)
{
    return m_padata[index];
}

//Add a single element to the end of the array.
void LegsArray::Add(string name, int phys, int mag, int fire, int light, double weight)
{
    Legs newHelmet(name, phys, mag, fire, light, weight);
    Resize(m_nLength + 1);
    m_padata[m_nLength] = newHelmet;
}

//Deletes the array and salts the earth
void LegsArray::Erase()
{
    delete[] m_padata;

    m_padata = 0;
    m_nLength = 0;
}

//Resizes array to the newSize argument
void LegsArray::Resize(int newSize)
{
    Legs *padata = new Legs[newSize];

    int elementsToCopy = (m_nLength > newSize) ? newSize : m_nLength;

    for(int iii = 0; iii < elementsToCopy; iii++)
    {
        padata[iii] = m_padata[iii];
    }

    delete[] m_padata;

    m_nLength = newSize;
    m_padata = padata;
}

//------------------------------------------------------

//Reading from config files

//Opens the specified config file; skims the first two lines and then creates an array for each following line that can be
//typecast and fed to the armour array classes.
void LegsArray::readfile(string file)
{
    ifstream infile(file, ios::app);
    string line;
    string element[8];
    int counter = 0;
    int fileLength = getFileLength(infile);
    Legs referenceLegs;

    delete[] m_padata;
    m_padata = new Legs[fileLength];
    m_nLength = fileLength;

    //First two lines..
    getline(infile, line);
    getline(infile, line);

    while(getline(infile, line))
    {
        //interpret line in file
        interpret(line, element);

        //set the reference to be the various values in the interpretation (which have to be typeccast)
        referenceLegs.setValues(element[0], stoi(element[3]), stoi(element[4]), stoi(element[5]), stoi(element[6]), stod(element[7]));

        //assign that reference to the array
        m_padata[counter] = referenceLegs;

        //increment counter
        counter++;
    }
    infile.close();
}

//------------------------------------------------------

//Writing to config files

using std::setw;

//Outputs all of this array's elements into the file used as an argument in matrix syntax.
void LegsArray::Export(string fileName)
{
    ofstream outfile(fileName, ios::app);
    for(int iii=0; iii < m_nLength; iii++)
        outfile << setw(32) << left << m_padata[iii]
        << right << setw(4) << "L" << "\t"
        << setw(4) << genID() << "\t"
        << setw(4) << m_padata[iii].getPhys() << "\t"
        << setw(4) << m_padata[iii].getMag() << "\t"
        << setw(4) << m_padata[iii].getFire() << "\t"
        << setw(4) << m_padata[iii].getLight() << "\t"
        << setw(4) << m_padata[iii].getWeight() << endl;
}
