#include<iostream>
using namespace std;
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void increment_by_ten(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]+=10;
    }
}
int main()
{
    int arr[]={10,20,30,40,50};
    int size=5;
    print_array(arr,5);
    increment_by_ten(arr,5);
    print_array(arr,5);
}