#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;
    while (b)
    {
        if (b & 1)
            ans *= a;
        a *= a;
        b /= 2;
    }
    cout << ans << endl;

    return 0;
}