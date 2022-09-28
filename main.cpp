#include <iostream>
#include <string>
#include "register.h"
#include "dispenser.h"

using namespace std;

//create the vending machine
Register vendingMachine(50);
Dispenser chips("Chips", 10, 1);
Dispenser rootBeer("Root Beer", 10, 1.5);
Dispenser kitKat("Kit Kat", 10, 1.25);
Dispenser water("Water", 10, 1);
Dispenser starbursts("Starbursts", 10, 1.5);



//main method
int main(int argc, char **argv) {
    
    
    //start the dialog
    cout << "Welcome to the vending machine! " << endl;
    cout << "1. ";
    chips.printInfo();
    cout << "2. ";
    rootBeer.printInfo();
    cout << "3. ";
    kitKat.printInfo();
    cout << "4. ";
    water.printInfo();
    cout << "5. ";
    starbursts.printInfo();
    
    
    //ask for input
    int input;
    cout << "Make your selection (-1 to exit) : ";
    cin >> input;
    
    //figure out which one they want
    switch(input) {
        case 1:
            cout << "Insert $" << chips.getCost() << ": ";
            break;
        
        case 2: 
            cout << "Insert $" << rootBeer.getCost() << ": ";
            break;
        
        case 3:
            cout << "Insert $" << kitKat.getCost() << ": ";
            break;
        
        case 4:
            cout << "Insert $" << water.getCost() << ": ";
            break;
        
        case 5:
            cout << "Insert $" << starbursts.getCost() << ": ";
            break;
    }
    
    //get the input of the cost
    double moneyIn;
    cin >> moneyIn;
    
    

        
}