#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

    int lengthOfLongestSubstring(string s) 
    {
        int max = 0;
        vector<char> dp;

        for(int i=0;i<s.size();i++)
        {
            if ( std::find(dp.begin(), dp.end(), s[i]) != dp.end())
                {
                    dp.clear();
                    dp.push_back(s[i]);
                }
            else
                dp.push_back(s[i]);

            if(dp.size()>max)
                max=dp.size();

        }
    return max;
    }

int main()
{
    string s=("abcabcbb");
    cout<<lengthOfLongestSubstring(s);


};
