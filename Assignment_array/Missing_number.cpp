#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=i) return i;
        }
        return nums.size();
}
int missingNumber_optimised(vector<int>& nums) {
   
    int ans=0;
    for(int i=0;i<=nums.size();i++)
    {
        ans^=i;
    }
    for(int i=0;i<nums.size();i++)
    {
        ans^=nums[i];
    }
    return ans;
}
int main()
{
    vector<int> nums={9,6,4,2,3,5,7,0,1};
    // int ans =missingNumber(nums);
    int ans = missingNumber_optimised(nums);
    cout<<ans<<endl;
}