#include<iostream>

using namespace std;
int main()
{
    int a;
    cin>>a;
    int *ptr;
    ptr = &a;
    cout<<ptr<<endl;
    return 0;
}