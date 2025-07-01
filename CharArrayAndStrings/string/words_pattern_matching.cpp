#include<bits/stdc++.h>
using namespace std;
void normalize(string &str)
    {
        char start = 'a';
        unordered_map<char,char> mapping;
        for(int i=0;i<str.length();i++)
        {
            char stringKaCharacter = str[i];
            if(mapping.find(stringKaCharacter) == mapping.end())
            {
                //not found
                mapping[stringKaCharacter]=start;
                start++;
            }
            
        }
        for(int i=0;i<str.length();i++)
        {
            char mappedCharacter = mapping[str[i]];
            str[i]= mappedCharacter;
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        //normalize pattern
        normalize(pattern);
        //traverse words and normalize them
        for(int i=0;i<words.size();i++)
        {
            string currWord = words[i];

            string currWordCopy = currWord;

            normalize(currWordCopy);
            if(currWordCopy == pattern)
            {
                ans.push_back(currWord);
            }
        }
        return ans;
    }
int main()
{
    vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "abb";
    vector<string> ans = findAndReplacePattern(words,pattern);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}