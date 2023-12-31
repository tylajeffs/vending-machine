#include <iostream>
#include <string>
#include "register.h"

using namespace std;



//implement constructor
Register::Register(double c) {
    cash = c;

}

int Register::takeCash(double amountOwed, double amountPaid, Dispenser& d) {
    
    //calculate the change
    double leftover = amountOwed - amountPaid;
    
    
    //see if they paid the right amount
    if(leftover == 0) { //they paid the exact amount
    
        //subtract one from the correct dispenser
        d.dispensed();
        cout << d.getItemType()<< " dispensed! " << endl;
        
        //add the payment to total cash and print
        cash += amountOwed;
        cout << "The register has $" << cash << endl;
        
    } else if(leftover > 0) { //they didn't pay enough, ask for more
    
        //add the payment to total cash
        cash += amountPaid;
    
        double num;
        cout << "Insert $" << leftover << ": " ;
        cin >> num;
        
        //call take cash again
        takeCash(leftover, num, d);
    
        
    } else { //they overpaid, give back change
    
    
        cout << "Returning $" << leftover * -1 << endl;
        
        //subtract one from the correct dispenser
        d.dispensed();
        cout << d.getItemType()<< " dispensed! " << endl;
        
        //add the payment to total cash and print
        cash += amountOwed;
        cout << "The register has $" << cash << endl;
        
    }
    
    
    
}

