#include <iostream>
using namespace std;


struct Course{
    private: 
    int courseNumber;
    string courseName;
    int previousCourseNumber;

    public:
    Course(int c, string n){
        courseNumber = c;
        courseName = n;
    };

    void print(){
        cout << "Course Number: " << courseNumber << endl;
        cout << "Course Name: " << courseName << endl;
    };

    //mutators
    void changeCourseNumber(int newCourseNumber){
        previousCourseNumber = courseNumber;
        courseNumber = newCourseNumber;
    };

    //accessors
    int getCourseNumber(){
        return courseNumber;
    };
};  

void func(int &a){
    a = 20;
}

int main(){

    //reference: baseline value?

    int a = 10;

    //pointer
    int *p = &a;

    cout << "a: " << a << endl;

    //&a is memory address of a
    cout << "&a: " << &a << endl;

    //p is the memory address of a
    cout << "p: " << p << endl;

    //&p is the memory address of p
    cout << "&p: " << &p << endl;

    cout << "*p: " << *p << endl << endl;

    //*p is the value of a and p doesn't have and can store value
    *p = 20;
    a = 30;

    cout << "a: " << a << endl;
    cout << "*p: " << *p << endl << endl;


    cout << "a: " << a << endl;
    cout << "*p: " << *p << endl << endl;

    int *b = new int(2);

    func(*b);
    
    //
    cout << *b << endl;


    return 0;
}