#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
  cout<<"Row-wise print"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<"Col-wise print"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }

  cout<<"Diagonal-print"<<endl;
  for(int i=0;i<3;i++)
  {
    cout<<arr[i][i]<<" ";
  }
  cout<<endl;
  

  cout<<"Not primary diagonal"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
      if((i+j)==2) cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  //for rectangular matrix
  int brr[3][2]={{10,20},{30,40},{50,60}};

  cout<<"Row-wise print"<<endl;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<2;j++)
    {
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<"Col-wise print"<<endl;
  for(int j=0;j<2;j++)
  {
    for(int i=0;i<3;i++)
    {
      cout<<brr[i][j]<<" ";
    }
    cout<<endl;
  }

  
  return 0;
}