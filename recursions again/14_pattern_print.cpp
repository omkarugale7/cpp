#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void Pattern_Print_lower_triangle(int n)
{
    if (n == 0)
        return;

    Pattern_Print_lower_triangle(n - 1);
    for (int i = 0; i < n; i++)
        cout << i + 1 << " ";
    cout << endl;
}
void Pattern_Print_upper_triangle(int n)
{
    if (n == 0)
        return;

    for (int i = 0; i < n; i++)
        cout << i + 1 << " ";
    cout << endl;
    Pattern_Print_upper_triangle(n - 1);
}
void Pattern_Print_both_triangle(int n)
{
    if (n == 0)
        return;

    for (int i = 0; i < n; i++)
        cout << i + 1 << " ";
    cout << endl;
    Pattern_Print_both_triangle(n - 1);      
    for (int i = 0; i < n; i++)
        cout << i + 1 << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    // Pattern_Print_upper_triangle(n);
    // Pattern_Print_lower_triangle(n);
    Pattern_Print_both_triangle(n);
    return 0;
}