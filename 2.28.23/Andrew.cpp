#include <iostream>
using namespace std;

class teacher {
private:

    string teacherName;


public:

    string getName(string a){
        return teacherName;
    }

    //type name(type name){definition}


    void setName(string temp){
        teacherName = temp;        
    }

};

int main(){
    teacher trollbridge{};

    trollbridge.setName("trollbridge");
    cout << trollbridge.getName("hey");


    return 0;
}