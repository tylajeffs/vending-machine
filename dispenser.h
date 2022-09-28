#include <iostream>
#include <string>

using namespace std;

#ifndef dispenser_h
#define dispenser_h


//class declaration
class Dispenser {
    public: 
        Dispenser(string itemType, int amountOfItems); //constructor
        ~Dispenser(); //deconstructor
        void printInfo();
        
    private:
        string itemType;
        int amountOfItems;
};



#endif