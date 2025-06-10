#include<bits/stdc++.h>
using namespace std;
vector<int> Two_sum(vector<int> arr,int target )
{

    int i=0;
    vector<int> ans;
    int n=arr.size();
    sort(arr.begin(),arr.end());//no sort as index changes on sorting therefore wrong answer
    int j=n-1;
    while(i<=j)
    {
        if(arr[i]+arr[j]<target) i++;
        else if(arr[i]+arr[j]>target) j--;
        else {
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
        }
    }
    return ans;
}
int main()
{
    vector<int> arr={ 2,7,11,15};
    int target = 9;
    vector<int> ans = Two_sum(arr,target);
    
}