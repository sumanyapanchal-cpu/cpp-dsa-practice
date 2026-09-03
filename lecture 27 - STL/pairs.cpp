#include <iostream>
#include <vector>
using namespace std;

int main()
{
    pair<int, string> p = {1, "sumanya"};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> nested_pair = {1, {2, 3}};

    cout << nested_pair.first << " ";
    cout << nested_pair.second.first << " "; // it is done so bcoz seocnd value toh ek pair hai isliye uss pair me se bhi 1st ya 2nd value chahiye wo sb btane k liye
    cout << nested_pair.second.second << endl;

    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i].first << " " << vec[i].second << endl; // or use a for each loop
    }

    for (auto p : vec) // is auto p ki jgh pair<int, int> p bhi likh skte h
    {
        cout << p.first << " " << p.second << endl;
    }

    vec.push_back({4, 5}); // or vec.push_back(make_pair(4, 5));
    vec.emplace_back(5,6); // emplace_back is more efficient than push_back as it constructs the pair in place by itslef and u dont need to declare the pair in curly brkts seperately
    return 0;
}