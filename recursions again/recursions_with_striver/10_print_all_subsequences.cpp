/*Editor: Omkar Ugale
Time : .  22nd jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void PrintSubsequence(int arr[], int n)
{
   if (!n)
      return;
   int count = 0;
   int m = n;
   while (m)
   {
      if (m & 1)
         cout << arr[count]<<" ";
      m = m >> 1;
      count++;
   }
   cout << endl;
   return PrintSubsequence(arr, n - 1);
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];
   PrintSubsequence(arr, pow(2, n)-1);
   }
   return 0;
}