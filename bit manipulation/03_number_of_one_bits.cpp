#include <iostream>

using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    cout << count << endl;

    return 0;
}