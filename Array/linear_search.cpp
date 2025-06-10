#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key) return i;

    }
    return -1;

}
int main()
{
    int arr[5]={10,20,30,40,50};
    int key=0;
    int ans = linear_search(arr,5,key);
    cout<<ans<<endl;
}