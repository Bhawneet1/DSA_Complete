#include<bits/stdc++.h>
using namespace std;
int getLength(char arr[],int n)
{
    int i=0;
    int count=0;
    while(arr[i]!='\0')
    {
        i++;
        count++;
    }
    return count;
}
bool checkPallindrome(char arr[],int n)
{
    int m= getLength(arr,n);
    int i=0;
    int j=m-1;
    while(i<=j)
    {
        if(arr[i]==arr[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;

}
 bool isPalindrome(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])){start++; continue;}
           if(!isalnum(s[end])){end--;continue;}
           if(tolower(s[start])!=tolower(s[end]))return false;
           else{
               start++;
               end--;
           }
       }
       return true;
}
int main()
{
    char arr[100];
    cin>>arr;
    bool ans = checkPallindrome(arr,100);
    if(ans)
    {
        cout<<"Pallindrome "<<endl;
    }
    else
    {
        cout<<"Not Pallindrome "<<endl;
    }
}