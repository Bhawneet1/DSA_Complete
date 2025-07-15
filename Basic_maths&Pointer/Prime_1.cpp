#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool isPrime(int n)
    {
        if(n<=1) return false;
        for(int i=2;i<n;i++ )
        {
            if(n%i==0) return false;
        }
        return true;
    }
int countPrimes(int n) {
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(isPrime(i)) c++;
        }
        return c;
    }

bool isPrime_2(int n)
    {
        if(n<=1) return false;
        int sqrtN = sqrt(n);
        for(int i=2;i<=sqrtN;i++ )
        {
            if(n%i==0) return false;
        }
        return true;
    }

int countPrimes_2(int n) {
        // int c=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(isPrime_2(i)) c++;
        // }
        // return c;
        if(n==0) return 0;
        vector<bool> prime(n,true);
        prime[0]=prime[1]=false;
        int ans=0;
        for(int i=2;i<n;i++)
        {
            if(prime[i]) ans++;

            int j=2*i;

            while(j<n)
            {
                prime[j]=false;
                j+=i;
            }
        }
        return ans;
    }
int main()
{
    int n=10;
    int ans = countPrimes_2(n);
    cout<<ans<<endl;
    return 0;
}