#include <iostream>
#include <string>

using namespace std;

#ifndef register_h
#define register_h


//class declaration
class Register {
    public: 
        Register(double cash); //constructor
        ~Register(); //deconstructor
        void printInfo();
        int takeCash(double amountOwed, double amountPaid, string itemName); //takes payment from user. If overpaid, returns difference. If not enough, will ask for more $
        
        
        
    private:
        double cash;
        
};



#endif