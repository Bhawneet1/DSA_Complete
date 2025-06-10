#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declaring array
    int arr[4][3];

    //initialisation
    int brr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    int crr[2][3]={1,2,3,4,5,6};
    //similar to {{1,2,3}, {4,5,6}}

    int drr[2][3]={10,20};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<drr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}