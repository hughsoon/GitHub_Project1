#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include "Head.h"

using namespace std;

//Concatinates all characters in the string given until a double white space is met. At this point the concatination is returned.
string getElement(string element, int& counterReference)
{
    string output;
    for(int charNumber = counterReference; charNumber < element.length(); charNumber++)
    {
        if (isspace(element[charNumber]) && isspace(element[charNumber + 1]))
            return output;

        output += element[charNumber];
        counterReference = charNumber;
    }
    return "";
}

//Reads through the line of a config file for armour pieces and performs a getElement each time it finds a non-whitespace character.
//It should do this a total of eight times.
void interpret(string line, string (&strArray)[8])
{
    int counter = 0;

    for(int charNumber = 0; charNumber < line.length(); charNumber++)
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

    return counter;
}


//Opens the specified config file; skims the first two lines and then creates an array for each following line that can be
//typecast and fed to the armour array classes.
void readfile(string file)
{
    ifstream infile(file);
    string line;
    string element[8];
    int counter = 0;

    int fileLength = getFileLength(infile);

    Head *HeadArray = new Head[fileLength];
    Head referenceHead;

    //First two lines..
    getline(infile, line);
    getline(infile, line);

    while(getline(infile, line))
    {
        //interpret line in file
        interpret(line, element);

        //set the reference to be the various values in the interpretation (which have to be typeccast)
        referenceHead.setValues(element[0], stoi(element[3]), stoi(element[4]), stoi(element[5]), stoi(element[6]), stod(element[7]));

        //assign that reference to the array
        HeadArray[counter] = referenceHead;

        //increment counter
        counter++;
    }
}

