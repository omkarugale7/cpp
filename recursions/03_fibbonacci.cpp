#include <iostream>

using namespace std;
long long int fibb(long long int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibb(n-1) + fibb(n - 2);
    }
}
int main()
{
   long long  int n;
    cin >> n;
    cout << fibb(n) << endl;
    return 0;
}