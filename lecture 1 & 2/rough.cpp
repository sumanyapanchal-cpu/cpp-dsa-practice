#include<iostream>
using namespace std;


int fact (int n){

    int factorial=1;
/*if(n==1 || n==0){
    return 1;
}
else{
    return n * fact(n-1);
}*/
//to write factorial using loops-

for (int i = 1; i <= n; i++)
{
    factorial*=i;
}
return factorial;

}
int main(){
    
    
    cout << fact(5) << endl;
    return 0;
}