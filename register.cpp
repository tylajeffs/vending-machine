#include <iostream>
#include <string>
#include "register.h"

using namespace std;



//implement constructor
Animal::Animal(string n, string o) {
    name = n;
    owner = o;
}

//implement deconstructor
Animal::~Animal() {
    cout << "Animal " << name << " is getting deleted." << endl;
}

//implement printInfo 
void Animal::printInfo() {
    cout << "Name: " << name << endl;
    cout << "Owner: " << owner << endl;
}