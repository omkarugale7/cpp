/*Editor: Omkar Ugale
Time : .  22nd jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int Fib(int n)
{
   if (n <= 1)
      return n;
   return Fib(n - 1) + Fib(n - 2);
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n; // enter zero based indexed number like 0th term will be 0 1st
                // will be 1 2nd - 1 3rd -2 4th - 3 5th- 5 6th - 8 7th - 13 8th - 23
      cout << Fib(n) << endl;
   }
   return 0;
}