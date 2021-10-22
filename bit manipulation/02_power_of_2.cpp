#include <iostream>

using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    if ((n & (n - 1)) == 0)
    {
        cout << "yes" << endl;
        cout << count << endl;
    }
    else
    {
        cout << "no" << endl;
        cout << count << endl;
    }

    return 0;
}
// #include <iostream>

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a = 1, count = 0;
//     while (a < n)
//     {
//         a *= 2;
//         count++;
//     }
//     if (n == a)
//     {
//         cout << "yes" << endl;
//         cout << count << endl;
//     }
//     else
//     {
//         cout << "no" << endl;
//         cout << count << endl;
//     }

//     return 0;
// }