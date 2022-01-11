#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        s.insert(k);
    }
    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    cout << endl;
    for (auto i : s)
        cout << i << " ";
    return 0;
}