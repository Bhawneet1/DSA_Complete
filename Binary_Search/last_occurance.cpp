#include<bits/stdc++.h>
using namespace std;
int last_occurance(int arr[],int n,int target)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;//search in right if any occurance or not
        }
        else if(arr[mid]<target) s=mid+1;
        else e=mid-1;
    }
    return ans;
}
int main()
{
    int arr[]={10,20,20,20,20,20,20,30,40,50,60};
    int n=11;
    int target=20;
    int ans = last_occurance(arr,n,target);
    cout<<ans<<" ";
    return 0;
}