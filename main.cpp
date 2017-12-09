//Program that uses a class called HotDogStand to simulate one or many hotdog
//stands throughout a city.
#include <iostream>
#include "hotdogstand.h"

using namespace std;

void input(HotDogStand stands[], int& size);
//Reads user input into each HotDogStand object in array stands.

void output();
//Precondition: All HotDogStand objects in array stands have been intialized to
//valid data.
//Postcondition: Prints out the total number of hot dogs sold by all hot dog
//stand objects in array stands. 

int HotDogStand:: totalNumberSold = 0;

int main()
{
    HotDogStand *stands;
    int size;

    input(stands, size);
    output();

    return 0;
}

void input(HotDogStand stands[], int& size)
{
    cout<<"How many hot dog stands do you own throughout town? ";
    cin>>size;

    cout<<endl;

    for (int i = 0; i < size; i++)
    {
        int numSold;

        cout<<"How many hot dogs did hot dog stand "<<i + 1<<" sell today? ";
        cin>>numSold;

        stands[i] = HotDogStand(i + 1, numSold);
        cout<<endl;
    }

    cout<<endl;
}

void output()
{
    cout<<"The total number of hot dogs sold by all your hot dog stands is ";
    cout<<HotDogStand::getTotalSold()<<".\n\n";
}

