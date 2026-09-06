#include<iostream>
using namespace std;

int main(){
    char str[100];
    cout << "enter char array" << endl; // hello world then output mme only hello bcoz space k baad wala print nh hota string automaticALly terminate ho jati hai 

    //cin >> str; 
    //cout << "output -" << str << endl; 
    // to get multiline input we can use getline function

    cin.getline(str,100, '#'); //it will take input until it encounters # or 100 characters whichever comes first
    cout << "output -" << str << endl; 

    /*
    let input be - hello my name is sumanya # panchal
    then output will only be hello my name is sumanya mtlb delimiter sign ke baad ka
    kuch bhi output me nahi aayga
    */

    char st[12] = "apnacollege"; // now to cout every character in this arr we use a for each loop
    for(char ch : st)
    {
        cout << ch << " " ; //it will print every character in the array including the null character at the end
    }

    //now to calculate the length of any char array we can use strlen or for loop
    int len = 0;
    for(int i =0 ; i < st[i] != '\0'; i++){ //that is jb tk \0 nahi aata tb tk len ++ krte rhi
        len++;
    }
    cout << "length of string is: " << len << endl;
    return 0;
}