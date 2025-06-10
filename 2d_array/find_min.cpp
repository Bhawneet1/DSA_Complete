#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Find_min(int arr[][3],int rowSize,int colSize){
    int ans = INT_MAX;
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            if(arr[i][j]<ans)
            {
                ans=arr[i][j];
            }
        }
    }
    return ans;
}
int main()
{
    int arr[3][3]={{70,23,41},{27,69,42},{56,12,18}};
    int ans = Find_min(arr,3,3);
    cout<<"Minimum element is "<<ans<<endl;
}