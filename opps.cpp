#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Test {
public:
    char* name;

    Test(const char* n){
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    Test(const Test& t){
        name = new char[strlen(t.name) + 1];
        strcpy(name, t.name);
    }

    // Display function
    void display() {
        cout << "Name: " << this->name << endl;
    }

    ~Test(){
        delete[] name;
    }
};


class Student {
    string name;
    int rollNumber;
    string classTeacher;

    public: 
        Student(string n,int r,string c){
            this->name = n;
            this->rollNumber = r;
            this->classTeacher = c;
        }

    public:

        void setStudent(string n,int r,string c){
                this->name = n;
                this->rollNumber = r;
                this->classTeacher = c;
        }

        void print(){
            cout <<"Name: "<< this->name <<endl;
            cout <<"Roll: "<< this->rollNumber <<endl;
            cout <<"Class Teacher: "<< this->classTeacher <<endl;
        }

        string getName(){
            return this->name;
        }
};


int main() {


    Student s1("altamish",10,"rizwan sir");

    // s1.setStudent("altamish",10,"rizwan sir");
    // s1.print();
    cout <<s1.getName();



    // char name[10] = "Altamish";
    // Test obj(name);

    // Test obj1(obj);

    // char name1[10] = "rihan bha";
    // obj1.name = name1;

    // obj.display();
    // obj1.display();
    
    return 0;
}
