#include<iostream>
using namespace std;

/* ye mera failed logic concept hai 
int prime(int n){
    for (int i = 2; i <= n; i++)
    {
        if(n%i==0){
            break; //agar continue likha to ye iternation over and cout nhi chalega
        }
        else{
         cout << i;
        }
        return i; //return krdiya function ko toh ab iske aage ka toh bilkul bhi nh chalega- function over
    }
    
} */

bool isPrime(int n)
{
    if(n <= 1)
    {
        return false; // to eliminate any -ve numbers and 1 itself
    }

    for(int i = 2; i <= (n-1) ; i++) //isko i<n bh likh skte ho baat ek hi hai 
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}
int main(){
   int n = 10;

    for(int i = 2; i <= n; i++) // toh hum 2-10 tk k liye prime check krre hai bcoz ho skta hai ki 10 bhi prime ho isliye check krna pdta hai (eg - 2-13) to end digit bh check krni pdti hai
    {
        if(isPrime(i)) //mtlb isprime == true hai toh, print krdo, 
        //simple- har iternation p puch rhe ho ki i prime hai ya nahi h 2 se 10 tk

        {
            cout << i << " ";
        }
    }

    return 0;
}