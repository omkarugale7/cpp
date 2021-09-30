#include <iostream>

using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int num[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> num[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (num[i][j] == k)
            {
                cout << "element found" << endl;
                cout << "row no." << i << "  column no." << j;
            }
        }
        cout << endl;
    }

    return 0;
}