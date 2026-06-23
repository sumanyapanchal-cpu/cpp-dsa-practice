#include<iostream>
using namespace std;

int main(){
    /*output-
    1
    12
    123
    1234*/

    int n=4; //since 4 lines hai total
    for (int i = 0; i < n; i++)
    {
        int num=1; //next line me reset ho ske 1 se isliye
        for (int j = 0; j < i+1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout <<endl;
    }
    
    return 0;
}