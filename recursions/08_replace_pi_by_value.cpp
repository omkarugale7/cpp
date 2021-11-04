#include <iostream>

using namespace std;
void replace(string s)

{
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        s.erase(0, 2);
        cout << "3.14";
        replace(s);
    }
    else
    {
        cout << s[0];
        s.erase(0, 1);

        replace(s);
    }
}
int main()
{
    string s = "pippxxppiixipi";
    replace(s);
    return 0;
}