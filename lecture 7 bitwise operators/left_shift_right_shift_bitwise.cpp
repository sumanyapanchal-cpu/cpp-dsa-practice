#include<iostream>
using namespace std;

int main(){

    int n = 4;
    cout << (4<<1) << endl; //output - 8
    cout << (10>>1) << endl;
    /* LOGIC- 
    
    << left shift operator
    >> right shift operaor
    
    now say binary me we hai 1 0(*) 0 (suppose its position is b c d) and this is 4
    toh if i say 4 << 1 mtlb 1 space sara data to the left shift hojyga
    1 0 0 (0) (position- a b c d) mtlb 1 shifted 1 place left from b to a nd 0* c se b p shift hogya and 
    isliye ek (0) d position wala extra khali reh gya shift hone k wjh se islye usko 0 bana diya jo bacha
    and ye ab 1000 ban gya and 1000 is 8 isliye output aaya 8
    
    10 << 2 toh 10 is 1010
    1010 00 jisko shortcut se solve kro toh it is 40 (32+8)


    RIGHT SHIFT OPERATOR- 
     10 >> 1
     1010 >> 1
     101 hojyga bcoz concept-
     kisi bh number ki left me bht sare zeros hote h toh simple shift hojata h but right me empty hota hia 
     mtlb 1010 is like 000000000001010 to left shift me numbers zero k place lelete hai 
     but right side me zeros nh h isliye uske liye 4 hi spaces hogi, and 

     right shift ka sara logic is in notebook

    
    
    */

    return 0;
}