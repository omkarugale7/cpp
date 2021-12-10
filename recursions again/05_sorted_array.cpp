// check if array is sorTED
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool Chk_Array(int arr[], int n)
{
    if (n == 1)   //  base case 
        return true;
    bool restarray = Chk_Array(arr + 1, n - 1);
    return (restarray && (arr[0] < arr[1]));
}
int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
        cin >> num[i];
    cout << Chk_Array(num, n);
    return 0;
}