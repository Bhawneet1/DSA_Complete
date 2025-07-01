#include <bits/stdc++.h>
using namespace std;

int BS(vector<int> &nums, int s, int e, int key)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (nums[mid] == key)
            return mid;
        else if (nums[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int exponential_search(vector<int> &nums, int key)
{
    if (nums.empty())
        return -1;
    if (nums[0] == key)
        return 0;
    int n = nums.size();
    int i = 1;
    while (i < n && nums[i] <= key)
    {
        i = i * 2;
    }
    return BS(nums, i / 2, min(i, n - 1), key);
}
int main()
{
    vector<int> nums = {3,4,5,6,11,13,14,15,56,70};
    int key =13;
    int ans = exponential_search(nums,key);
    if(ans!=-1)
    {
        cout<<"Found at "<<ans<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}