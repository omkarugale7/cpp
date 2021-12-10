#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class student
{
public:          // if not mentioned public the data members becomes private which can be accessed by
                 // only in the class and not outside
    string name;
    int age;
    bool gender;
    void printinfo()
    {
        cout << "name = " << name << " age = " << age << " gender = " << gender << endl;
    }
};
int main()
{
    student s1;
    s1.name = "omkar";
    s1.age = 20;
    s1.gender = 1;
    cout << s1.name << " " << s1.gender << " " << s1.age << endl;
    student s[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "name = ";
        cin >> s[i].name;
        cout << "age = ";
        cin >> s[i].age;
        cout << "gender = ";
        cin >> s[i].gender;
    }
    //printing the data by accessing the class in main funciton itself
    for (int i = 0; i < 3; i++)
        cout << "name = " << s[i].name << " age = " << s[i].age << " gender = " << s[i].gender << endl;
    cout << endl;
    //printing the data by using a function in the class
    for (int i = 0; i < 3; i++)
        s[i].printinfo();

    return 0;
}