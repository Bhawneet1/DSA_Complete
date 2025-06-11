#include<bits/stdc++.h>
using namespace std;
bool Key_pair(int arr[],int n,int target)
{
    int i=0;
    int j=n-1;
    sort(arr,arr+n);
    while(i<j)
    {
        if(arr[i]+arr[j]<target) i++;
        else if(arr[i]+arr[j]>target) j--;
        else return true;
    }
    return false;
}
int main()
{
    int arr[]={1,4,45,6,10,8};
    int n=6;
    int target=18;
    bool ans =Key_pair(arr,n,target);
    if(ans) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}