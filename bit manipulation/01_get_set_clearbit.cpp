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
int ClearBitInRange(int n, int i, int j)
{
    int a = (~0) << (j + 1);
    int b = (1 << i) - 1;
    return (n & (a | b));
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << UpdateBit(n, p, 0) << endl;
    // cout << ClearBit(n, p) << endl;
    cout << ClearBitInRange(63,2,4) << endl;
    // cout << SetBit(n, p) << endl;
    // cout << GetBit(n, p) << endl;

    return 0;
}