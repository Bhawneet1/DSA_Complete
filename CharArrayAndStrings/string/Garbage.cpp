#include<bits/stdc++.h>
using namespace std;
int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickP=0;
        int travelP=0;
        int lastP=0;

        int pickM=0;
        int travelM=0;
        int lastM=0;

        int pickG=0;
        int travelG=0;
        int lastG=0;

        for(int i=0;i<garbage.size();i++)
        {
            string currentHouse = garbage[i];
            //now we will enter each house for type of garbage
            for(int j=0;j<currentHouse.length();j++)
            {
                char garbageType = currentHouse[j];

                if(garbageType == 'P')
                {
                    pickP++;
                    //save current as last
                    lastP=i;
                }

                if(garbageType == 'M')
                {
                    pickM++;
                    lastM=i;
                }

                if(garbageType == 'G')
                {
                    pickG++;
                    lastG=i;
                }
            }

        }
        //till last P calculate travel time
        for(int i=0;i<lastP;i++)
        {
            travelP=travelP + travel[i];
        }
        for(int i=0;i<lastM;i++)
        {
            travelM=travelM + travel[i];
        }
        for(int i=0;i<lastG;i++)
        {
            travelG=travelG + travel[i];
        }

        int totalPick = pickP+pickM+pickG;

        int totalTravel = travelM + travelP+travelG;

        int totalTime = totalPick + totalTravel;

        return totalTime;
    }
int main()
{
    vector<string> garbage = {"MMM","PGM","GP"}; 
    vector<int> travel = {3,10};
    int ans =garbageCollection(garbage,travel);
    cout<<ans<<endl;

}