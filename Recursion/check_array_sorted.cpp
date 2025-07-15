#include<iostream>
using namespace std;
bool check_sorted(int arr[],int size,int index)
{
    if(index==size-1)
    {
        return true;//single element walla array is sorted
    }
    bool currAns = false;
    bool recursionAns = false;
    if(arr[index+1]>arr[index])
    {
        currAns = true;
    }
    recursionAns = check_sorted(arr,size,index+1);
    return currAns && recursionAns;
    
}

int main()
{
    int arr[]={10,20,300,40};
    int size = 4;
    int index=0;
    bool ans = check_sorted(arr,size,index);
    if(ans)
    {
        cout<<"Sorted "<<endl;
    }
    else
    {
        cout<<"Unsorted "<<endl;
    }
}