#include<iostream>
using namespace std;
void Find_all_pairs(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}
void Find_Unique_pairs(int arr[],int n)
{
    cout<<endl;
    cout<<"Unique Pairs"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}
int main()
{
    int arr[]={10,20,30,40};
    int n=4;
    Find_all_pairs(arr,n);
    Find_Unique_pairs(arr,n);
}