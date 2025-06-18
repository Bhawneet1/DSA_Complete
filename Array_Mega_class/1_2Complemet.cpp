#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> oneComp(vector<int> &arr)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0) arr[i]=1;
        else arr[i]=0;
    }
    return arr;

}

vector<int> twoComp(vector<int> &arr)
{
    vector<int> arr2 = oneComp(arr);
    int sum=0;
    int carry=1;
    for(int i=arr2.size()-1;i>=0;i--)
    {
        sum=arr2[i]+carry;
        carry=sum/2;
        arr2[i]=sum%2;
    }
    return arr2;
}
int main()
{
    vector<int> arr={0,1,0,1,1,0};
    
    vector<int> ans = oneComp(arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    vector<int> ans2 = twoComp(arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans2[i]<<" ";
    }
    cout<<endl;
}