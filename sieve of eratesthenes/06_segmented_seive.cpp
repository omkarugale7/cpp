/*Editor: Omkar Ugale
Time : .  16th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
vector <int> primes;
void primefact(int n)
{
    ll spf[n] = {0};
    for (ll i = 2; i <= n; i++)
    {
        if (spf[i] == 0)
        {
            primes.push_back(i);
            for (ll j = i * i; j <= n; j += i)
            {  
                spf[j] = i;
            }
        }
    }
    for (ll i = 2; i <= n; i++)
    {
        if (!spf[i])
            cout << i << " ";
    }
}
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
    }
    return 0;
}