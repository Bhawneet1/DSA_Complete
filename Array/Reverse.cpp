#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Reverse_array(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        swap(arr[i++],arr[j--]);
    }
}
int main()
{
    int arr[6]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    // Reverse_array(arr,n);
    reverse(arr,arr+n);
    //2.inbuild function
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}