#include<bits/stdc++.h>
using namespace std;
int convertToMinutes(string &time)
    {
        int hr=stoi(time.substr(0,2));//string to integer
        int min = stoi(time.substr(3,2));
        return 60*hr+min;

    }
    int findMinDifference(vector<string>& timePoints) {
        vector<int> mins;
        for(auto time:timePoints)
        {
            mins.push_back(convertToMinutes(time));
        }
        sort(mins.begin(),mins.end());
        int ans = INT_MAX;
        for(int i=0;i<mins.size()-1;i++)
        {
            ans = min(ans,mins[i+1]-mins[i]);
        }
        int lastdiff = mins[0] + 1440 - mins[mins.size()-1];
        ans = min(ans,lastdiff);
        return ans;
    }
