#include<iostream>
#include<vector>
using namespace std;


    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int srow = 0;
        int erow = m-1;
        int scol = 0;
        int ecol = n-1;

        vector<int>ans;

        while(srow<=erow && scol<=ecol)
        {
            //top
            for(int j = scol; j<=ecol; j++)
            {
                ans.push_back(mat[srow][j]);
            }


            //right
            for(int i = srow+1; i<= erow; i++)
            {
                ans.push_back(mat[i][ecol]);
            }


            //bottom
            for(int j = ecol-1; j>= scol; j--)
            {
                //corner case- since top ne ek baar print krdiya to bottom se prevent by break
                if(srow == erow)
                {
                    break;
                }
                ans.push_back(mat[erow][j]);
            }


            //left
            for(int i = erow-1; i>= srow+1; i--)
            {
                //corner case agar right ne ek baar print krdiya to left se break krdo
                if(scol == ecol)
                {
                    break;
                }
                ans.push_back(mat[i][scol]);
            }
            srow++; erow--; scol++; ecol--;
        }
        return ans;
    }

    int main() //mian fxn ab se vs code ka self generated hoga so focus on the fxn writing
    {
        vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};
        vector<int> ans = spiralOrder(mat);
        for(int i = 0; i<ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        return 0;
    }
