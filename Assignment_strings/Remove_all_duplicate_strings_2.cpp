#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string s, int k) {
       int i=0;
       int j=0;
       vector<int> count(s.size());
       while(j<s.size())
       {
            s[i]=s[j];
            count[i]=1;
            if(i>0 && s[i-1]==s[i]) count[i]+=count[i-1];
            if(count[i]==k) 
                i-=k;
            i++;
            j++;

       }
       return s.substr(0,i);
    }