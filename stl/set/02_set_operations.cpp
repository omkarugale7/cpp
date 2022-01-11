#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    set<int> s;
    s.insert(1); // will insert element at the end
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    cout << endl;
    auto z = s.find(1);
    cout << *z << endl;
    // auto i sets an iterator at given position and will iterate till its  points at end
    // The auto keyword specifies that the type of the variable that is begin declared will automatically be
    // deduced from its initializer
    s.insert(5);
    s.insert(5);
    s.insert(6);
    for (auto i : s) //
        cout << i << " ";
    cout << endl;
    s.erase(5);         // will erase the elememt
    s.erase(s.begin()); // will erase s.begin() that is 1
    for (auto i : s)
        cout << i << " ";
    cout << endl;
    for (auto i = s.rbegin(); i != s.rend(); i++) // will iterate in reverse manner rbegin gives beginning element from reverse
        cout << *i << " ";
    cout << s.size() << endl;
    cout << s.max_size() << endl;

    return 0;
}