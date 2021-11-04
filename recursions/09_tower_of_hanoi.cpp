#include <iostream>

using namespace std;
void TowerOfHanoi(int n, char src, char dest, char helper)
{
    if (n == 0)
    {
        return;
    }

    TowerOfHanoi(n - 1, src, helper, dest);
    cout << "Move From " << src << " To " << dest << endl;
    TowerOfHanoi(n - 1, helper, src, dest);
}
int main()
{
    int n;
    cin >> n;
    TowerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}