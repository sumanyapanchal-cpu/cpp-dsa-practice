#include<iostream>
using namespace std;

/*logic-
    suppose 145 ka 1+4+5=10 krna hai 
    toh hum kya jrege is modulo leke numbers seperate krege
    145 % 10 (modulo liya hai to remainder dega which is 5) and quotient-14 --> 5 alag hogya
    then 14 % 10 kra toh remainder- 4, quotient- 1
    1 % 10 liya toh remainder = 1 bcoz 0 ayga na phle toh (decimal se phle toh isliye 0 quotient and remainder = 1)

    isliye now- (MOTA MOTA HISAB ISS QUES KA )
    145/10 = quotient - 14
    remainder - 5
    toh like 
    step 1. num % 10 liya toh remainder aajyga and one digit sorted
    step 2. num = num/10 leliya taki quotient dede and overall number me se last digit remove hojaye (cz last digit gives us remainder)
    
    */

    int sumOfDigit(int num){
        int digitSum=0;  //sum ko 0 se initialise kra
        while (num > 0) // bcoz say 145 hai toh 145 % 10 = 5, then 14 % 10 = 4 then 1% 10 = 0 isliye jbtk 0 na hojaye tb tk run krwao and 0 ko include nh krwana 
        {
            int lastDigit = num % 10; //last digit bcoz modulo gives the remainder and remainder is the last digit that we need to add to the sum 
            num = num/10;  // to remove last digit from the overall number
            digitSum += lastDigit; //sum me last digit add krdo
        }
        return digitSum;
        
    }

int main(){

    int a = 145;
    cout << sumOfDigit(a) << endl;
    return 0;
}