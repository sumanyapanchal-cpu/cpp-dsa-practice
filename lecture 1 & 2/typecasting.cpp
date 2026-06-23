#include <iostream>
using namespace std;

int main()
{
    // typecasting using ascii value
    // this is an implicit/ conversion typecasting since char- 1 byte
    // 1 byte data type can be easily stores in int that is a 4 byte data type isliye small - large isliye implicit

    char grade = 'A';
    int value = grade;

    cout << value << endl; // this prints the ascii valye of A

    //now is typecasting/ explicit typecasting since int- 4 byte data type

    double price = 100.99;
    
    float newprice = int(price); //double is 8 bytes and float is 4 bytes isliye explicit
    cout << newprice << endl;


    return 0;
}