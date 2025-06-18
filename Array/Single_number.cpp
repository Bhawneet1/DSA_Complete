#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=-1;
        int i=0;
        while(i<nums.size())
        {
           
            if(i+1<nums.size() && nums[i]==nums[i+1])
            {
                i+=2;
            }
            else{
                ans=nums[i];
                break;
            }
        }
        return ans;
    }

int singleNumber_2(vector<int> &nums)
{
    int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        ans^=nums[i];
    }
    return ans;
}
int singleNumber_3(vector<int> &nums)
{
    unordered_map<int,int> hash;
    for(int i=0;i<nums.size();i++)
    {
        hash[nums[i]]++;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(hash[nums[i]]==1) return nums[i];
    }
}
int main()
{
    vector<int> nums = {1,2,3,1,2,3,4};
    int ans = singleNumber(nums);
    cout<<ans<<" ";
    int ans2=singleNumber_2(nums);
    cout<<ans2<<endl;
    int ans3=singleNumber_3(nums);
    cout<<ans3<<endl;
    return 0;
}