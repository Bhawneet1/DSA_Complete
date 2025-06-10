#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int find_max(int arr[],int n)
{
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(ans<arr[i]) ans=arr[i];
    }
    return ans;
}
int main()
{
    int arr[]={10,20,30,40,25,27,90,45,47,89};
    int size=10;
    int ans=find_max(arr,size);
    cout<<ans;
    return 0;
}