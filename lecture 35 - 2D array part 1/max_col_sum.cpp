#include<iostream>
#include<climits>
using namespace std;

int Sum(int arr[][3], int rows, int cols)
{
    int maxColSum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int colSum = 0;
        for (int j = 0; j < cols; j++)
        {
            colSum += arr[j][i]; //j i written instead of i j nahi toh wo row jesa hi ho jata
        }
        maxColSum = max(maxColSum,colSum);
        
    }
    return maxColSum;
    
}


int main()
{
    int matrix[3][3] = {{1, 2, 30}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    cout << Sum(matrix,rows,cols);
    return 0;
}