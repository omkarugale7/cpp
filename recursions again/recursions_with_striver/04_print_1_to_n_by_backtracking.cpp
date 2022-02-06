/* Code Editor: Omkar Ugale
Time : .  jan 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void print (int n)
{
    if (!n)
   return;
   print(n-1);
   cout<<n<<" ";
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        print(n);
    }
    return 0;
}