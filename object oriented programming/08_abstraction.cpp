#include <iostream>
#include <bits/stdc++.h>
// abstraction == hiding 'sensitive' data from user.
using namespace std;
class A // access modifiers => public,private,protected
{
public:                  // there are two parts of a class data members and member functions
                         //  and can be accessed everywhere so public=> own,derived,outside class
    void print_private() // member functions are functions of a class
    {
        cout << b << endl;
    }
    int a = 10; // data members is a part of class the variables that we declare
    void funcA()
    {
        cout << "public function called" << endl;
    }

private: // can be accessed only in the class , private=> own class
    int b = 20;
    void funcB()
    {
        cout << "private function called" << endl;
    }

protected: // can be accessed only in the class and inherited class , protected => own,derived class
    int c = 30;
    void funcC()
    {
        cout << "protected function called" << endl;
    }
};
int main()
{
    A obj1;
    obj1.funcA();

    return 0;
}