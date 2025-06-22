#include<bits/stdc++.h>
using namespace std;
void Insertion_sort(vector<int> &nums)
{
    int n = nums.size();
    //i=0 chhod do
    for(int i=1;i<n;i++)
    {
        int key = nums[i];
        int j =i-1;
        //move 0 to i-1 greater than key
        while(j>=0 && nums[j]>key)
        {
            nums[j+1]=nums[j];
            j--;
        }
        nums[j + 1]=key;
    }
}
int main()
{
    vector<int> nums = {11,33,55,22,44};
    Insertion_sort(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}