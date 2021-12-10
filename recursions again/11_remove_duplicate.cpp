#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string rem_dup(string s)
{
    if (s.length() == 0)
        return "";
    char a = s[0];
    string ans = rem_dup(s.substr(1));
    if (a == ans[0])
        return ans;
    return (a + ans);
}
int main()
{
    string s;
    cin >> s;
    cout << rem_dup(s);
    return 0;
}
