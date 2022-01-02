// change the vallues of the elements of arrray such that lowest no. gets value 1 and 2nd lowest 2 and 
// last gets n
// eg     5 3 8 6 10
//becomes 2 1 4 3 5
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool MyComparaterFirst(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
bool MyComparaterSecond(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second< p2.second;
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
            v.push_back(make_pair(arr[i], i));
        }
        sort(v.begin(), v.end(), MyComparaterFirst);
        for (int i = 0; i < n; i++)
        {
            v[i].first = i+1;
        }  
        sort(v.begin(), v.end(), MyComparaterSecond);
        for (int i = 0; i < n; i++)
        {
            cout << v[i].first << " " ;
        }
    }
    return 0;
}