#include <iostream>
#include <string>
#include "dispenser.h"

using namespace std;


//implement constructor
Dispenser::Dispenser(string t, int a, double c) {
    itemType = t;
    amountOfItems = a;
    cost = c;
}

void Dispenser::dispensed() {
    
    //subtract one from the items
    amountOfItems--;
}

//implement printInfo 
void Dispenser::printInfo() {
    
    cout << itemType << ": $" << cost << " (" << amountOfItems << ") " << endl;

}

double Dispenser::getCost() {
    return cost;
}

string Dispenser::getItemType() {
    return itemType;
}