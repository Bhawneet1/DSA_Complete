#include<iostream>
using namespace std;
int getQuotient(int dividend , int divisor)
{
    int s = -1*dividend;
    int e = dividend;
    int ans=-1;
    while(s<=e)
    {
        int mid = s+((e-s)>>1);
        if(mid*divisor<=dividend){
            ans = mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main()
{
    int dividend = 9;
    int divisor = -2;
    int ans = getQuotient(abs(dividend),abs(divisor));
    //according to +ve we get ans;
    if((divisor>0 && dividend<0) || (divisor<0 && dividend>0))
    {
        ans=0-ans;
    }
    cout<<ans<<endl;
}