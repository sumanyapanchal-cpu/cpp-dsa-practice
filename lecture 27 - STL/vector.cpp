#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    /*vector<int>::reverse_iterator it;

    for(it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout<<*(it)<<" ";
    } */
    for (auto it = vec.rbegin(); it != vec.rend(); it++) //works the same for reverse iterator and frwd and backward noth loops
    {
        cout << *(it) << " ";
    }

    return 0;
}
