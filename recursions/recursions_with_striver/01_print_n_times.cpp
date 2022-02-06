/* Code Editor: Omkar Ugale
Time : 3.22  14th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void print(int n)
{
    if (n == 0)
        return;
    cout << "omkar" << endl;
    print(n - 1);
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
    }
    return 0;
}