/* Code Editor: Omkar Ugale
Time : 3.26  14th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int sums(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return sum;
    }
    return sums(i - 1, sum + i);
}
int sum(int n)
{
    if (!n)
        return 0;
    return n + sum(n - 1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << sum(n) << endl;
        cout << sums(n, 0);
    }
    return 0;
}