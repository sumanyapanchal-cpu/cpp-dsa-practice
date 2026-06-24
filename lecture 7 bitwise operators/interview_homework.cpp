/*#include<iostream>
using namespace std;

// to find if a number is a power of 2 without using loops-
//with loops it would be-

bool isPowerOfTwo(int n){

    if(n <= 0){ //0 ki condition remove krdi
        return false;
    }

    while(n > 1){

        if(n % 2 != 0){
            return false;
        }

        else{
            n = n / 2;
        }
            
        
    }

    return true; //bcoz jitne bh possibility thi not true ki wo humne eleminate krdi, like ab sari not true ki possibility hat gyo to true return krwaya
}
int main(){
    
int n = 36;


if(isPowerOfTwo(n)){
    cout << "yes";
}
else{
    cout << "no";
}
cout << isPowerOfTwo(n) << endl;
    
    
    return 0;
} */

//ab actual ques without loop logic-

#include<iostream>
using namespace std;

bool isPower(int n){
    return n>0 && (n & (n-1)) == 0;
}

int main(){
    

    int n = 36;
    if(isPower(n)){
        cout << "yes power of 2";
    }
    else{
        cout << "no not a power of 2";
    }

    return 0;
}