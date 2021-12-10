// return first and last occourence in array
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int first(int arr[], int n, int target, int i)
{
    if (i == n)
        return -1;
    if (arr[i] == target)
        return i;
    return first(arr, n, target, i + 1);
}
int last(int arr[], int n, int target, int i)
{
    if (i == n)
        return -1;
    int restarray = last(arr, n, target, i + 1);
    if (restarray != -1)
        return restarray;
    if (arr[i] == target)
        return i;
    return -1;
}
int main()
{
    int n, target;
    cin >> n >> target;
    int num[n];
    for (int i = 0; i < n; i++)
        cin >> num[i];
    cout << first(num, n, target, 0) << " " << last(num, n, target, 0) << endl;
    return 0;
}