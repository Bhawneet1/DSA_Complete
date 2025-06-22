#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return 0;
        if (nums[0] > nums[1])
            return 0;
        if (nums[n - 1] > nums[n - 2])
            return n - 1;

        int start = 1, end = n - 2;
        while (start <= end)
        {
            int mid = (start + end) >> 1;
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                return mid;
            else if (nums[mid] > nums[mid - 1])
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }
int main()
{
    vector<int> nums = {1,2,1,3,5,6,4};
    int ans = findPeakElement(nums);
    cout<<ans<<endl;
}