#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
        string ans = "";
        int  n = s.length();
        for(int i=0;i<n;i++)
        {
            char currCharacter = s[i];
            if(ans.empty())
            {
                ans.push_back(currCharacter);
            }
            else if(currCharacter != ans.back())
            {
                ans.push_back(currCharacter);
            }
            else if(currCharacter == ans.back())
            {
                ans.pop_back();
            }
        }
        return ans;
}

int main()
{
    string str = "abbaca";
    string  ans = removeDuplicates(str);
    cout<<ans<<" ";
}