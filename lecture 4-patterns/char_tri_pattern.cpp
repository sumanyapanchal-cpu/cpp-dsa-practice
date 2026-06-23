#include<iostream>
using namespace std;

int main(){

    /*output-
    
    A
    B B
    C C C
    D D D D
    E E E E E
    */
   
    int n=5;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << ch << " ";
            
        }
        ch++; //loop k bahar += kra loop k ander krte toh fir A BC DEF... aise hota print
        cout << endl;
    }
    

    return 0;
}