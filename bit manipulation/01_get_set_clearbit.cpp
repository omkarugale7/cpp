#include <iostream>

using namespace std;
int GetBit(int n, int p)
{
    return (((1 << p) & n) != 0);
}
int ClearBit(int n, int p)
{
    int z = ~(1 << p);
    return (z & n);
}
int SetBit(int n, int p)
{
    return ((1 << p) | n);
}
int UpdateBit(int n, int p, int value)
{
    int z = ~(1 << p);
    n = (z & n);
    return (n | (value << p));
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << UpdateBit(n, p, 0) << endl;
    cout << UpdateBit(n, p, 1) << endl;
    return 0;
}