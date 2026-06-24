#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec;

    cout << "initial size =" << vec.size() << endl; // gives 0

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "size after push back=" << vec.size() << endl; // gives 3 and jis order me push back kroge usi order me print hoge
    vec.pop_back();  // isme value btane ki zrurat nh last elemnt udd jyga and deleted 45

    cout << "size after pop back=" << vec.size() << endl;
    for (int value : vec)
    { // using value instead of i (most common)
        cout << value << endl;
    }

    cout << vec.front() << endl; //prints 25
    cout << vec.back() << endl; //prints 35 since 45 is pop_back hence deleted

    cout << vec.at(0) << endl; //print 25
    return 0;
}