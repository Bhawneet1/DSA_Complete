#include<bits/stdc++.h>
using namespace std;
vector<int> Two_sum(vector<int> arr,int target )
{

    int i=0;
    vector<int> ans;
    vector<int> arr2=arr;
    int n=arr2.size();
    sort(arr2.begin(),arr2.end());//no sort as index changes on sorting therefore wrong answer
    int j=n-1;
    while(i<=j)
    {
        if(arr2[i]+arr2[j]<target) i++;
        else if(arr2[i]+arr2[j]>target) j--;
        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
    }
    return ans;
}
}
int main()
{
    vector<int> arr={ 2,7,11,15};
    int target = 9;
    vector<int> ans = Two_sum(arr,target);
    
}