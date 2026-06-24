#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{
    cout << "in function" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i]; // double krra hai values ko
    }
}
int main()
{
    int arr[3] = {1, 2, 3};

    changeArr(arr, 3);
    cout << "after change \n";

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    /* LOGIC-
    ye hua bcoz arrays me jo int arr[] ye function me declare kra hai compiler isko almost 
    int * arr[i] manta hai
    
    */
    

    return 0;
}