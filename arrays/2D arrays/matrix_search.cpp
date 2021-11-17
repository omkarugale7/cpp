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
    int r = 0, c = m - 1;
    bool a = false;
    while (r < n && c >= 0)
    {
        if (num[r][c] == k)
        {
            a = true;
            break;
        }
        else if (num[r][c] > k)
        {
            r++
        }
        else
        {
            r++;
        }
    }
    if (a)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
    return 0;
}
