#include <iostream>
using namespace std;

int main()
{
    int age = 25;
    char grade = 'a';
    float pi = 3.14f;            // if 3.14f nahi likhte then compiler assumes ki humko ek double data type dena tha isliye f declare krte hai
    cout << "age" << endl;       // this prints age in the terminal bcoz it is in ""
    cout << age << endl;         // this prints the value of age in terminal bcoz not ""
    cout << sizeof(age) << endl; // this prints the size of age in bytes in terminal that is 4 since int is 4 bytes in c++
    cout << grade << endl;       // this prints the value of grade in terminal bcoz not ""
    cout << pi << endl;          // this prints the value of pi in terminal bcoz not ""
    return 0;
}