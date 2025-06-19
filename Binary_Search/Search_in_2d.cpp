#include<bits/stdc++.h>
using namespace std;
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols = matrix[0].size();
        int n = rows*cols;
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            int mid= s+(e-s)/2;
            int rowIndex = mid/cols;
            int colIndex = mid%cols;
            if(matrix[rowIndex][colIndex]==target)
            {
                return true;
            }
            else if(target > matrix[rowIndex][colIndex])
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return false;
}
int main()
{
    vector<vector<int>> matrix= {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 40;
    bool ans = searchMatrix(matrix,target);
    if(ans)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
}