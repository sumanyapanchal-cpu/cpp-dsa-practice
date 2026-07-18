#include<iostream>
using namespace std;
/*logic-
nCr = n!/[r! * (n-r)!]
so if it is 8C2 = 8! / [2! * (8-2)!] and (8-2)! = 6!
*/

/*
this was a prior bullshit approach DO NOT DO THIS

int ncr(int n, int r){
    int fact = 1;
    for (int i = 1; i <= n; i++) // n! k liye
    {
        int n_fact;
        n_fact *= i;
    }
    for (int i = 1; i <= r; i++)
    {
        int r_fact;
        r_fact*=i;
    }
    for (int i = 1; i <= (n-r); i++)
    {
        int nr_fact;
        nr_fact+=i;
    }
    return (n_fact);
    
} */

int factorial(int x){   //ek normal factorial ka function likha hai 
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i; //fact = fact * i
    }
    return fact;
}
    
int binomial(int n, int r){ //ek function factorial calculate krne k liye and output k liye rkha hai 
    return factorial(n)/(factorial(r) * factorial(n-r));
}

int main(){
    cout << binomial(5,2) << endl;
    return 0;
}