#include<bits/stdc++.h>
using namespace std;
void maxNumber(int arr[],int size,int index,int &maxi)
{
    if(index>=size)
    {
        return;
    }
    maxi=max(maxi,arr[index]);
    maxNumber(arr,size,index+1,maxi);
}
int main()
{
    int arr[]={10,30,50,40};
    int size=4;
    int index=0;
    int maxi=INT_MIN;
    maxNumber(arr,size,index,maxi);
    cout<<maxi<<endl;
}