#include<bits/stdc++.h>
using namespace std;
bool isAlphabet(char ch)
    {
        if((ch>=97 && ch<=122) || (ch>=65 && ch<=90)) return true;
        else return false;
    }
    string reverseOnlyLetters(string s) {
        int i=0;
        int j = s.length()-1;
        while(i<=j)
        {
            if(isAlphabet(s[i]) && isAlphabet(s[j]))
            {
                swap(s[i++],s[j--]);
            }
            else if(!isAlphabet(s[i]) ) i++;
            else j--;
        }
        return s;
    }
int main()
{
    string s = "Test1ng-Leet=code-Q!";
    string ans = reverseOnlyLetters(s);
    cout<<ans<<endl;
}