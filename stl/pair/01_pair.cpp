#include <bits/stdc++.h>

using namespace std;
int main()
{
    pair<int, char> p;
    p.first = 1;
    p.second = 'a';
    cout << p.first << " " << p.second << endl;
    pair<int, char> p1;
    p1 = make_pair(2, 'b');
    cout << p1.first << " " << p1.second << endl;
    pair<int, char> p2;
    p2 = {3, 'c'};
    cout << p2.first << " " << p2.second << endl;

    return 0;
}