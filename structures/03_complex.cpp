#include<iostream>
#include<bits/stdc++.h>

using namespace std;
struct complex_no
{
   int img;
   int real;
};

int main()
{
    struct complex_no a;
     a.img = 1;
     a.real = 2;
     cout<<a.img<<"+i"<<a.real<<endl;

    return 0;
}