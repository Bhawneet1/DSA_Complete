#include<bits/stdc++.h>
using namespace std;

int getSum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int ans = getSum(n-1)+n;
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    int ans = getSum(n);

    cout<<ans<<endl;
    return 0;
}