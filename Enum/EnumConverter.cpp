#include <iostream>

#include "EPiece.h"

EType charToEType(char input)
{
    switch(input)
    {
        case 'A':
            return ARMS;
        case 'C':
            return CHEST;
        case 'H':
            return HEAD;
        case 'L':
            return LEGS;
    }

    return HEAD;
}

char eTypeToChar(EType input)
{
    switch(input)
    {
        case ARMS:
            return 'A';
        case CHEST:
            return 'C';
        case HEAD:
            return 'H';
        case LEGS:
            return 'L';
    }

    return -1;
}
