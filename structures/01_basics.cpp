#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct rect
{
    int l;
    int b;
};

int main()
{
    struct rect r = {10, 5};
    printf("length = %d , breadth = %d , area = %d\n", r.l, r.b, r.l * r.b);
    cout << "length = " << r.l << " breadth = " << r.b << " area is " << r.l * r.b << endl;
    r.l = 15;
    r.b = 20;
    printf("length = %d , breadth = %d , area = %d\n", r.l, r.b, r.l * r.b);
    cout << "length = " << r.l << " breadth = " << r.b << " area is " << r.l * r.b << endl;
    rect r1;  //In C++, the struct keyword is optional before in declaration of a variable. In C, it is mandatory.
    r1.l = 25;
    r1.b = 30;
    printf("length = %d , breadth = %d , area = %d\n", r1.l, r1.b, r1.l * r1.b);
    cout << "length = " << r1.l << " breadth = " << r1.b << " area is " << r1.l * r1.b << endl;
    return 0;
}