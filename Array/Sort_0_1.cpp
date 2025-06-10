#include<iostream>
using namespace std;
void Sort_0_1(int arr[],int n)
{
    int brr[7];
    int zero_count=0;
    int one_count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0) zero_count++;
        else one_count++;
    }
    cout<<zero_count<<endl;
    cout<<one_count<<endl;
    int i=0;
    while(i<zero_count)
    {
        arr[i]=0;
        i++;
    }
    while(i<zero_count+one_count)
    {
        arr[i]=1;
        i++;
    }
   
}
int main()
{
    int arr[]={0,1,1,1,0,0,1};
    int n=7;
    Sort_0_1(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}