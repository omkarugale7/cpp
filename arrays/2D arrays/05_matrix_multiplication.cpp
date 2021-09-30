#include <iostream>

using namespace std;
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    int mat1[n1][n2], mat2[n2][n3], mat[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> mat2[i][j];
        }
    }
    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 0; j < n3; j++)
    //     {
    //         mat[i][j] = 0;
    //     }
    // }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            int ans = 0;
            for (int k = 0; k < n2; k++)
            {
                ans += (mat1[i][k]) * (mat2[k][j]);
            }
            mat[i][j] = ans;
        }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}