#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a;
    cin >> a;
    int &r = a;
    cout << a << endl;
    cout << r << endl;
    a++;
    cout << a << endl;
    cout << r << endl;
    r++;
    cout << a << endl;
    cout << r << endl;

    return 0;
}    