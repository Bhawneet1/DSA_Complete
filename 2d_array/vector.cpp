#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v(4,vector<int>(3,0));
    int n=v.size();
    int m=v[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}