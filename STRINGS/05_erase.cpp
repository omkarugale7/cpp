#include <iostream>

using namespace std;
int main()
{
    string s1 = "abcdefghijklmnopqrstuvwxyz";
    cout << s1 << endl;
    s1.erase(3, 20);
    cout << s1 << endl;
    return 0;
}