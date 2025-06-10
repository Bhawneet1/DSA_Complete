#include<iostream>
using namespace std;
int Find_unique(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans^=arr[i];
    }
    return ans;
}
int main()
{
    int arr[]={1,2,4,2,1};
    int n=5;
    int ans = Find_unique(arr,n);
    cout<<ans;
}