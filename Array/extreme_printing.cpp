#include<iostream>
using namespace std;
void Extreme_print(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        if(i==j){
            cout<<arr[i]<<" ";
            break;
        } 
        cout<<arr[i]<<" ";
        i++;
        cout<<arr[j]<<" ";
        j--;
    }
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n=5;
    Extreme_print(arr,n);
}