#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5,b=6;
    //1.inbuild function
    // swap(a,b);

    // 2.Third variable
    // int c=a;
    // a=b;
    // b=c;

    // 3.Using XOR
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b<<" ";

    //4.Arithematic
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // cout<<a<<" "<<b<<" ";

}