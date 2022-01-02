#include <iostream>

using namespace std;
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
int NumberOfSetBits2(int n)
{
    int count = 0;
    while (n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout << NumberOfSetBits(n) << endl;
    cout << NumberOfSetBits2(n) << endl;
    return 0;
}