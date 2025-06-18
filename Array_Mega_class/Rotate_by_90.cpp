#include<bits/stdc++.h>
using namespace std;
 void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m = matrix[0].size();

        //1. transpose
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<m;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //2. Reverse row-wise
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }

}
int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[0].size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}