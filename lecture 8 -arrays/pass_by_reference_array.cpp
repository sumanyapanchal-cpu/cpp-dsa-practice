#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{
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
        cout << arr[i] << " "; //it prints the updates values after the function and wo value change nhi hoti, toh ab jb jb array call kroge yehi values aaygi updated wali
    }
    cout << endl;

    /* LOGIC-
    ye hua bcoz arrays me jo int arr[] ye function me declare kra hai compiler isko almost 
    int * arr[i] manta hai
    
    */
    

    return 0;
}