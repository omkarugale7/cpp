//divisible by A or B under n
#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int an = c / a;
    int bn = c / b;
    int ex = c / (a * b);
    cout << an + bn - ex << endl;
    return 0;
}