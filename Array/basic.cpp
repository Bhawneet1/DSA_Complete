#include<iostream>
using namespace std;
int main()
{
    // int brr[]; error no size
    int brr[]={10,20,30};
    int drr[4]={0};
    cout<<drr[0]<<endl;
    cout<<drr[1]<<endl;
    cout<<drr[2]<<endl;
    cout<<drr[3]<<endl;
    cout<<drr[4]<<endl;//garbage value
    int arr[5];
    fill(arr,arr+5,23);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    int err[5];
    for(int i=0;i<5;i++)
    {
        cin>>err[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<err[i]<<" ";
    }
    return 0;


}