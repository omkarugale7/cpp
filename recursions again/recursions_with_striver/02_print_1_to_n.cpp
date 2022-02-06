/* Code Editor: Omkar Ugale
Time : 3.21 14th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void print(int i, int n)
{
    if (i > n)
        return;
    cout << i++ << " ";
    print(i, n);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        print(1, n);
    }
    return 0;
}