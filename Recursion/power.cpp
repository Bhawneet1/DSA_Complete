#include<bits/stdc++.h>
using namespace std;
int power(int n)
{
    if(n==0)
    {
        return 1;
    }
    int resultAns = power(n-1);
    int finalAns = 2*resultAns;
    return finalAns;
}
int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    int ans = power(n);

    cout<<ans<<endl;
    return 0;
}