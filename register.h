#include <iostream>
#include <string>
#include "dispenser.h"

using namespace std;

#ifndef register_h
#define register_h


//class declaration
class Register {
    public: 
        Register(double cash); //constructor
        //~Register(); //deconstructor
        int takeCash(double amountOwed, double amountPaid, Dispenser& d); //takes payment from user. If overpaid, returns difference. If not enough, will ask for more $
        
        
    private:
        double cash;
        
};



#endif