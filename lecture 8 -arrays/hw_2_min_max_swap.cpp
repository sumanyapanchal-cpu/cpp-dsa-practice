#include<iostream>
#include<climits>
using namespace std;

// WAF to swap the minimum and maximum element of an array

void swapArray(int arr[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallest_index = 0;
    int largest_index = size-1;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }

        if(arr[i] > largest)
        {
            largest = arr[i];
            largest_index = i;
        }
    }

    // Swap the actual array elements and not give a return value but simply just swap them
    swap(arr[smallest_index], arr[largest_index]);
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    swapArray(arr, 5);

    cout << "After swapping: ";

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}