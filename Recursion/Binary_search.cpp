#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int size,int s,int e,int target)
{
    if(s>e)
    {
        return -1;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==target)
    {
        return mid;
    }
    else if(arr[mid]>target)
    {
        return binarySearch(arr,size,s,mid-1,target);
    }
    else
    {
        return binarySearch(arr,size,mid+1,e,target);
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int target = 70;
    int s =0;
    int e = size-1;
    int ans = binarySearch(arr,size,s,e,target);
    cout<<ans<<endl;
}