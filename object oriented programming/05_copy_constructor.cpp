#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class student
{
public:
    string name;
    int age;
    bool gender;
    student(string s, int a, bool g) //parameterized contructor
    {
        name = s;
        age = a;
        gender = g;
    }
    
    void printinfo()
    {
        cout << "name = " << name << " age = " << age << " gender = " << gender << endl;
    }
};
int main()
{
    student a("omkar", 20, 1);
    student c = a;
    c.printinfo();
   

    return 0;
}