#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t) {
        int hash[256]={0};
        bool isCharacterMapped[256]={0};
        for(int i=0;i<s.length();i++)
        {
            if(hash[s[i]]==0 && isCharacterMapped[t[i]]==0)
            {
                hash[s[i]]=t[i];
                isCharacterMapped[t[i]]=1;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(hash[s[i]]!=t[i]) return false;
        }
        return true;
    }
int main()
{
    string s ="egg" , t="add";
    bool ans =isIsomorphic(s,t);
    if(ans){
        cout<<"Is isomorphic"<<endl;
    }
    else
    {
        cout<<"Not isomorphic"<<endl;
    }
}