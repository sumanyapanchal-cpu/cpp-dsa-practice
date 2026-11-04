#include<iostream>
#include<vector>
using namespace std;



bool isSafe(vector<vector<char>>& board , int row, int col, char dig)
{
    //horizontal check - row same
    for(int j = 0; j<=8; j++)
    {
        if(board[row][j] == dig)
        {
            return false;
        }
    }
    
    //vertical check - col same rhta hai 
    for(int i = 0; i<=8; i++)
    if(board[i][col] == dig)
    {
        return false;
    }

    //grid check - srow = st row and scol = st col
    int srow = (row/3) * 3;
    int scol = (col/3) * 3;
    for(int i = srow ; i<=srow + 2; i++)
    {
        for(int j = scol; j<=scol+2; j++)
        {
            if(board[i][j] == dig)
            {
                return false;
            }
        }
    }
    
    return true;
}

bool helper(vector<vector<char>>& board , int row, int col)
{
    if(row == 9) //base case that end of sudoko reached
    {
        return true;
    }
    
    int nextRow = row , nextCol = col+1; 
    if(nextCol == 9)
    {
        nextRow = row + 1;
        nextCol = 0;
    }
    if(board[row][col] != '.') //dot means empty and not equal to dot means not empty then call next row and col
    {
        return helper(board , nextRow , nextCol);
    } //if not so then place dig in cell by for loop - 

    for(char dig = '1'; dig<='9'; dig++)
    {
        if(isSafe(board,row,col,dig))
        {
            board[row][col] = dig; //if safe then place that digit into that cell and call again helper for next cell
            if(helper(board, nextRow, nextCol)) //that is if it return true since helper ek bool type hai
            {
                return true;
            }
            board[row][col] = '.'; //backtracking
        }
        
    }
    return false;
}
    void solveSudoku(vector<vector<char>>& board) {
        helper(board, 0, 0);
    }


int main()
{
    vector<vector<char>> board = {{
    {'.','.','.','.','.','.','.','1','.'},
    {'4','.','.','.','.','.','.','.','.'},
    {'.','2','.','.','.','.','.','.','.'},
    {'.','.','.','.','5','.','4','.','7'},
    {'.','.','8','.','.','.','3','.','.'},
    {'.','.','1','.','9','.','.','.','.'},
    {'3','.','.','4','.','.','2','.','.'},
    {'.','5','.','1','.','.','.','.','.'},
    {'.','.','.','8','.','6','.','.','.'}
}};

    solveSudoku(board);
    for(const auto& val : board)
    {
        for(const auto& v : val)
        {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}