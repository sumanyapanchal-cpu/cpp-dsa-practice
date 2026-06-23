#include<iostream>
using namespace std;

int main(){

    /*
    output-
    1 - 1st line - 1st line me i=0 ab chacarter i+1 print hore hai- i.e 0th i me 1 char and so on..
    22 - 2nd line- i=1 - i+1=1+1=2 ie number bh 2 hai and print bh 2 baar ho rha hai isliiye me i+1 ko hi print krwa rhi hu 
    333 -3rd line - i=2 --> i+1
    444 - 4th line i=3 --> i+1
    */

    int n=4;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <i+1; j++) //j<=i ya j<i+1 kaho baat ek hi hai
        {
              cout << i+1 << " ";
              
        }
        cout << endl;
    }
    
    return 0;
}