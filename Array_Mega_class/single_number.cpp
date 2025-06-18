#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(hash[nums[i]]==1)
            {
                return nums[i];
            }
        }
        return -1;
    }
int main()
{
    vector<int> nums = {1,2,3,1,2,3,4};
    int ans = singleNumber(nums);
    cout<<ans<<endl;
}