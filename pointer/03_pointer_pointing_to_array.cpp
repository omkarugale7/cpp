#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p;
    p = arr;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
        cout<<p[i]<<endl;       // in case of array pointer acts as name of an array
    }
    
    
    return 0;
}