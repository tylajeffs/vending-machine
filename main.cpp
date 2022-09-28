#include <iostream>
#include <string>
#include "register.h"
#include "dispenser.h"

using namespace std;

//create the vending machine
Register vendingMachine(50);
Dispenser chips("Chips",10);
Dispenser rootBeer("Root Beer",10);
Dispenser kitKat("Kit Kat",10);
Dispenser water("Water",10);
Dispenser starbursts("Starbursts",10);



//main method
int main(int argc, char **argv) {
    
    
    
    //start the dialog
    cout << "Welcome to the vending machine! " << endl;
    
    //list out the different items available to buy
    
    //this dog is stored on the stack (will disappear when we leave this method)
    Animal dog("Freddie", "Alice");
    dog.printInfo();
    

        
}