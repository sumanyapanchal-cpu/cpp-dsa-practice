#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m.emplace("tv",100);
    m.emplace("fridge",100);
    m.emplace("washing machine",100);
    m.emplace("phone",100);
    // the output will be in a random order
    for (auto p : m)
    {

        cout << p.first << " " << p.second << endl;
    }

    return 0;
}