#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    multiset<int> s;
    s.insert(1); // will insert element at the end
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    cout << endl;
    s.erase(5); // this will erase all the elements with value 5 in the set
    s.erase(s.begin());
    for (auto i : s)
        cout << i << " ";
    cout << endl;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5); //now we inserted 5 again and this time we'll delete only one element
    for (auto i : s)
        cout << i << " ";
        cout<<endl;
    s.erase(s.find(5));
    for (auto i : s)
        cout << i << " ";
        cout<<endl;

    for (auto i = s.rbegin(); i != s.rend(); i++) // will iterate in reverse manner rbegin gives beginning element from reverse
        cout << *i << " ";
    cout << endl;
    cout << s.size() << endl;
    cout << s.max_size() << endl;

    return 0;
}