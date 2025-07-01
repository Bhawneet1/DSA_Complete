#include<bits/stdc++.h>
using namespace std;
bool checkPallindrome(string str ,int s,int e)
    {
        while(s<=e)
        {
            if(str[s] != str[e]) return false;
            else
            {
                s++;
                e--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int len = s.length();
        int i=0;
        int j= len-1;
        while(i<=j)
        {
            //same 
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            //differrent
            else{
                //s[i] != s[j]
                //iss case mai char delete karke dekho
                //delete i index walla or delete j index walla
                bool ansOne = checkPallindrome(s,i+1,j);//delete i walla
                bool ansTwo = checkPallindrome(s,i,j-1);//delete j walla
                bool finalAns = ansOne || ansTwo;
                return finalAns;
            }
        }
        //valid pallindrome without addition
        return true;
    }
int main()
{
    string s = "rabdcar";
    if(validPalindrome(s))
    {
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
}