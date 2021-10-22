#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    int num1 = xorsum;
    int getbit = 0, count = 0;
    while (getbit != 1)
    {
        getbit = xorsum & 1;
        xorsum = xorsum >> 1; // shifts the bits to the right ny 1 postion so no need to do xorsum  /= 10;
        count++;
    }

    int something = 1 << (count - 1);
    int xrsum = 0;
    for (int i = 0; i < n; i++)
    {

        if ((arr[i] & something) == 0)
        {
            xrsum = xrsum ^ arr[i];
        }
    }
    int num2 = xrsum ^ num1;
    cout << xrsum << " " << num2;

    return 0;
}