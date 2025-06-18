#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotate_array(int arr[],int n,int shift)
{
    int final_shift = shift%n;
    if(final_shift == 0 )
    {
        //means rotate equal to size therefore not rotate
        return ;
    }
    int temp[100];
    int index=0;
    for(int i=n-final_shift;i<n;i++)
    {
        temp[index]=arr[i];
        index++;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(i-final_shift>=0){
            arr[i]=arr[i-final_shift];
        }
        
    }
    for(int i=0;i<final_shift;i++)
    {

       arr[i]=temp[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotate_array_2(int arr[],int n,int shift)
{
    shift=shift%n;
    reverse(arr,arr+n);
    reverse(arr,arr+shift);
    reverse(arr+shift,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=6;
    int shift=2;
    rotate_array(arr,n,shift);
    rotate_array_2(arr,n,shift);
    return 0;
}