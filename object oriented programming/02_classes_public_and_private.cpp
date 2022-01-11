#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class student
{
    string name;

public:
    int age;
    bool gender;
    void SetName(string s)
    {
        name = s;
    }
    void GetName() // this is also an example of encapsulation
                   //  we can say that here, the variable name and the functions getname() and setname() are
                   //  binded together which is nothing but encapsulation.
    {
        cout << " name = " << name << endl;
    }
    void printinfo()
    {
        cout << " age = " << age << " gender = " << gender << endl;
    }
};
int main()
{
    student s[3];
    for (int i = 0; i < 3; i++)
    {
        // cin >> s[i].name;           these lines throws error because now NAME is a private data member
        cout << "name = ";
        string ss;
        cin >> ss;
        s[i].SetName(ss);
        cout << "age = ";
        cin >> s[i].age;
        cout << "gender = ";
        cin >> s[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        s[i].GetName();
        s[i].printinfo();
    }

    return 0;
}