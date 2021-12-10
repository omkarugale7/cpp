#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class student
{
public:
    string name;
    int age;
    bool gender;
    student()// default constructor
    {
        cout << "default constructor is called" << endl;
    }
    student(string s, int a, bool g) //parameterized contructor
    {
        name = s;
        age = a;
        gender = g;
    }
    void SetName(string s)  
    {
        name = s;
    }
    void GetName()
    {
        cout << " name = " << name << endl;
    }
    void printinfo()
    {
        cout << "name = " << name << " age = " << age << " gender = " << gender << endl;
    }
};
int main()
{
    student a("omkar", 20, 1);
    cout << a.name << " " << a.age << " " << a.gender << endl;
    a.printinfo();
    student b; // we created an object and didnt pass any  parameters, here default constructor is called
              // and if we dont make any default constructor and create an object and dont pass any parameters it'll 
             // throw error


    return 0;
}