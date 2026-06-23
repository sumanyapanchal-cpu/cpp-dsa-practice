#include<iostream>
using namespace std;
 /*LOGIC-
    suppose number h 5
    toh har number ko 2 se divide krna hai, toh 5/2 = 2 (quotient) and remainder = 1*
    then 2(previous quotient) ko wapis 2 se / kra 2 se toh quotient aaya 1 and remainder = 0
    then 1(previous quotient) ko wapis 2 se / kra toh quotinet aaya 0 and remainder 1#
    quotient 0 tk krna hai sort (i.e number > 0,bcoz har step p number update hora hai)

    now isko remainder ko ulta order me pdho 1#01* is binary of decimal 5
    now isko code me likha hai,
    ab power ulta kese kese likhe?

    1# ko 1st place(hundreds) pr rkhna hai toh 1#- 10^2 likhdo, 100 (trust the process)
    0 ko 2nd place (tens pr)
    1* ko 3rd place ya (ones pr rkha hai ) (order- left to right)

    isliye 1# ko 10^2 likhdo yani ki 1# * 10^2 = 1* 100 = 100
    0 ko 10^1 yani ki 0*10^2 = 0
    and 1* ko 10^0= yani ki 1* * 10^0 = 1
    now adding all = 100 + 0 + 1 = 101 
    ab isko code me likha:
    variables declare- 

    ans = 0; //final ans sum wala abhi 0 se init kra
    pow = 1; // this means 10^0 = 1
    while(decNum > 0){
     rem = decNum % 2 //remainder aajyga then number update krna hai 
     decNum = decNum / 2; // to get actual quotient

     ans += (rem*pow); mtlb and yani ki jo sum hai usme remainder ko power(10 ki power) se multiply krke add krdo
     pow = pow * 10; (power increase for next since 10^0= 1 then 10^1 = 10 isliye 1--> 10 me convert kra islie * 10 )

    }
    */

    int DecToBinary(int decNum){
      int ans = 0;
      int pow = 1;

      while(decNum > 0){
        int rem = decNum % 2; //remainder dedega
        decNum = decNum/2; //actual quotient dega

        ans += (rem*pow);
        pow *= 10;
      }
      return ans;
    }

int main(){
    int decNum = 50;
    cout << DecToBinary(decNum) << endl;
    //to print binary from 1-10 all number

    for (int i = 1; i <= 10; i++)
    {
        cout << DecToBinary(i) << endl;
    }
    
   
    return 0;
}