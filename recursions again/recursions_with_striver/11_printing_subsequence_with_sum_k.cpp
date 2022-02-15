/*Editor: Omkar Ugale
Time : .  7th feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void PrintSubsequencebyrecursions(int arr[], int n, int k, int i, int sum, vector<int> &ans)
{
   if (i == n)
   {
      if (sum == k)
      {
         for (auto it : ans)
            cout << it << " ";
         cout << endl;
      }
      return;
   }
   sum += arr[i];
   ans.push_back(arr[i]);
   PrintSubsequencebyrecursions(arr, n, k, i + 1, sum, ans);
   sum -= arr[i];
   ans.pop_back();
   PrintSubsequencebyrecursions(arr, n, k, i + 1, sum, ans);
}
int CountByRecursions(int arr[], int n, int k, int i, int sum)
{
   int cnt = 0;
   if (i == n)
   {
      if (sum == k)
         cnt++;
      return cnt;
   }
   sum += arr[i];
   cnt += CountByRecursions(arr, n, k, i + 1, sum);
   sum -= arr[i];
   cnt += CountByRecursions(arr, n, k, i + 1, sum);
   return cnt;
}
int CountByRecursions2(int arr[], int n, int k, int i, int sum)
{
   int cnt = 0;
   if (i == n)
   {
      if (sum == k)
         return 1;
      return 0;
   }
   sum += arr[i];
   cnt += CountByRecursions2(arr, n, k, i + 1, sum);
   sum -= arr[i];
   cnt += CountByRecursions2(arr, n, k, i + 1, sum);
   return cnt;
}
bool PrintOnlyOneSubsequencebyrecursions(int arr[], int n, int k, int i, int sum, vector<int> &ans)
{
   if (i == n)
   {
      if (sum == k)
      {
         for (auto it : ans)
            cout << it << " ";
         cout << endl;
         return true;
      }
      return false;
   }
   sum += arr[i];
   ans.push_back(arr[i]);
   bool anso = PrintOnlyOneSubsequencebyrecursions(arr, n, k, i + 1, sum, ans);
   if (anso)
      return true;
   sum -= arr[i];
   ans.pop_back();
   bool ansoo = PrintOnlyOneSubsequencebyrecursions(arr, n, k, i + 1, sum, ans);
   if (ansoo)
      return true;
   return false;
}
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
      int m = n, count = 0;
      while (m)
      {
         if (m & 1)
            cout << arr[count] << " ";
         m = m >> 1;
         count++;
      }
      cout << endl;
   }

   return PrintSubsequence(arr, n - 1, k);
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
      vector<int> ans;
      PrintSubsequence(arr, pow(2, n) - 1, k);
      cout << "method 2" << endl;
      PrintSubsequencebyrecursions(arr, n, k, 0, 0, ans);
      cout << "Only ONe Subsequence with sum " << k << ": ";
      PrintOnlyOneSubsequencebyrecursions(arr, n, k, 0, 0, ans);
      cout << "total such sequences:" << CountByRecursions(arr, n, k, 0, 0) << endl;
   }
   return 0;
}