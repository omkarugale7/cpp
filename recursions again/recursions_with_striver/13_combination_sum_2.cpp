/*Editor: Omkar Ugale
Time : .  7th Feb 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
vector<vector<int>> Arrays(vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans, int index, int k, int sum)
{
   if (index == arr.size())
   {
      if (sum == k)
         ans.push_back(ds);
      return ans;
   }
   sum += arr[index];
   ds.push_back(arr[index]);
   Arrays(arr, ds, ans, index + 1, k, sum);
   sum -= arr[index];
   ds.pop_back();
   Arrays(arr, ds, ans, index + 1, k, sum);
   return ans;
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
   set<int> ans;
   vector<int> arr;
   vector<int> ds;
   vector<vector<int>> anss;
   for (int i = 0; i < candidates.size(); i++)
   {
      ans.insert(candidates[i]);
   }
   int i = 0;
   for (auto it : ans)
      arr[i++] = it;
   return Arrays(arr, ds, anss, 0, target, 0);
}
int main()
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
   vector<vector<int>> ans = combinationSum2(arr, z);
   for (int i = 0; i < ans.size(); i++)
   {
      for (int j = 0; j < ans[i].size(); j++)
      {
         cout << ans[i][j] << " ";
      }
      cout << endl;
   }
   return 0;
}