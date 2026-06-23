#include<iostream>
using namespace std;

int main(){
    /*output-

    * * * * 
    * * * * 
    * * * * 
    * * * * 
    
    
    */
    int n=4;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*" << " "; // " " ye krta hai thoda sa space dedeta hai bich me
        }  
        cout << endl;
    }
    return 0;
}