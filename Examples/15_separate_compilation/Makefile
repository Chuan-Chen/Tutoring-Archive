# executable file to create and its dependancies
prog : driver.o Student.o Car.o
	g++ -std=c++11 -o prog driver.o Student.o Car.o

# file dependencies
driver.o : Student.h Car.h
	g++ -std=c++11 -c driver.cpp
Student.o : Student.h Car.h
	g++ -std=c++11 -c Student.cpp
Car.o : Car.h
	g++ -std=c++11 -c Car.cpp

# files to remove
clean:
	rm driver.o Student.o
	rm prog
