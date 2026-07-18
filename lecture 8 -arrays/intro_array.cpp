#include<iostream>
using namespace std;

int main(){
    int marks[5] = {12,91,98,65,67};
    cout << marks[3] << endl; //data accessing in array
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    
    int n;
    cout << "enter size of array \n" << endl;
    cin >> n;
    double price[n];
    cout << "enter price of n elements:" << endl;
     
    for (int i = 0; i < n; i++)
    {
       
        cin >> price[i];
       
    }

    for (int i = 0; i < n; i++)
    {
       
        cout << price[i] << " ";
       
    }
    
}