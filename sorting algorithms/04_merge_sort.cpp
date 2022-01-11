#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1], b[n2];
    for (int i = 0; i < n1; i++)
        a[i] = arr[l + i];
    for (int i = 0; i < n2; i++)
        b[i] = arr[mid + 1 + i];
    int k = l, i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j]) // change the sign < to > for descending order
            arr[k++] = a[i++];
        else
            arr[k++] = b[j++];
    }
    while (i < n1)
        arr[k++] = a[i++];
    while (j < n2)
        arr[k++] = b[j++];
}
void MergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
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
        MergeSort(arr, 0, n - 1);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
    return 0;
}