#include<bits/stdc++.h>
using namespace std;
int getLength(char arr[],int n)
{
    int index=0;
    int count=0;
    while(arr[index]!='\0')
    {
        count++;
        index++;
    }
    return count;
}
int getLength_2(char arr[],int n)
{
    int index=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='\0')
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
}


int main()
{
    char arr[100];
    cout<<"Enter string "<<endl;
    cin>>arr;
    int ans  = getLength_2(arr,100);
    cout<<ans<<endl;
}