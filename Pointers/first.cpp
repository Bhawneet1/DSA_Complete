#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=5;
    cout<<a<<endl;
    cout<<&a<<endl;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
    
    // int c = &a; error

    int c=10;
    int *iptr=&c;
    cout<<sizeof(iptr)<<endl;

    char b = 'a';
    char *cptr=&b;
    cout<<sizeof(cptr)<<endl;

    long l=100;
    long *lptr=&l;
    cout<<sizeof(lptr)<<endl;
    

    int *tptr;
    cout<<*tptr<<endl;
    
    return 0;
}