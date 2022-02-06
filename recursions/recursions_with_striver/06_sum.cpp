/* Code Editor: Omkar Ugale
Time : 3.32  14th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int sum(int n)
{
    if (!n)
        return 0;
    return n + sum(n-1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout<<sum(n)<<endl;
    }
    return 0;
}