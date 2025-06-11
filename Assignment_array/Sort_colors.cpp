#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &nums)
{
    int z=0;
    int o=0;
    int t=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0) z++;
        else if(nums[i]==1)o++;
        else t++;
    }
    int i=0;
    while(z--)
    {
        nums[i]=0;
        i++;
    }
    while(o--)
    {
        nums[i]=1;
        i++;
    }
    while(t--)
    {
        nums[i]=2;
        i++;
    }
}

void sortColors_three_pointer(vector<int>& nums) {
        int l=0,m=0,h=nums.size()-1;
        while(m<=h)
        {
            if(nums[m]==0)swap(nums[l++],nums[m++]);
            else if(nums[m]==1)m++;
            else swap(nums[m],nums[h--]);
        }
}
int main()
{
    vector<int> nums = {2,0,2,1,1,0};
    sortColors_three_pointer(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}