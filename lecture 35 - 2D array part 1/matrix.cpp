#include<iostream>
using namespace std;

int main()
{
    int matrix[4][3] = {{1,2,3} , {4,5,6} ,{7,8,9}, {10,11,12} };
    int rows = 4;
    int cols = 3;

    matrix[2][1] = 18; //update

    cout << matrix[2][1] << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
        
    }
    cout << endl;

    int arr[4][3];
    int arrRow = 4;
    int arrCol = 3;
    for (int i = 0; i < arrRow; i++)
    {
        for (int j = 0; j < arrCol; j++)
        {
            cin >> arr[i][j];
        }
        
    }

    for (int i = 0; i < arrRow; i++)
    {
        for (int j = 0; j < arrCol; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        
    }
    cout << endl;
    
    
    return 0;
}