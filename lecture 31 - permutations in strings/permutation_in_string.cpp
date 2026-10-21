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

bool checkInclusion(string s2, string s1) //s2 = ab, s1= eidbaooo
{
    int freq[26] = {0};
    //to check the freq of s2 string (ab)
    for(int i =0 ; i< s2.length() ; i++)
    {
        freq[s2[i] - 'a']++;
    }
    int winSize = s2.length();
    for(int i =0 ; i<s1.length(); i++)
    {
        int winIdx = 0; //init by zero Characters counted in the current window Starts at zero and increases until we've counted winSize characters.

        int idx = i; //ye starting index hai that tells ki kaha se next window begin hoga
        int windFreq[26] = {0}; //window index for comparision
        while(winIdx < winSize && idx < s1.length())
        {
            windFreq[s1[idx] - 'a']++; //here s1[idx] is normal s1 ka index
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