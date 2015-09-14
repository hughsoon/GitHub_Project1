#include <iostream>
#include <fstream>
#include <string>
#include "Head.h"
#include "HeadArray.h"

using namespace std;

//Concatinates all characters in the string given until a double white space is met. At this point the concatination is returned.
//If the end of line is met, it will also return the concatination (so that the final element can be returned).
string getElement(string element, unsigned int& counterReference)
{
    const int tab = 9;
    string output;
    for(unsigned int charNumber = counterReference; charNumber < element.length(); charNumber++)
    {
        if (isspace(element[charNumber]) && isspace(element[charNumber + 1]))
            return output;

        if (element[charNumber] == tab)
            return output;

        output += element[charNumber];
        counterReference = charNumber;
    }
    return output;
}

//Reads through the line of a config file for armour pieces and performs a getElement each time it finds a non-whitespace character.
//It should do this a total of eight times.
void interpret(string line, string (&strArray)[8])
{
    int counter = 0;

    for(unsigned int charNumber = 0; charNumber < line.length(); charNumber++)
    {
        if (!isspace(line[charNumber]))
        {
            strArray[counter] = getElement(line, charNumber);
            counter += 1;
        }
    }
}

int getFileLength(ifstream &file)
{
    string blank;
    int counter = 0;

    getline(file, blank);
    getline(file, blank);

    while(getline(file, blank))
        counter += 1;

    file.clear();
    file.seekg(0);

    return counter;
}

int getFileLength(string infile)
{
    ifstream file(infile);

    string blank;
    int counter = 0;

    getline(file, blank);
    getline(file, blank);

    while(getline(file, blank))
    counter += 1;

    return counter;
}
