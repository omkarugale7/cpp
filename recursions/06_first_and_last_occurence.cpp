#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int first(int n, int arr[], int k, int i)
{
    if (i == n)
    {
        return -1;
    }

    if (arr[i] == k)
    {
        return i;
    }

    return first(n, arr, k, i + 1);
}
int end(int n, int arr[], int k, int i)
{
    if (i == n)
    {
        return -1;
    }
    int restarray = end(n, arr, k, i + 1);
    if (restarray != -1)
    {
        return restarray;
    }

    if (arr[i] == k)
    {
        return i;
    }
    return -1;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << first(n, arr, k, 0) << " " << end(n, arr, k, 0) << endl;
    return 0;
}

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int arr[n], count = 0, num[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         num[i] = arr[i];
//     }

//     sort(num, num + n);
//     for (int i = 0; i < n; i++)
//     {
//         if (num[i] == k)
//         {
//             count++;
//         }
//     }
//     int count2 = 0;
//     int start = 0, end = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == k)
//         {
//             if (start == 0)
//             {
//                 start = i;
//             }
//             count2++;
//         }

//         if (arr[i] == k && count2 == count)
//         {
//             end = i;
//         }
//     }
//     cout << start << " " << end << endl;

//     return 0;
// }