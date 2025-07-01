#include<bits/stdc++.h>
using namespace std;
int getlength(char arr[],int n)
{
    int count=0;
    int i=0;
    while(arr[i]!='\0')
    {
        i++;
        count++;
    }
    return count;
}
void ReverseArray(char arr[],int n)
{
    int m = getlength(arr,n);
    int i=0;
    int j = m-1;
    while(i<=j)
    {
        swap(arr[i++],arr[j--]);
    }

}
int main()
{
    char arr[100];
    cin>>arr;
    ReverseArray(arr,100);
    cout<<arr;
}