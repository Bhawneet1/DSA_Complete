#include<iostream>
using namespace std;
void Two_sum(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target){
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
}
pair<int,int> Two_sum_pair(int arr[],int n,int target)
{
    pair<int,int> p = make_pair(-1,-1);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target){
             p.first=arr[i];
             p.second=arr[j];   
            }
        }
    }
    return p;
}
int main()
{
    int arr[]={10,5,20,15,30};
    int n=5;
    int target=35;
    Two_sum(arr,n,target);
    pair<int,int> ans = Two_sum_pair(arr,n,target);
    if(ans.first ==-1 && ans.second == -1){
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
        cout<<ans.first<<","<<ans.second<<endl;
    }
}