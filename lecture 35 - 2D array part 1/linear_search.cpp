#include <iostream>

using namespace std;

pair<int , int> linearSearch(int arr[][3], int rows, int cols, int target)
//isme mandatory hota hai ki col number toh pass krna hi pdta hai no matter what since it helps the compiler to access the values of a 2d arr
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                return {i,j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 4;
    int cols = 3;
    int target = 8;

    pair <int, int> ans =  linearSearch(matrix , rows, cols, target);
    cout << ans.first << " , " << ans.second << endl;

    return 0;
}