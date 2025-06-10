#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_min(int arr[],int n)
{
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(ans>arr[i]) ans=arr[i];
    }
    return ans;
}
int main()
{
    int arr[]={12,13,14,15,20,16,17,18,19,11};
    int size=10;
    int ans = find_min(arr,size);
    cout<<ans;
}