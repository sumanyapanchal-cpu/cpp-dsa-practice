#include <iostream>
using namespace std;

void printUnique(int arr[], int size)
{
    for (int i = 0; i < size; i++) // supppose i = 2 {2nd index pr 3 value hai} toh this loop is saying to scan entire array
    {
        int count = 0; // inside loop bcoz it needs to be reset bcoz same array 5 baar scan hoga toh wo kuch bh deliver nh krega, and count ki value ++ hoti jyhi

        for (int j = 0; j < size; j++) // iss loop ka kaam hai 3 kitni baar aaya hai puri array m
        {
            if (arr[i] == arr[j])
            // dry run- j =0 toh testing 1==3 nahi chordo then j=1 toh 2 == 3 nahi chordo j=2 toh 3==3 yes count ++
            // count 1 hone ka mtlb hai ki wo element 2 baar aaya hai
            {
                count++; // agar same number mil gya toh count ++
            }
        }

        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 2, 1, 5};
    int size = 6;

    printUnique(arr, size);

    return 0;
}

/*
clean non comment version-


#include<iostream>
using namespace std;

void printUnique(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int count = 0;

        for(int j = 0; j < size; j++)
            if(arr[i] == arr[j])
            {
                count++; //agar same number mil gya toh count ++
            }
        }

        if(count == 1)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 2, 1, 5};
    int size = 6;

    printUnique(arr, size);

    return 0;
}

*/