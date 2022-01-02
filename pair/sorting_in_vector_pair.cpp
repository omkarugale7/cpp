#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool MyComparaterAscending(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
bool MyComparaterdescending(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first > p2.first;
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
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            // pair<int, int> p;
            // p.first = arr[i];
            // p.second = i;
            // v.push_back(p); // instead of this 4 lines we can use make_pair
            v.push_back(make_pair(arr[i], i));
        }
        sort(v.begin(), v.end(), MyComparaterAscending);
        for (int i = 0; i < n; i++)
        {
            cout << v[i].first << " " << v[i].second << endl;
        }
        sort(v.begin(), v.end(), MyComparaterdescending);
        for (int i = 0; i < n; i++)
        {
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
    return 0;
}