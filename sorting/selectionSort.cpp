#include<bits/stdc++.h>
using namespace std;
void Selection_sort(vector<int> &nums)
{
    int n= nums.size();
    for(int i=0;i<n;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(nums[j]<nums[minIndex])
            {
                minIndex = j;
            }

        }
        swap(nums[i],nums[minIndex]);
    }
}
int main()
{
    vector<int> nums = {11,33,55,22,44};
    Selection_sort(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}