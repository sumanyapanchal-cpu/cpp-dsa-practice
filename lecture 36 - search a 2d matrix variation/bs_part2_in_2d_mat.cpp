#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size(); //rows
        int n = mat[0].size(); //cols;

        int r = 0, c = n-1;
        while(c>=0 && r<m)
        {
            if(tar == mat[r][c])
            {
                return true;
            }
            else if(tar < mat[r][c])
            {
                c--;
            }else
            {
                r++;
            }
        }
        return false;
    }


int main()
{
    vector<vector<int>> mat = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target = 11;
    bool result = searchMatrix(mat, target);
    cout << result << endl;
    return 0;
}