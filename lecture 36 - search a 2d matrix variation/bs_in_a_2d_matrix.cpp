#include<iostream>
#include<vector>
using namespace std;

bool searchInRow(vector<vector<int>>&matrix, int target ,int row)
{
    //int m = matrix.size(); //rows and this is not required here since hum bs col check krre hai 
    int n = matrix[0].size(); //cols
    int st = 0, end = n-1;

    while(st <= end)
    {
        int mid = st + (end-st) /2;
        if (target == matrix[row][mid])
        {
            return true;
        }
        else if(target > matrix[row][mid]) //right search
        {
            st = mid + 1;
        }
        else
        {
            end = mid -1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>>&matrix, int target)
{
    //first thing is to apply bs on total no of rows
    int m = matrix.size(); //rows
    int n = matrix[0].size(); //cols
    int startRow = 0 , endRow = m-1;
    
    while(startRow <= endRow)
    {
        int midRow = startRow + (endRow - startRow) / 2;
        if (target >= matrix[midRow][0] && target <= matrix[midRow][n-1]) //mtlb sahi row identify
        {
            return searchInRow(matrix,target,midRow);
        }
        else if(target >= matrix[midRow][n-1]) //target bada hai toh niche search kro 
        {
            startRow = midRow + 1;

        }
        else //is target <= mat[midrow][n-1]
        {
            startRow = midRow - 1;
        }
        
    }
}

int main()
{
    vector<vector<int>> mat = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    cout << searchMatrix(mat,34);
    return 0;
}