#include <iostream>
#include <string>
#include "register.h"

using namespace std;



//implement constructor
Register::Register(double c) {
    cash = c;

}

int takeCash(double amountOwed, double amountPaid, string itemName) {
    
    //calculate the change
    double leftover = amountOwed - amountPaid;
    
    if(leftover = 0) { //they paid the exact amount
    
        cout << itemName << " dispensed! " << endl;
        
    } else if(leftover > 0) { //they paid too much, need to give change
    
        cout << "Returning $" << leftover << endl;
        
    } else { //they didn't pay enough, ask for more $
        
        cout << "Insert $" << leftover * -1 << ": " << endl;
    }
    
    
    
}



//implement printInfo 
void Animal::printInfo() {
    cout << "Name: " << name << endl;
    cout << "Owner: " << owner << endl;
}