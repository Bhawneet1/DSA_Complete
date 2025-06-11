#include<bits/stdc++.h>
using namespace std;
void neg_pos(vector<int> &nums)
{
    int i=0;
    int j=nums.size()-1;
    while(i<=j)
    {
        if(nums[i]<0) i++;
        if(nums[j]>0)j--;
        if(nums[i]>0 && nums[j]<0) swap(nums[i++],nums[j--]);
    }
}
int main()
{
    vector<int> nums ={1,2,-3,4,-5,6};
    neg_pos(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}