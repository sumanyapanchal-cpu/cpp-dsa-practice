#include<iostream>
using namespace std;

int main(){
    int n, fact=1;
    cout << "enter n";
    cin >> n;

    /*for(int i=1; i<=n; i++){
        fact = i*fact;
    }
    cout << "factorial is: " << fact << endl; */
    

    for(int i = n; i>=1; i--)
    {
        fact = i*fact;
    }
    cout << "factorial is: " << fact << endl;
    return 0;
}