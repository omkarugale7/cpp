/* Editor: Omkar Ugale
Time : . 18th jan 2022 */
#include <bits/stdc++.h>
using namespace std;
bool ChkPalindrome(string s, int n)
{
    if (s.size() == n)
        return true;
    bool ans = false;
    if (s[n] == s[s.size() - n - 1])
        ans = true;
    return (ans && ChkPalindrome(s, n + 1));
}
int main()
{
    string s;
    cin >> s;
   if ( ChkPalindrome(s, 0)) 
   cout<<"Palindrome"<<endl;
   else
   cout<<"Not Palindrome"<<endl;

    return 0;
}