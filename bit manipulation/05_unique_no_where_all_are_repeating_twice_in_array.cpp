#include <iostream>

using namespace std;
int main()
{
    int n, k = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        k = k ^ arr[i];
    }
    cout << k << endl;

    return 0;
}