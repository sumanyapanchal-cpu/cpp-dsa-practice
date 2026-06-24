#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &vec, int size)
{
    /*
    logic-
     jb array me kra tha toh array in functions are declared as pointers bcoz when
    u write the name of the arr it automatically indicates to index 0 and hence arrays in functions
    decays down to pointers
    but vectors me this does not work
    isliye humko usko & k sath declare krna pdta hai taki actual changes ho ske in function*/
    int start = 0;
    int end = (size - 1);

    while (start <= end)
    {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}
int main()
{

    vector<int> vec = {1, 2, 3, 4};
    int size = vec.size();

    reverseVector(vec, size);

    for (int i = 0; i < size; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}