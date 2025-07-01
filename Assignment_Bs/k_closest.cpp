#include<bits/stdc++.h>
using namespace std;
    vector<int> twoPointMethod(vector<int>& arr, int k, int x)
    {
        int l=0;
        int h= arr.size()-1;
        while(h-l>=k)
        {
            if(x-arr[l]>arr[h]-x)
            {
                l++;
            }
            else{
                h--;
            }
        }
        vector<int> ans;
        for(int i=l;i<=h;i++)
        {
            ans.push_back(arr[i]);   
        }
        return ans;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return twoPointMethod(arr,k,x);
    }
    int lowerBound(vector<int>& arr,int x)
    {
        int s=0;
        int e =arr.size()-1;
        int ans =e;
        while(s<=e)
        {
            int mid = s+(e-s)/2;
            if(arr[mid]>=x)
            {
                ans = mid;
                e=mid-1;
            }
            else if(arr[mid]<x)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
    }
    vector<int> BS(vector<int>& arr, int k, int x)
    {
        int h=lowerBound(arr,x);
        int l = h-1;
        while(k--)
        {
            if(l<0) h++;
            else if(h>arr.size()) l--;
            else if(x-arr[l]>arr[h]-x)
            {
                h++;
            }
            else
            {
                l--;
            }
        }
        return vector<int> (arr.begin()+l+1,arr.begin()+h);
    }
int main()
{
    vector<int> arr = {12,16,22,30,35,39,42,45,48,50,53,55,56};
    int k = 4;
    int x = 35;
    vector<int> ans = findClosestElements(arr,k,x);
    for(int i=0;i<ans.size();i++)
    {
        cout<< ans[i]<<" ";
    }
    cout<<endl;
}