//Selection Sort- swap minimum element of unsorted array with first element of unsorted array.
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void SelectionSort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
        SelectionSort(n, arr);
    }
    return 0;
}