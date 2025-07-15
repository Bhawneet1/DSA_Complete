#include<bits/stdc++.h>
using namespace std;
int getFactorial(int n)
{
    if(n==0 || n==1)//base
        return 1;
    int recursiveAns = getFactorial(n-1);//recursive call 
    int finalAns = n*recursiveAns;//processing
    return finalAns;
}
int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    int ans = getFactorial(n);

    cout<<ans<<endl;
    return 0;
}