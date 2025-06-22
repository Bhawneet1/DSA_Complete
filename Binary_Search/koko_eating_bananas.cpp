#include<bits/stdc++.h>
using namespace std;
bool canKokoFinishBananasWithKSpeed(vector<int>& piles, int h,int k){
        long long int totalHoursTakenByKokoToFinishAllBananas = 0;
        for(int i=0;i<piles.size();i++)
        {
            totalHoursTakenByKokoToFinishAllBananas+=ceil(piles[i]/(double)k);
        }
        return totalHoursTakenByKokoToFinishAllBananas<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        auto it = max_element(piles.begin(),piles.end());
        int e = *it;
        //end to pakka answer hai
        int ans=0;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            int k = mid;
            
            if(canKokoFinishBananasWithKSpeed(piles,h,k)){
                ans = k;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
int main()
{
    vector<int> piles = {3,6,7,11};
    int h=8;
    int ans = minEatingSpeed(piles,h);
    cout<<ans<<endl; 
}