#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> nums,int n ,int i)
    {
        if(i>=n)
        {
            return 0;   
        }
        //include
        int includeAns = nums[i]+solve(nums,n,i+2);

        //exclude
        int excludeAns = 0 + solve(nums,n,i+1);

        int finalAns = max(includeAns,excludeAns);

        return finalAns;
    }
    int rob(vector<int>& nums) {
        int index=0;
        int ans = solve(nums,nums.size(),index);
        return ans;
    }
int main()
{
    vector<int> nums = {2,7,9,3,1};
    int ans = rob(nums);
    cout<<ans<<endl;
}