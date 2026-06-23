#include <iostream>
using namespace std;

int printHello()
{
    cout << "hello\n";
    return 3;
}

int main()
{
    int value = printHello();
    //or-
    cout << printHello() << endl;

    cout << "the return value of function is: " << value << endl; //basically isne value return 3 thi
    //to wo 3 ko ek integer me jiska name hai value usme store krliya
    return 0;
}