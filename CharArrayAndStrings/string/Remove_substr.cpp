#include<bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part) {
        while(s.find(part) != string::npos)
        {
            s.erase(s.find(part),part.length());
        }
        return s;
    } 
int main()
{
    string str = "daabcbaabcbc";
    string pattern = "abc";
    string ans  = removeOccurrences(str,pattern);
    cout<<ans<<endl;
}