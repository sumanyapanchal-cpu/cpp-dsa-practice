#include<iostream>
#include<vector>
using namespace std;



int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6,10,11}, {7, 8, 9}}; // {4, 5, 6,10,11} this is possible since vec me dynamic sizing hoti h to no issues

    cout << mat[0][0] << endl;

    for(int i =0; i<mat.size(); i++)
    {
        for(int j = 0; j<mat[i].size(); j++) //explaination in nb
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}