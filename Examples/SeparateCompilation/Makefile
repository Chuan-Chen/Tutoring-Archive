# variables
CPERM := -std=c++11
ONAME := driver.o Wheel.o Car.o

# executable file to create and its dependancies
prog.exe : $(ONAME)
	g++ $(CPERM) -o prog $(ONAME)

# file dependencies
driver.o : Car.h Wheel.h 
	g++ $(CPERM) -c driver.cpp
Car.o : Wheel.h Car.h
	g++ $(CPERM) -c Car.cpp
Wheel.o : Wheel.h
	g++ $(CPERM) -c Wheel.cpp
clean:
	del $(ONAME);
	del prog.exe
