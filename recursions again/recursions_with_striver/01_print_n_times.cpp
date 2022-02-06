/*Editor: Omkar Ugale
Time : .  22nd jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void PrintName(string s, int n)
{
    if (!n)
        return;
    cout << s << endl;
    PrintName(s, n - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int n;
        cin >> n;
        PrintName(s,n);
    }
    return 0;
}