#include<iostream>
#include<climits>
using namespace std;

// WAF to swap the minimum and maximum element of an array

void swapArray(int arr[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallest_index = 0;
    int largest_index = size-1; //is size-1 ko 0 bhi likh skte ho since humko bs initiate krna hai to avoid garbage values

    for(int i = 0; i < size; i++)
    {
        if(arr[i] < smallest) // to find the smallest element and its index
        {
            smallest = arr[i];
            smallest_index = i;
        }

        if(arr[i] > largest) // to find the largest element and its index
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

    for(int i = 0; i < 5; i++) //ab since array ka exception hota hai toh wo change hogya and wo hi array humne print krdiya
    //exception in call by reference without *
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}