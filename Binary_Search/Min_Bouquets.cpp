#include<bits/stdc++.h>
using namespace std;
int canMakeBouquetWithDDays(vector<int>& bloomDay, int m, int k,int D)
    {
        int counter = 0;
        for(int i=0;i<bloomDay.size();i++)
        {
            //check whether ith flower is bloomed or not
            if(bloomDay[i] <=D)
            {
                //bloom ho gya
                counter++;
            }
            if(counter == k)
            {
                //I can make a bouquet
                
                m--;
                if(m==0) break;
                counter = 0;
            }
            //not bloomed case
            if(bloomDay[i]>D)
            {
                counter=0;
            }
        }
        return m==0;//were you able to make m bouquets
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long int requirement = (long long int)m*(long long int)k;
        if(bloomDay.size()<requirement)
        {
            return -1;
        }
        int start = *min_element(bloomDay.begin(),bloomDay.end());//atleast one flower is bloomed
        int end = *max_element(bloomDay.begin(),bloomDay.end());//all flowers are bloomed
        int ans =-1;
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            int day = mid;
            if(canMakeBouquetWithDDays(bloomDay,m,k,day))
            {
                ans = mid;
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }

        }
        return ans;

    }
int main()
{
    vector<int> bloomDay = {7,7,7,7,11,12,7,7};
    int m = 2;
    int k = 3;
    int ans = minDays(bloomDay,m,k);
    cout<<ans<<endl;
}