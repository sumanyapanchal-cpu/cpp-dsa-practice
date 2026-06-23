#include<iostream>
using namespace std;

int main(){

    /*output-
    A A A A
      B B B
        C C 
          D*/

int n=4;
char ch = 'A';

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i; j++) // spaces ka loop hai ye
    {
        cout << " ";
    }
    for (int j = 0; j < (n-i); j++) // to see ki ek line me kitne characters hai 
    {
        cout << ch;
        
    }
    ch = ch +1;
    cout << endl;
}


    return 0;
}