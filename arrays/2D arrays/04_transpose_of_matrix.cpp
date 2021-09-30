#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> num[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int a = num[i][j];
            num[i][j] = num[j][i];
            num[j][i] = a;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}