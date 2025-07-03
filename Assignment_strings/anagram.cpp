#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=t[i]) return false;
        }
        return true;
    }

bool isAnagram_2(string s, string t) {
        if(s.length() != t.length())return false;

        int freqTable[256]={0};
        for(int i=0;i<s.length();i++)
        {
            freqTable[s[i]]++;//automatically typecast to ascii
        }
        for(int i=0;i<t.length();i++)
        {
            freqTable[t[i]]--;//automatically typecast to ascii
        }
        for(int i=0;i<256;i++)
        {
            if(freqTable[i]!=0)return false;
        }
        return true;
}
int main()
{
    string s = "anagram", t = "nagaram";
    bool ans = isAnagram_2(s,t);
    if(ans)
    {
        cout<<"Is anagram"<<endl;
    }
    else{
        cout<<"Not anagram"<<endl;
    }
}