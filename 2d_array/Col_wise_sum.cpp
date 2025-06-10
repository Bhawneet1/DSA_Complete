#include<iostream>
using namespace std;
void Col_wise_sum(int arr[][3],int RowCount,int colCount)
{
    for(int j=0;j<colCount;j++)
    {
        int sum=0;
        for(int i=0;i<RowCount;i++)
        {
            sum+=arr[i][j];
        }
        cout<<"Sum of column "<<j<<" = "<<sum<<endl;
    }
}
int main()
{
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    Col_wise_sum(arr,3,3);
    return 0;
}