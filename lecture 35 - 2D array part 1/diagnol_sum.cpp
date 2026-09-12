#include<iostream>
using namespace std;

int diagSum(int arr[][4], int n) //tc = 0(n^2) but same thing can be done in 0(n) how??
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            {
                sum += arr[i][j];
            }
            else if(j==n-i-1)
            {
                sum += arr[i][j];
            }
        }
        
    }
    return sum;
}


/*
0(n) loop for same thing- very imp

int diagSum(int arr[][4], int n) //tc = 0(n^2) but same thing can be done in 0(n) how??
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    
        if(i != n-i-1)
        {
            sum += mat[i][n-i-1]; //logic explained in nb
        }
    }
    return sum;
}

*/

int main()
{
    int matrix[4][4] = {{1, 2, 30}, {4, 5, 6}, {7, 8, 9} , {10, 11, 12}};
    int n =  3;


    cout << diagSum(matrix,n) << endl;
    return 0;
}