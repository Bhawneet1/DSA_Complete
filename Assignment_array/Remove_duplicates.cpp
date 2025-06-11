#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int ans=0;
    int count=1;
    for(int i=1;i<nums.size();i++)
    {
        if(nums[ans]!=nums[i]){
            ans=i;
            count++;
        }
    }
    return count;
}
int removeDuplicates_optimised(vector<int>& nums) {
        int j=0;
        int i=1;
        while(i<nums.size())
        {
            if(nums[i]==nums[j]) i++;
            else{
                swap(nums[++j],nums[i++]);
            } 
        }
        return j+1;
}
int main()
{
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    int ans = removeDuplicates_optimised(nums);
    cout<<ans<<endl;
    return 0;
}