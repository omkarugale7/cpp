#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int bitcount[32]={0};
        int z = 0;
        while (z != 32)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] & 1)
                    bitcount[z]++;
                arr[i] = arr[i] >> 1;
            }
            z++;
        }
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            if (bitcount[i] % 3 == 1)
                ans  = ans | (1<<i);
        }
        cout << ans << endl;
    }
    return 0;
}