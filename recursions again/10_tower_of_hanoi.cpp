#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void TowerOfHanoi(int n, char src, char helper, char dest)
{
    if (n == 0) // base case
        return;
    TowerOfHanoi(n - 1, src, dest, helper);                  // we first moved n-1 blocks from src to helper rod
    cout << "Move a block from " << src << " to " << dest << endl; // we then moved 1 remaining block from src to dest
    TowerOfHanoi(n - 1, helper, src, dest);                  // we now move remaining n-1 blocks in helper to dest
}
int main()
{
    int n;
    cin >> n;
    TowerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}