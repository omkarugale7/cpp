#include <iostream>

using namespace std;
int main()
{
    string s1 = "1234567";
    cout << s1 << endl;
    s1.erase(3, 1);
    cout << s1 << endl;
    return 0;
}