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
    
    
    while (input != -1) {
        
        //figure out which one they want
        double c;
        double moneyIn;
        
        switch(input) {
            case 1:
                c = chips.getCost();
                cout << "Insert $" << c << ": ";
                //get the input of the cost
                cin >> moneyIn;
                
                vendingMachine.takeCash(c, moneyIn, chips);
                break;
            
            case 2: 
                c = rootBeer.getCost();
                cout << "Insert $" << c << ": ";
                //get the input of the cost
                cin >> moneyIn;
                
                vendingMachine.takeCash(c, moneyIn, rootBeer);
                break;
            
            case 3:
                c = kitKat.getCost();
                cout << "Insert $" << c << ": ";
                //get the input of the cost
                cin >> moneyIn;
                
                vendingMachine.takeCash(c, moneyIn, kitKat);
                break;
            
            case 4:
                c = water.getCost();
                cout << "Insert $" << c << ": ";
                //get the input of the cost
                cin >> moneyIn;
                
                vendingMachine.takeCash(c, moneyIn, water);
                break;
            
            case 5:
                c = starbursts.getCost();
                cout << "Insert $" << c << ": ";
                //get the input of the cost
                cin >> moneyIn;
                
                vendingMachine.takeCash(c, moneyIn, starbursts);
                break;
        }
        
        //repeat the selection options
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
        
        //ask if they want anything else
        cout << "Make your selection (-1 to exit) : ";
        cin >> input;
    
        
    }
    
    
    
    
    
    
    
    
    
    

        
}