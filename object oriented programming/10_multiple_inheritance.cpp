#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// inheritance = we can inherit attributes or members of a class into another class
//  derived class(child class) - class that inherits from another class
// base class(parent class) - the class being inherited from
//  derived class(child class) - class that inherits from another class
// single inheritance -> 1 base and 1 derived class
class A
{
public:
    void funcA()
    {
        cout << "base class inherited! from A" << endl;
    }
};
class B
{ // note: private data members are not inherited
public:
    void funcB()
    {
        cout << "base class inherited! from B" << endl;
    }
};
class C : public A, public B // this means the public and protected  attributes and members
                             // of a class A and B comes into  class C publicly
{
public:
    void funcC()
    {
        cout << "base class inherited! from C" << endl;
    }
};
using namespace std;
int main()
{
    B b; // we created an object for class B
    // b.funcA(); // there is no func() in B but still output will be seen as func() member function is inherited from A
    C c;
    c.funcA();
    c.funcC();
    return 0;
}
