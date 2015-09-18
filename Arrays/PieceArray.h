#ifndef PIECEARRAY_H_INCLUDED
#define PIECEARRAY_H_INCLUDED

#include "Piece.h"

class PieceArray
{
private:
    //Length of array and pointer list.
    int m_nLength;
    Piece *m_padata;

public:
    //Create an array of length zero.
    PieceArray(): m_nLength(0), m_padata(0)
    {}

    //Dynamically allocate an array of a specific length.
    PieceArray(int nlength): m_nLength(nlength)
    {
        m_padata = new Piece[nlength];
    }

    ~PieceArray()
    {
        delete[] m_padata;
    }

    int getLength() {return m_nLength;}

    Piece& operator[] (int index);
    void Add(string name, double phys, double mag, double fire, double light, EType type, double weight);
    void Erase();
    void Resize(int newSize);

    void readfile(string file);

    void Export(string filename);

};


#endif // PIECEARRAY_H_INCLUDED
