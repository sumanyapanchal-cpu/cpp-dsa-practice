#include<iostream>
using namespace std;

int main(){

    int a=4, b=8;
    cout << (a & b) << endl; //ans =0 
    cout << (a | b) << endl; // ans - 1100 but in decimal 1100 is 12
    cout << (a ^ b) << endl;


    /*logic-
    and = kaam hota hai basically multiply krna (wo mere wali trick se not literally)
    4= 100 and 8 = 1000
   (0)100             upr bracket me 0 lgaya fo requality kyuki khali jhj thi na 
   & 1000       0 0 = 0, 1 0 =0, 0 1 = 0, 1 1 = 1 
   -------
   0000
   -------- toh ye 0 hi final ans h 

   similar logic for | (not) -- this adds and 1+1 = true + true = true isliye 1 hi deta hai ans

   not bitwise XOR(^) - iska logic is same--> 0 return and different hoga toh --> 1 return 
   islie 1^1 = 0 since same hai 
   0 ^ 1 = 1
   */
    return 0;
}