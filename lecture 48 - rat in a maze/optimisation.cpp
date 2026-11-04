#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>> &mat , int r, int c, string path, vector<string> &ans)
{
    int n = mat.size();
    //base cases - first is to check ki jis cell p abhi ho wo valid h bh ya nahi isliye phle boundary cond ka base case likhege

    if(r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || mat[r][c] == -1  ) //mat[r][c] == 0 means cell is blocked
    {
        return;
    }

    if(r == n-1 && c== n-1) //means last cell p aa gaye
    {
        ans.push_back(path);
        return;
    }

    mat[r][c] = -1; //visited mark krdiya bcoz humko same cell p dobara visit nh krna h

    //down
    helper(mat , r + 1, c, path + "D" , ans);

    //up
    helper(mat , r - 1, c, path + "U" , ans);

    //left
    helper(mat , r, c - 1, path + "L" , ans);

    //right
    helper(mat , r, c + 1, path + "R" , ans);

    mat[r][c] = 1; //backtracking step bcoz humko humari choices undo krni h

}

//complete this fxn - 
 vector<string> findPath(vector<vector<int>> &mat)
 {
    int n = mat.size();
    vector<string> ans;
    string path = ""; //empty init
    helper(mat , 0 , 0 , path , ans );

    return ans;
 }

int main()

{
    vector<vector<int>> mat = {{1,0,0,0}, {1,1,0,1}, {1,1,0,0}, {0,1,1,1}};
    vector<string> ans = findPath (mat);
    for(string path : ans)
    {
        cout << path << endl;
    }
    return 0;
}