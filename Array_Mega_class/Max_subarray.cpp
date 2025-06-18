#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int naive(vector<int>& nums)
    {
        int ans=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                ans=max(sum,ans);
            }
        }
        return ans;
    }
int kadaneAlgo(vector<int> &nums)
    {
        int sum=0;
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            sum+=num;
            ans=max(ans,sum);
            if(sum<0)
            {
                sum=0;
            }

        }
        return ans;
    }
int maxSubArray(vector<int>& nums) {
    // return naive(nums);
    return kadaneAlgo(nums);
}
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = maxSubArray(nums);
    cout<<ans<<endl;    
}