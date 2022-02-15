/*Editor: Omkar Ugale
Time : .  28th jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void findCombination(vector<vector<int>> &ans, vector<int> &arr, vector<int> &ds, int k, int i)
{
   if (i == arr.size())
   {
      if (!k)
         ans.push_back(ds);
      return;
   }
   if (arr[i] <= k)
   {
      ds.push_back(arr[i]);
      findCombination(ans, arr, ds, k - arr[i], i);
      ds.pop_back();
   }
   findCombination(ans, arr, ds, k, i + 1);
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
   vector<vector<int>> ans;
   vector<int> ds;
   findCombination(ans, candidates, ds, target, 0);
   return ans;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, z;
      cin >> n >> z;
      vector<int> arr;
      for (int i = 0; i < n; i++)
      {
         int k;
         cin >> k;
         arr.push_back(k);
      }
      vector<vector<int>> ans = combinationSum(arr, z);
      for (int i = 0; i < ans.size(); i++)
      {
         for (int j = 0; j < ans[i].size(); j++)
         {
            cout << ans[i][j] << " ";
         }
         cout << endl;
      }
   }

   return 0;
}