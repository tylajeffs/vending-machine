#include <iostream>
#include <string>

using namespace std;

#ifndef dispenser_h
#define dispenser_h


//class declaration
class Dispenser {
    public: 
        Dispenser(string itemType, int amountOfItems, double cost); //constructor
        //~Dispenser(); //deconstructor
        void printInfo();
        void dispensed();
        double getCost();
        
    private:
        string itemType;
        int amountOfItems;
        double cost;
};



#endif