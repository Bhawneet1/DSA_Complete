#include<bits/stdc++.h>
using namespace std;
void getMin(int arr[],int size,int index,int &mini)
{
    if(index>=size)
    {
        return ;

    }
    mini= min(mini,arr[index]);
    getMin(arr,size,index+1,mini);

}
int main()
{
    int arr[]={90,80,70,20,30,10};

    int size = 6;
    int index=0;
    int mini = INT_MAX;

    getMin(arr,size,index,mini);
    cout<<mini<<endl;
}