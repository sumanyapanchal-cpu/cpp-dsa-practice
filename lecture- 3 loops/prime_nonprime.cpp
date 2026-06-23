#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    bool isPrime = true;
    //as per older logic-

/*for(int i=2; i<=n-1; i++){
    if(n%i==0){
        isPrime = false;
        break;
    }
}

if(isPrime==true){
    cout << "prime";
}
else {
    cout << "not prime";
} */

//newer logic - logic in notebook

for(int i=2; i * i <=n; i++){
     if(n%i==0){
        isPrime= false;
        break;
     }
     
}

if(isPrime==true){
    cout << "prime";
}
else {
    cout << "not prime";
}

    return 0;
}

