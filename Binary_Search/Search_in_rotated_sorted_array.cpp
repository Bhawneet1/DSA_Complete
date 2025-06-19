#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getPivotIndex(vector<int> &nums)
{
         int s=0;
         int n=nums.size();
         int e = n-1;
         while(s<=e )
         {
            int mid = s+(e-s)/2;
            if(mid+1<nums.size() && nums[mid]>nums[mid+1]) return mid;
            if(nums[mid] < nums[mid-1] && mid-1>=0) return mid-1;
            //kab left aur kab right
            if(nums[s]>nums [mid]) e=mid-1;
            else s=mid+1;
         }
         return -1;
}
int binarySearch(int s, int e, int target, vector<int> arr) {
        int mid = s+(e-s)/2;
        while(s<=e) {
            if(arr[mid] == target) {
                return mid;
            }
            if(target > arr[mid]) {
                s = mid+1;
            }
            else {
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return -1;
    }
int search(vector<int>& nums, int target) {
        //Step1
        int pivotIndex = getPivotIndex(nums);

        //lineA
        //start -> 0 index
        //end -> pivotIndex

        //line B
        //start -> pivotIndex+1;
        //end -> n-1;
        int n = nums.size();
        if(target >= nums[0] && target <= nums[pivotIndex]) {
            int ans = binarySearch(0, pivotIndex, target, nums);
            return ans;
        }
        else {
            int ans = binarySearch(pivotIndex+1, n-1, target, nums);
            return ans;
        }
        return -1;
         
}
int main()
{
    vector<int> nums={4,5,6,7,0,1,2};
    int ans = search(nums,0);
    cout<<ans<<endl;
}