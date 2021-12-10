#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct rect
{
    int a;
    int b;
};
int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rect *p5;
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
    return 0;
}