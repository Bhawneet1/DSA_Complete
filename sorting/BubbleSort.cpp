#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &nums)
{
    int n = nums.size();
    for(int i=0;i<n-1;i++)//n-1 comparisons
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                swap(nums[j],nums[j+1]);
            }
        }
    }
}
int main()
{
    vector<int> nums = {5,4,3,2,1};
    bubble_sort(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}