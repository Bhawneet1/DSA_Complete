#include<iostream>
using namespace std;
void Sort_0_1(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[i]==0)i++;
        if(arr[j]==1)j--;
        if(arr[i]==1 && arr[j]==0) swap(arr[i++],arr[j--]);

    }

}
int main()
{
    int arr[]={0,1,1,1,0,0,1,1};
    int n=8;
    Sort_0_1(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}