#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct Point
{
    int x, y;
};
int main()
{

    // Create an array of structures
    int n;
    cin >> n;
    struct Point arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].x >> arr[i].y;
    }
    // sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].x << arr[i].y << endl;
    }

    return 0;
}
