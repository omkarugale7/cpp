#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// inheritance = we can inherit attributes or members of a class into another class
//  derived class(child class) - class that inherits from another class
// base class(parent class) - the class being inherited from
//  derived class(child class) - class that inherits from another class
// multiple inheritance -> 2 base and 1 derived class
class A
{
public:
    void funcA()
    {
        cout << "base class inherited! from A" << endl;
    }
};
class B
{
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
    int hi = 1; // it can also have its own variables and members
};
using namespace std;
int main()
{
    C c;
    c.funcA();
    c.funcB();
    return 0;
}
