#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int> &nums,int target , int index)
    {
        if(target<0 || index==nums.size()) return false;
        if(target == 0 ) return true;

        //include
        bool inc = solve(nums,target - nums[index],index+1);

        //exclude
        bool exc = solve(nums,target,index+1);

        return inc || exc;
    }
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        if((sum%2)!=0){
            return false;
        }
        int target = sum >>1;//sum/2;
        return solve(nums,target,0);
    }
int main()
{
    vector<int> nums = {1,5,11,5};
    bool ans = canPartition(nums);
    cout<<ans<<endl;
}