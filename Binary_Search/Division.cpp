#include<iostream>
#include<bits/stdc++.h>
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
int divide(int dividend, int divisor) {
        // Handle overflow case
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (dividend == INT_MIN && divisor == 1) return INT_MIN;

        // Convert to long to avoid overflow and take absolute values
        long long n=dividend,d=divisor,ans=0,shift=0;
        n=n<0?-n:n;
        d=d<0?-d:d;

        while(n>=d)
        {
           shift=0;
            // Double the divisor until it's larger than dividend
           while(n>=d<<(shift+1))
               shift++;
            ans+=1<<shift;
            n-=(d*1<<shift);  
        }

        // Apply sign
        return (dividend<0 ^ divisor<0)?-ans: ans;
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