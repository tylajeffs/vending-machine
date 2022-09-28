#include <iostream>
#include <string>
#include "register.h"
#include "dispenser.h"

using namespace std;



//main method
int main(int argc, char **argv) {
    
    //this dog is stored on the stack (will disappear when we leave this method)
    Animal dog("Freddie", "Alice");
    dog.printInfo();
    
    //this cat is stored on the heap 
    Animal *cat = new Animal("lucky", "Sally");
    //to call methods on pointers you use ->
    cat->printInfo();
    
    
    //whenever you put something on the heap, you have to also take it off to prevent a memory leak
    delete cat;
        
}