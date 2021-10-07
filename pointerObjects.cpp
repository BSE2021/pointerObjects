// pointerObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Sample {
    string name;
    int age;
public:
    //constructor
    Sample(string n = "", int a = 0) {
        name = n;
        age = a;
    }
    //setter function 
    void setter(string n, int a) {
        name = n;
        age = a;
   }
    //getter function for name
    string getterName() {
        return(name);
    }
    //getter function for age
    int getterAge() {
        return age;
    }

};
class Derived : public Sample {

};

Sample* SetFunction(Sample* pt) {
    int i, ag;
    string nam;
    for (i = 0; i <= sizeof(pt); i++) {
        cout << "\nEnter the name and age:";
        cin >> nam >> ag;
        pt->setter(nam, ag);
        pt++;
    }
    return(pt);
}

void GetFunction(Sample* pt) {
    int i;
    for (i = 0; i <= sizeof(pt); i++) {
        cout << "\nName: " << pt->getterName();
        cout << "\nAge: " << pt->getterAge();       
        pt++;
    }
   
}

int main()
{
    Sample s[5];//array of objects
    Sample* p; // pointer of Sample class type
    //Sample* p= new Derived; //use this when you want to create a new object of  derived class

    p = s; //use this to assign the array of objects to a pointer
    SetFunction(p);//passing pointer to array of objects into SetFunction
    GetFunction(p);
    
}
