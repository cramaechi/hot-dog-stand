/*-----------------------------------------------------------------------
This is the implementation for the class HotDogStand. The interface is
in the file hotdogstand.h.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
-----------------------------------------------------------------------*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "hotdogstand.h"

using namespace std;

HotDogStand::HotDogStand(int theID, int theNumberSold)
{
    setID(theID);
    setNumberSold(theNumberSold);
}

HotDogStand::HotDogStand() {}

void HotDogStand::setID(int newID)
{
    if (newID < 0)
    {
        cout<<"Invalid argument to mutator function: Aborting program.\n";
        exit(1);
    }

    iD = newID;
}

void HotDogStand::setNumberSold(int newNumberSold)
{
    if (newNumberSold < 0)
    {
        cout<<"Invalid argument to mutator function: Aborting program.\n";
        exit(1);
    }

    numberSold = newNumberSold;
    totalNumberSold+=numberSold;
}

int HotDogStand::getID() const
{
    return iD;
}

int HotDogStand::getNumberSold() const
{
    return numberSold;
}

void HotDogStand::justSold()
{
    numberSold++;
    totalNumberSold++;
}

int HotDogStand:: getTotalSold()
{
    return totalNumberSold;
}

