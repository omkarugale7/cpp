/* Code Editor: Omkar Ugale
Time : 3.19  14th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void print(int n)
{
    if (n == 0)
        return;
    cout << n-- << " ";
    print(n);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        print(n);
        cout << endl;
    }
    return 0;
}