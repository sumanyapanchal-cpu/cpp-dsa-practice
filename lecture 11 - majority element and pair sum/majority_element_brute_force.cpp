#include <iostream>
#include <vector>
using namespace std;

int majority_element(vector<int> vec)
{
    int n = vec.size();

    
    for (int value : vec) //for each loop used taki index ki bajaye direct value access kr ske
    {
        int frequency = 0;
        for (int element : vec)
        {
            if (element == value)
            {
                frequency++;
            }
        }
        if (frequency > (n / 2))
        {
            return value;
        }
    }
    return -1; //agar majority na mile to
}
int main()
{
    vector<int> vec = {1, 2, 2, 1, 1};
    cout << majority_element(vec) << endl;
    return 0;
}