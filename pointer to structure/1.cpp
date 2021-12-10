#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct square
{
    int side;
    int area;
};

int main()
{
    struct square r; // instead of this you can also write square r in cpp
    r.side = 5;
    r.area = r.side * r.side;
    cout << r.side << " " << r.area << endl;
    struct square *p = &r;
    (*p).side = 6;
    (*p).area = (*p).side * (*p).side;
    cout << r.side << " " << r.area << endl;
    p->side = 7;
    p->area = p->side * p->side;
    cout << r.side << " " << r.area << endl;
    struct square *p1;
    p1 = new square;
    p1->side = 5;
    p1->area = p1->side * p1->side;
    cout << p1->side << " " << p1->area << endl;
    return 0;
}