#include<iostream>
using namespace std;

int main(){


cout << "sumanya panchal" << endl; //endl is "end of line" just like \n in c
cout << "sumanya panchal" << "\n"; //same output as endl
cout << "sumanya panchal \n"; //same output as endl and << "\n";
cout << "sumanya panchal \n hello world" << endl; //isme \n k baad ka space between hellow and \n bhi print hoga and then last me line end krne k liye endl ya \n sath m kuch bh use kro
cout << "sumanya panchal \n hello world \n";

//now if i want multiple statements in one line:
cout << "apna college " << "sumanya panchal" << endl; //ye sab ek line m aayga since bich m \n ya endl nahi aaya

//now to print my 1st and last name using one cout but in different lines-
cout << "sumanya \n" << "panchal \n";
return 0;
}

