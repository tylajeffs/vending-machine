#include <iostream>
#include <string>

using namespace std;

#ifndef dispenser_h
#define dispenser_h


//class declaration
class Animal {
    public: 
        Animal(string name, string owner); //constructor
        ~Animal(); //deconstructor
        void printInfo();
        
    private:
        string name;
        string owner;
};



#endif