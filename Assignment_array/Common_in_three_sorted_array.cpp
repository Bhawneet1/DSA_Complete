#include<bits/stdc++.h>
using namespace std;
vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        vector<int> ans;
        set<int> st;
        int i,j,k;
        i=j=k=0;
        int n1=arr1.size();
        int n2=arr2.size();
        int n3=arr3.size();
        while(i<n1 && j<n2 && k<n3)
        {
            if(arr1[i]==arr2[j] && arr2[j]==arr3[k]) {
                st.insert(arr1[i]);
                i++,j++,k++;
                
            }
            else if(arr1[i]<arr2[j])i++;
            else if(arr2[j]<arr3[k])j++;
            else k++;
        }
        for(auto i:st)
        {
            ans.push_back(i);
        }
        return ans;
}
int main()
{
    vector<int> arr1 ={1, 5, 10, 20, 40, 80};
    vector<int> arr2 ={6, 7, 20, 80, 100};
    vector<int> arr3 ={3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> ans =commonElements(arr1,arr2,arr3);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}