#include<bits/stdc++.h>
using namespace std;
int firstRepeated(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++)
        {
            bool isRepeated = false;
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]==arr[j])
                {
                    isRepeated = true;
                    return i+1;
                }
            }
        }
        return -1;
}
int firstRepeated_2(vector<int> arr)
{
    unordered_map<int,int> hash;
    for(int i=0;i<arr.size();i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(hash[arr[i]]>1)
        return i+1;
    }
    return -1;
}
int firstRepeated_3(vector<int> arr)
{
    int *hash = new int [6];
    for(int i=0;i<arr.size();i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0;i<arr.size();i++)
    {
        if(hash[arr[i]]>1)
        return i+1;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1,5,3,4,3,5,6};
    int ans =firstRepeated_3(arr);
    cout<<ans<<endl;
}