#include <iostream>
using namespace std;

int printHello()
{
    cout << "hello\n";
    return 3;
}

int main()
{
    int value = printHello(); //function call hogya isme and hello print hogya nad value k ander 3 store hogya
    // here the value variable is storing 3
    
    //or-
    cout << printHello() << endl; // this line says ki print whatever function is returning and print it, so it will print hello and 3

    cout << "the return value of function is: " << value << endl; //basically isne value return 3 thi
    //to wo 3 ko ek integer me jiska name hai value usme store krliya
    return 0;
}