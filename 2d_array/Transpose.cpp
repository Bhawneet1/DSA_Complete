#include<iostream>
using namespace std;
void Transpose(int arr[][3],int rowCount,int colCount)
{
    //Use another array
    int ans[100][100]={0};
    for(int i=0;i<rowCount;i++)
    {
        for(int j=0;j<colCount;j++)
        {
            ans[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}

void Transpose_2(int arr[][3],int rowCount,int colCount)
{
    
    for(int i=0;i<rowCount;i++)
    {
        for(int j=i+1;j<colCount;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

}


int main()
{
    int arr[3][3]={{10,11,12},{20,21,22},{30,31,32}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    Transpose_2(arr,3,3);
    cout<<endl;
    cout<<"After transpose"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}