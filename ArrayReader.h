#ifndef ARRAYREADER_H_INCLUDED
#define ARRAYREADER_H_INCLUDED

string getElement(string element, int& counterReference);
void interpret(string line, string (&strArray)[8]);
int getFileLength(ifstream &file);
int getFileLength(string infile);

#endif // ARRAYREADER_H_INCLUDED
