# executable file to create and its dependancies
prog : driver.o Student.o
	g++ -std=c++11 -o prog driver.o Student.o

# file dependencies
driver.o : Student.h
	g++ -std=c++11 -c driver.cpp
Student.o : Student.h
	g++ -std=c++11 -c Student.cpp

# files to remove
clean:
	rm driver.o Student.o
	rm prog
