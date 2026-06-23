#include<iostream>
using namespace std;

int main(){
    /*output-
    A
    B A
    C B A 
    D C B A*/
    int n =4;
    

    for(int i=0; i<n; i++)
{
    char ch = 'A' + i;

    for(int j=i+1; j>0; j--)
    {
        cout << ch << " ";
        ch--;
    }

    cout << endl;
}w
    
    return 0;
}