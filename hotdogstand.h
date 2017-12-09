/*--------------------------------------------------------------------------
This is the header file hotdogstand.h. This is the interface for the class
HotDogStand. Values of this type model the common functionalities of a hot
dog stand and keeps track of hot dogs sold by across all objects of this
type.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
---------------------------------------------------------------------------*/
class HotDogStand
{
public:
    HotDogStand(int theID, int theNumberSold);
    //Precondition: The variables iD and numberSold >= 0.
    //Postcondition: Sets the HotDogStand object's ID and number of hotdogs sold equal to 
    //the values of the two arguments, theID and theNumberSold.

    HotDogStand();
    //Postcondition: Both member variables iD and numberSold are not initialized.

    void setID(int newID);
    //Precondition: newID > 0
    //Postcondition: Sets the ID of the HotDogStand object equal to the value of the argument
    //newID.

    void setNumberSold(int newNumberSold);
    //Precondition: newNumberSold > 0.
    //Postcondition: Sets the number of hotdogs sold equal to the argument newNumberSold.

    int getID() const;
    //Returns ID of the HotDogStand object.

    int getNumberSold() const;
    //Returns the number of hotdogs sold by the HotDogStand object.

    void justSold();
    //Increments the number of hotdogs sold by 1.

    static int getTotalSold();
    //Return the number of hotdogs sold by all objects of the class HotDogStand.
private:
    int iD;
    int numberSold;
    static int totalNumberSold;
};
