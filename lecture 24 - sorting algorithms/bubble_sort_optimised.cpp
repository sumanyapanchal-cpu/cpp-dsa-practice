#include <iostream>
#include <algorithm> //for sort function
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) //since this only runs when agar swapping hogi toh
            {
                isSwap = true; //agar iss loop mme swap hua toh true krdiya pr agar nh hua toh swap = false hi rahi and agar false rhi it indicates ki array already sorted hi tha
                swap(arr[j], arr[j + 1]);
            }
        }
        if (isSwap == false)
        {
            return; // agar kuch swap hi nahi hua toh return krlo yahi se iske bad execute nh kro
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
