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
int NumberOfSetBits(int n)
{
    int count = 0;
    while (n)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    return count;
}
int main()
{
    int n, m, i, j;
    cin >> n >> m >> i >> j;
    cout << ((n << i) | ClearBitInRange(m, i, j)) << endl;
    cout << NumberOfSetBits(15) << endl;
    return 0;
}