#include<iostream>
using namespace std;
void Diag_sum(int arr[][3],int rowCount,int colCount)
{
    int sum=0;
    for(int i=0;i<rowCount;i++)
    {
        for(int j=0;j<colCount;j++)
        {
            if((i+j)==colCount-1) sum+=arr[i][j];
        }
    }
    cout<<sum<<endl;
}
int main()
{
    int arr[3][3]={{10,20,30},{15,20,50},{25,10,10}};
    Diag_sum(arr,3,3);
    return 0;
}