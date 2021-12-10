#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v;
    // we'll try to take input in vector as we  do in array
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    for (auto num : v)
    {
        cout << num << endl;     
    }
    return 0;
}