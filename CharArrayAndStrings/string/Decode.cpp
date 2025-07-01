#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string decodeMessage(string key, string message) {
        unordered_map<char,char> mapping;
        string ans;
        char space=' ';
        mapping[space]=space;
        char start = 'a';
        int index=0;
        while(start<='z' && index<key.length())
        {
            char keyKaCurrentCharacter = key[index];
            //map key with abcd....
            if(mapping.find(keyKaCurrentCharacter) != mapping.end())
            {
                //agar current character already mapped hai to
                //no need to store any character here just move to next char in key
                index++;
            }
            else
            {
                //create mapping
                mapping[keyKaCurrentCharacter] = start;
                start++;
                index++;
            }
        }

        //step-2 mapping and decode
        for(int i=0;i<message.length();i++)
        {
            char msgCharacter = message[i];
            char mappedCharacter = mapping[msgCharacter];
            ans.push_back(mappedCharacter);
        }
    return ans;
    }
int main()
{
    string  key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";
    string ans = decodeMessage(key,message);
    cout<<ans<<endl;
}