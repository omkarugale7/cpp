#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;
    int st = 0, maxlen = 0, i = 0;
    while (1)
    {
        if (arr[i] != ' ' || arr[i] != '\0')
        {
            maxlen = max(maxlen, i);
            i = 0;
        }
        else
            i++;

        if (arr[i] != '\0')
        {
            break;
        }
    }
    cout << maxlen;
    return 0;
}