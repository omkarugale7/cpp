#include <iostream>

using namespace std;
bool pairsum(int num[], int n, int k)
{
    int low = 0, high = n - 1;

    while (low < high)
    {  
        
    }
    int main()
    {
        int n, k;
        cin >> n >> k;
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        cout << pairsum(num, n, k);
        return 0;
    }
    // #include <iostream>

    // using namespace std;
    // bool pairsum(int num[], int n, int k)
    // {
    //     for (int i = 0; i < n - 1; i++)
    //     {
    //         for (int j = i; j < n; j++)
    //         {
    //             if (num[i] + num[j] == k)
    //             {
    //                 cout << i << " " << j << endl;
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }
    // int main()
    // {
    //     int n, k;
    //     cin >> n >> k;
    //     int num[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> num[i];
    //     }
    //     cout << pairsum(num, n, k);
    //     return 0;
    // }