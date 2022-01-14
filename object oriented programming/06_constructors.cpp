#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class student
{
public:
    string name;
    int age;
    bool gender;
    student() // default constructor
    {
        cout << "default constructor" << endl;
    }
    student(string s, int a, bool g) //parameterized constructor
    {
        cout << "parameterized constructor" << endl;
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
    student(student &x)
    {
        cout << "copy constructor" << endl;
        name = x.name;
        age = x.age;
        gender = x.gender;
    }
    bool operator+(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
            return true;
        else
            return false;
    }
    ~student()
    {
        cout << "destructor called" << endl;
    }
};
int main()
{
    student a("omkar", 20, 1);
    // a.printinfo();
    student b;     // we created an object and didnt pass any  parameters, here default constructor is called
                   // and if we dont make any default constructor and create an object and dont pass any parameters it'll
                   // throw error
    student c = a; // also can be declared as => student c (a);
    c.printinfo();
    // if (c + a)            // this is operator overloading we defined + (plus) to work as ==
    //     cout << "same" << endl;
    // else
    //     cout << "not same" << endl;
    // if (b + a)            // this is operator overloading we defined + (plus) to work as ==
    //     cout << "same" << endl;
    // else
    //     cout << "not same" << endl;

    return 0;
}