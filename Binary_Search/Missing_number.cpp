#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Missing_number(vector<int> nums)
{
    int sum=0,asum=0;
    for(int i=0;i<=nums.size();i++)
    {
        sum+=i;
    }
    for(int i=0;i<nums.size();i++)
    {
        asum+=nums[i];
    }
    cout<<(sum-asum)<<" ";
}
void Missing_number_2(vector<int> nums)
{
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=i) 
        {
            cout<<i<<" ";
            break;
        }
    }
    cout<<endl;
}
int Missing_binary(vector<int> arr)
{
    sort(arr.begin(),arr.end());
        int n=arr.size();
        int s=0;
        int e=n-1;
        int mid = s+(e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            int element =arr[mid];
            int index=mid;
            int diff=element-index;
            if(diff==0)
            {
                s=mid+1;
            }
            if(diff==1)
            {
                ans=index;
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        if(ans==-1)
        {
            return n;
        }
        return ans;
}
int main()
{
    vector<int> nums={0,1,3,4};
    Missing_number_2(nums);
    int ans = Missing_binary(nums);
    cout<<ans<<endl;
}