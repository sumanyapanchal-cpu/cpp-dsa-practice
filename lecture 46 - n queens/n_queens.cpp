#include<iostream>
#include<vector>
using namespace std;



bool isSafe(vector<string> &board, int row, int col, int n)
{
    //horizontal check-
    for(int j = 0; j<n ; j++)
    {
        if(board[row][j] == 'Q')
        {
            return false;
        }
    }

    //vertically check- 
    for(int i = 0; i<n; i++)
    {
        if(board[i][col] == 'Q')
        {
            return false;
        }
    }

    //left diagnol-
    for(int i = row , j = col; i>=0 && j>=0; i--,j--)
    {
        if(board[i][j] == 'Q')
        {
            return false;
        }
    }

    //right diagnol - 
    for(int i = row, j = col; i>=0 && j<n; i--,j++)
    {
        if(board[i][j] == 'Q')
        {
            return false;
        }
    }
    return true;
}

    void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans)
    {
        if(row == n) //since row starts from 0,1 and so on
        {
            ans.push_back(board);
            return;
        }

        for(int j = 0; j<n; j++)
        {
            if(isSafe(board , row , j , n))
            {
                board[row][j] = 'Q';
                nQueens(board , row+1 , n , ans);
                board[row][j] = '.'; //backtracking step
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) { //actual fxn given in lc
        vector<string> board (n , string(n , '.')); //that is .q.. is a string and aisa ek vector hai called board
        //and init by . in every place such that string ho .... n size ki init by dot
        vector<vector<string>> ans ; 
        nQueens(board , 0 , n , ans);
        return ans;
    }


int main()
{
    int n = 4;
    vector<vector<string>> ans = solveNQueens(n);
    for(const auto& val : ans)
    {
        for(const auto& row : val)
        {
            cout << row << endl;
        }
        cout << endl;
    }
    return 0;
}