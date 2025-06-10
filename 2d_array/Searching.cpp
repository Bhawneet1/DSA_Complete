#include<iostream>
using namespace std;
bool search(int arr[][4],int rowSize,int colSize,int target)
{
    for(int i=0;i<rowSize;i++)
    {
        for(int j=0;j<colSize;j++)
        {
            if(arr[i][j]==target)
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[3][4]={{10,11,12,13},
                   {13,14,15,16},
                   {17,18,19,20}};
    bool ans = search(arr,3,4,64);
    if(ans) cout<<"Found"<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}