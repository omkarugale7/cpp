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
    void printinfo()
    {
        cout << "name = " << name << " age = " << age << " gender = " << gender << endl;
    }
    student(student &a)
    {
        cout << "copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    bool operator+(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
            return true;
        else
            return false;
    }
};
int main()
{
    student a("omkar", 20, 1);
    a.printinfo();
    student b;
    student c = a;
    c.printinfo();
    if (c + a)            // this is operator overloading we defined + (plus) to work as ==
        cout << "same" << endl;
    else
        cout << "not same" << endl;
    if (b + a)            // this is operator overloading we defined + (plus) to work as ==
        cout << "same" << endl;
    else
        cout << "not same" << endl;

    return 0;
}