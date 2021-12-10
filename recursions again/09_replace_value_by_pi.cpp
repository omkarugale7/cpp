#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void replace(string s, int i)
{
    if (i == s.length())
        return ;
    if (s[i] == 'p' && s[i + 1] == 'i')
    {
       cout<<"3.14";
       i++;
    }
    cout<<s[i];
    return replace(s, i + 1);
}
int main()
{
    string s;
    cin >> s;
    replace(s,0);
    return 0;
}