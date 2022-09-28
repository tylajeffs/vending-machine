#include <iostream>
#include <string>

using namespace std;

#ifndef register_h
#define register_h


//class declaration
class Register {
    public: 
        Register(int cash); //constructor
        ~Register(); //deconstructor
        void printInfo();
        int takeCash(int amountOwed); //takes payment from user. If overpaid, returns difference. If not enough, will ask for more $
        
        
        
    private:
        int cash;
        int amountOwed;
        
};



#endif