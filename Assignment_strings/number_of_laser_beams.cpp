#include<bits/stdc++.h>
using namespace std;
int countDevices(string b)
    {
        int c=0;
        for(auto s:b)
            c+=s-'0';
        return c;
    }
    int numberOfBeams(vector<string>& bank) {
        vector<int> devices;
        for(auto b:bank)
        {
            devices.push_back(countDevices(b));
        }

        int beams = 0;
        for(int i=0;i<devices.size();i++)
        {
            int j=i+1;
            while(j<devices.size())
            {
                beams+=devices[i]*devices[j];
                if(devices[j]==0) j++;
                else break;
            }
        }
        return beams;
    }