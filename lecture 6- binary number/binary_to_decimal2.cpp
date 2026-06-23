#include<iostream>
using namespace std;

/*logic-
let say 101010 hai to convert into decimal form
isko aise likha for identification - 1(*)0(*)1(#)0(#)1($)0($)

ab right to left k order me dekho-
and sbko 2 ki power me likha hai ye rule hai 
means- 
0($) ko 2^0 mtlb 0 * 2^0 = 0
1($) ko 2^1 mtlb 1 * 2^1 = 2
0(#) ko 2^2 mtlb 0 * 2^2 = 0 and hence 0 wale sare terms 0 hogye
1(#) k liye 1 * 2^3 = 8
1(*) k liye 1 * 2^5 = 32
now adding all = 32 +8+2 = 42 ans
and in sare numbers ko then 020 aise jo bh aare hai sbko indivicually add krdo-
*/

int binToDecimal(int binNum){
    int ans=0, pow=1; //pow = 1 mtlb 2^0 hai abhi
    while(binNum > 0){
    
        int rem= binNum % 10 ; //remainder for last digit calculation
        binNum = binNum / 10; //ye hai taki number update ho ske previous numner ko hata k

        ans += (rem*pow);    
        pow = pow * 2; //power upgrade krdi mtlb 2^0=1 *2 =2 then 2*2 =4 and so on..
}
return ans;
}

int main(){
    cout << binToDecimal(1010) << endl;
    return 0;
}