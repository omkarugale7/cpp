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
class B : public A // this means the public and protected  attributes and members of a class A comes into  class b publicly
{                  // note: private data members are not inherited
public:
};

using namespace std;
int main()
{
    B b;       // we created an object for class B
    b.funcA(); // there is no func() in B but still output will be seen as func() member function is inherited from A

    return 0;
}
