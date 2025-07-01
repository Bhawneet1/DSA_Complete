#include<bits/stdc++.h>
using namespace std;
string removeDuplicates(string str,int k)
{
    int count=0;
    int  n=str.length();
    string ans = "";
    for(int i=0;i<n;i++)
    {
        char ch = str[i];
        if(ans.empty())
        {
            ans.push_back(ch);
        }
        else if(ans.back()!=ch)
        {
            ans.push_back(ch);
        }
        else if(ans.back()==ch)
        {
            ans.push_back(ch);
            count++;
        }
        if (count == k)
        {
            if (ans.size() >= k)
            {
                for (int i = 0; i < k; i++)
                {
                    ans.pop_back();
                }
            }
            
        }

    }
    return ans;
}
int main()
{
    string str = "pbbcggttciiippooaais";
    int k = 2;
    string ans  =removeDuplicates(str,k);
    cout<<ans<<endl;
}