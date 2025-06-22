#include<bits/stdc++.h>
using namespace std;
bool myComp(int &a,int &b)
{
    return a>b;//decreasing order
}
int main()
{
    vector<int> nums = {44,33,55,22,11};
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    //custom
    sort(nums.begin(),nums.end(),myComp);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}