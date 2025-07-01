#include<iostream>
using namespace std;
void ReplaceCharacter(char originalChar,char newChar,char arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==originalChar)
        {
            arr[i]=newChar;
        }
    }
}
int main()
{
    char arr[100];
    cin>>arr;
    ReplaceCharacter('@',' ',arr,100);
    cout<<arr;
}