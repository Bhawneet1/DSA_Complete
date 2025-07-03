#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
        int i=0;
        string ans;
        while(true)
        {
            char curr_char = 0;
            for(auto str:strs)
            {
                if(i>=str.length()){
                    curr_char=0;
                    break;
                }
                //for each loop hai
                if(curr_char == 0)
                {
                    curr_char = str[i];
                }
                if(curr_char != str[i])
                {
                    curr_char =0;
                    break;
                }
            }
            if(curr_char == 0)
            {
                break;
            }
            //else
            ans.push_back(curr_char);
            i++;
        }
        return ans;
    }
int main()
{
    vector<string> strs = {"flower","flow","flight"};
    string ans = longestCommonPrefix(strs);
    cout<<ans<<endl;

}