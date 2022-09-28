vendingMachine: main.o dispenser.o register.o
	g++ main.o dispenser.o register.o -o vendingMachine
	
main.o: main.cpp dispenser.h register.h
	g++ -c main.cpp
	
dispenser.o: dispenser.cpp dispenser.h 
	g++ -c dispenser.cpp
	
register.o: register.cpp register.h dispenser.h
	g++ -c register.cpp
