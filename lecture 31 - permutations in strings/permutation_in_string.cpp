#include<iostream>
#include<string>
using namespace std;

bool isFreqSame(int freq1[] , int freq2[])
{
    for(int i = 0 ; i<26 ; i++)
    {
        if(freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{
    int freq[26] = {0};
    //to check the freq of s1 string
    for(int i =0 ; i< s1.length() ; i++)
    {
        freq[s1[i] - 'a']++;
    }
    int winSize = s1.length();
    for(int i =0 ; i<s2.length(); i++)
    {
        int winIdx = 0; //init by zero
        int idx = i; //ye normal index hai 
        int windFreq[26] = {0}; //window index for comparision
        while(winIdx < winSize && idx < s2.length())
        {
            windFreq[s2[idx] - 'a']++; //here s2[idx] is normal s2 ka index
            winIdx++;
            idx++;
        }
        if(isFreqSame(freq,windFreq))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s1 = "eidbaooo";
    string s2 = "ab";
    cout << checkInclusion(s2,s1) << endl;
    return 0;
}