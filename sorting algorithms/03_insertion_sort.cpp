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
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > arr[i])
                {
                    int temp = arr[i];
                    for (int k = i; k > j; k--)
                    {
                        arr[k] = arr[k - 1];
                    }
                    arr[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout<< arr[i]<<" ";
    }
    return 0;
}