#include<bits/stdc++.h>
using namespace std;
int getLength(char arr[],int n)
{
    int i=0;
    int count=0;
    while(arr[i]!='\0')
    {
        count++;
        i++;
    }
    return count;
}
void ConvertToUpperCase(char arr[],int n)
{
    int m = getLength(arr,n);
    for(int i=0;i<m;i++)
    {
        

        char ch = arr[i];
        if(ch >='a' && ch <='z'){
            //if a letter only lower case then only convert else leave
            ch= ch - 'a' + 'A';
        }
        
        arr[i]=ch;
    }
}
int main()
{
    char arr[100];
    cin>>arr;
    ConvertToUpperCase(arr,100);
    cout<<arr;
}