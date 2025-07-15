#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &coins,int amount)
    {
        if(amount == 0)
        {
            return 0;
        }
        int minCoin = INT_MAX;
        //har amount ke liye poora coins k array ko traverse
        for(int i=0;i<coins.size();i++)
        {

            int coin = coins[i];
            //if coin value > amount , no need to call recursive function
            //if coin<=amount recursive call
            if(coin<=amount)
            {
                //ik coin use amt becomes amt-coin
                int recursiveAns = solve(coins,amount-coin);
                //invalid ->INT_MAX
                //valid !=INT_MAX

                if(recursiveAns != INT_MAX)
                {
                    int coinsUsed = 1+recursiveAns;//1 as one used above
                    minCoin = min(minCoin ,coinsUsed );
                }
            }
        }
        return minCoin;
    }
    int coinChange(vector<int>& coins, int amount) {
        int ans = solve(coins , amount);
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
    }
int main()
{
    vector<int> coins = {2,5,1};
    int amount = 6;
    int ans =coinChange(coins,amount);
    cout<<ans<<endl;
}