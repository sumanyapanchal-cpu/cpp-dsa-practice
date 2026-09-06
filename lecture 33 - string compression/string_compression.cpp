#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char> &chars)
{
    int idx = 0;
    int n = chars.size();
    for (int i = 0; i < n; i++)
    {
        char ch = chars[i];
        int count = 0;

        while(i<n && chars[i] ==ch)
        {
            count++;
            i++;
        }
        if(count ==1)
        {
            chars[idx++] = ch;
        }
        else
        {
            chars[idx++] = ch;
            string str = to_string(count);
            for(char digit : str)
            {
                chars[idx++] = digit;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx; // to return the size of new vector
    
}

int main()
{
    vector<char> vec = {'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(vec) << endl;
    return 0;
}