#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int ans=INT_MIN;
        int index=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>ans)
            {
                ans=arr[i];
                index=i;
            }
        }
        return index;
    }
int peakIndexInMountainArray2(vector<int>& arr) {
        // int ans=INT_MIN;
        // int index=-1;
        // for(int i=0;i<arr.size();i++)
        // {
        //     if(arr[i]>ans)
        //     {
        //         ans=arr[i];
        //         index=i;
        //     }
        // }
        // return index;
        int s=0;
        int e = arr.size()-1;
        while(s<e)
        {
            int mid = s+(e-s)/2;
            if(arr[mid]<arr[mid+1]) s=mid+1;
            else e=mid;
        }
        return s;
    }
int main()
{
    vector<int> arr ={0,1,2,1};
    int ans  = peakIndexInMountainArray(arr);
    cout<<ans<<endl;
    int ans2= peakIndexInMountainArray2(arr);
    cout<<ans2<<endl;
}