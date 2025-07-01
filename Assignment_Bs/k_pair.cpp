#include<bits/stdc++.h>
using namespace std;
int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j= i+1;
        int count = 0;
        set<pair<int,int>> ans;
        while(j<nums.size() && i<=j)
        {
            int absdiff = abs(nums[i]-nums[j]);
            if(absdiff>k) i++;
            else if(absdiff<k) j++;
            else{
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }
            if(i==j) j++;
        }
        return ans.size();
    }
int bs(vector<int> &nums , int s , int k)
    {
        int e = nums.size()-1;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(nums[mid]==k) return mid;
            else if(nums[mid]>k) e=mid-1;
            else{
                s=mid+1;
            }
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            // ham a[i] par hai hamne search karna hai a[i]+k in right as greater than a[i]
            if(bs(nums,i+1,nums[i] + k) != -1)
            {
                ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();
    } 
int main()
{
    vector<int> nums = {1,1,1,1,1};
    int ans = findPairs(nums,0);
    cout<<ans<<endl;
}