#include<bits/stdc++.h>
using namespace std;
void printvv(vector<vector<int>> &v)
{
    for(int i=0;i<v.size();i++)
    {
        vector<int>&temp=v[i];
        int a = temp[0];
        int b = temp[1];
        cout<<a<<" "<<b<<" ";
        cout<<endl;
    }
    
}
bool myComp(vector<int> &a,vector<int> &b)
{
    return a[1]<b[1];
}
int main()
{
    vector<vector<int>> v;
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter a , b"<<endl;
        int a,b;
        cin>>a>>b;
        vector<int> temp ;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),myComp);
    printvv(v);
}