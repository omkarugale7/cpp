#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// inheritance = we can inherit attributes or members of a class into another class
//  derived class(child class) - class that inherits from another class
// base class(parent class) - the class being inherited from
//  derived class(child class) - class that inherits from another class
// multi level inheritance -> A -> B -> C
class A
{
public:
    void funcA()
    {
        cout << "base class inherited! from A" << endl;
    }
};
class B : public A // B inherits from A
{                  
public:
 void funcB()
    {
        cout << "base class inherited! from B" << endl;
    }
};
class C : public B // C inherits from B
{
public:
    int hi = 1; // it can also have its own variables and members
};

using namespace std;
int main()
{
    C a;        
    a.funcA(); //  fucnA is inherited in B and then C inherits it from B
    C b;        
    b.funcB(); //  funcB inherited into C from B    
    
    return 0;
}
