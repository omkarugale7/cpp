#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class A
{
public:
    int a;
    void funcA()
    {
        cout << "public function called" << endl;
    }

private:
    int b;
    void funcB()
    {
        cout << "private function called" << endl;
    }

protected:
    int c;
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