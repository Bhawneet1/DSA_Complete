#include<bits/stdc++.h>
using namespace std;
void findAllOdds(int arr[],int size,int index)
{
    if(index>=size)
    {
        return;
    }
    if(arr[index]&1)
    {
        cout<<arr[index]<<" ";
    }
    findAllOdds(arr,size,index+1);
}
int main()
{
    int arr[]={0,1,2,3,4,5};
    int size = 6;
    int index=0;
    findAllOdds(arr,size,index);

}