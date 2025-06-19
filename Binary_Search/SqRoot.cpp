#include<bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
        int s=0;
        int e=x;
        int ans=-1;
        while(s<=e)
        {
            long long int mid=s+(e-s)/2;
            long long int  prod = mid*mid;
            if(prod==x)return mid;
            else if(prod>x) e=mid-1;
            else{
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
int main()
{
    int ans = mySqrt(100);
    cout<<ans<<endl;
}