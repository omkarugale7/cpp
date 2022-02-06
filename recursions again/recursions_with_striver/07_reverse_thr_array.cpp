/*Editor: Omkar Ugale
Time : .  18th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void ReverseArray(int arr[] , int l , int r)
{
    if (l>r/2)
    return;
     swap(arr[l],arr[r-l]);
     ReverseArray(arr , l+1 , r);    
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
            ReverseArray(arr,0,n-1);
        for (int i = 0; i < n; i++)
            cout<< arr[i]<<" "; 
    }
    return 0;
}