#include<bits/stdc++.h>
using namespace std;
string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
        // Complete the function
        int carry=0;
        string ans;
        int i=arr1.size()-1;
        int j=arr2.size()-1;
        
        while(i>=0 && j>=0)
        {
            int x=arr1[i]+arr2[j]+carry;
            int digit = x%10;
            ans.push_back(digit + '0');//change number to char
            carry=x/10;
            i--,j--;
        }
        while(i>=0)//no. of digits of arr1>arr2
        {
            
            int x=arr1[i]+0+carry;
            int digit = x%10;
            ans.push_back(digit + '0');//change number to char
            carry=x/10;
            i--;
        }
        while(j>=0)//no. of digits of arr1<arr2
        {
            
            int x=0+arr2[j]+carry;
            int digit = x%10;
            ans.push_back(digit + '0');//change number to char
            carry=x/10;
            j--;
        }
        if(carry)
        {
            ans.push_back(carry + '0');//ulta answer therefore reverse
        }
        while(ans[ans.size()-1]=='0')
        {
            ans.pop_back();//remove 0 from starting
        }
        reverse(ans.begin(),ans.end());
        return ans;
}
int main()
{
    vector<int> arr1={9,5,4,9};
    vector<int> arr2={2,1,4};
    string ans = calc_Sum(arr1,arr2);
    for(int i=0;i<ans.length();i++)
    {
        cout<<ans[i]<<" ";
    }
}