#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string movex(string s)
{
    if (s.length() == 0)
        return "";
    char ch = s[0];
    string ans = movex(s.substr(1));
    if (ch == 'x')
        return ans + ch;
    return ans;
}
int main()
{
    string s;
    cin >> s;
    return 0;
}