#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) s=mid+1;
            else e=mid-1;
        }
        return -1;
        
}
int main()
{
    vector<int> nums = {10,20,30,40,42,44,46,48,50,70};
    int ans =search(nums,70);
    cout<<ans<<endl;//gives index or -1 if not found
    return 0;
}