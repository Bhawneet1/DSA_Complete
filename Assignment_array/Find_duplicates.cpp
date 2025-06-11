#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])return nums[i];
        }
        return -1;
}
int findDuplicate_2(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            int index= abs(nums[i]);
            if(nums[index]<0)
            {
                return index;
            }
            nums[index]*=-1;
        }
        return -1;
    }
    int findDuplicate_3(vector<int>& nums) {
        
        while(nums[0]!=nums[nums[0]])
        {
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
int main()
{
    vector<int> nums = {1,3,4,2,2};
    int ans =findDuplicate_3(nums);
    cout<<ans;
}