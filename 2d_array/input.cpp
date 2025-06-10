#include<iostream>
using namespace std;
int main()
{
 int arr[2][3];
 int rowSize=2;
 int colSize=3;
 for(int r=0;r<rowSize;r++)
 {
    for(int c=0;c<colSize;c++)
    {
        cout<<"Enter "<<r<<","<<c<<endl;
        cin>>arr[r][c];
    }
 }   
 for(int r=0;r<rowSize;r++)
 {
    for(int c=0;c<colSize;c++)
    {
        cout<<arr[r][c]<<" ";
    }
    cout<<endl;
 }
 return 0;

}