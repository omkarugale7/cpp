/*Editor: Omkar Ugale
Time : .  22nd jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void PrintSubsequence(int arr[], int n, int k)
{
   if (!n)
      return;
   int count = 0, sum = 0;
   int m = n;
   while (m)
   {
      if (m & 1)
         sum += arr[count];
      m = m >> 1;
      count++;
   }
   if (sum == k)
   {
      int m = n,count =0;
      while (m)
      {
         if (m & 1)
            cout << arr[count] << " ";
         m = m >> 1;
         count++;
      }
   cout  << endl;
   }

   return PrintSubsequence(arr, n - 1,k);
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k;
      cin >> n >> k;
      int arr[n];
      for (int i = 0; i < n; i++)
         cin >> arr[i];
      PrintSubsequence(arr, pow(2, n) - 1, k);
   }
   return 0;
}