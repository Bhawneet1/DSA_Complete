#include<bits/stdc++.h>
using namespace std;
double findMaxAverage(vector<int>& nums, int k) {
        double maxsum=INT_MIN;
        int i=0;
        int j=k-1;
        while(j<nums.size())
        {
            double sum=0;
            for(int y=i;y<=j;y++)
            {
                sum+=nums[y];

            }
            maxsum=max(sum,maxsum);
            i++;
            j++;
        }
        return (maxsum/k);
}
double findMaxAverage_optimised(vector<int>& nums, int k) {
       
        int i=0;
        int j=k-1;
        double sum=0;
        for(int y=i;y<=j;y++)
        {
            sum+=nums[y];
        }
        double maxsum=sum;
        j++;
        while(j<nums.size())
        {
            sum-=nums[i++];
            sum+=nums[j++];
            maxsum=max(sum,maxsum);
        }
        return maxsum/k;
}
int main()
{
    vector<int> nums={1,12,-5,-6,50,3};
    double ans =findMaxAverage_optimised(nums,4);
    cout<<ans<<endl;
}