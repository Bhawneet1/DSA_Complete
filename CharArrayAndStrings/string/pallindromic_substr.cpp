#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int expandAroundCenter(string s ,int i,int j)
{
    int count=0;
    while(s[i]==s[j] && i>=0 && j<s.length())
    {
        count++;
        i--;
        j++;
    }
    return count;
}
int countSubstrings(string s)
{
    int totalCount=0;
    for(int center=0;center<s.length();center++){
        //odd length strings
        int i=center;
        int j=center;
        int oddLength = expandAroundCenter(s,i,j);

        //even length
        i=center;
        j=center+1;
        int evenLength =  expandAroundCenter(s,i,j);

        totalCount = totalCount + oddLength + evenLength;
    }
    return totalCount;
}
int main()
{
    string s = "aaa";
    int ans = countSubstrings(s);
    cout<<ans<<endl;
}