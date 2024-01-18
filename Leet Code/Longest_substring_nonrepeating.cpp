/*#include<iostream>
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

    return 0;

};
*/



#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) 
{
    int max = 0;
    vector<char> dp;

    for (int i = 0; i < s.size(); i++)
    {
        // Check if the current character is already in the vector
        auto it = find(dp.begin(), dp.end(), s[i]);
        //cout<<"Value of it : "<<*it;
        if (it != dp.end())
        {
            // If the character is found, erase all elements before it (including it)
            dp.erase(dp.begin(), it + 1);
        }

        // Add the current character to the vector
        dp.push_back(s[i]);

        // Update the maximum length if needed
        if (dp.size() > max)
            max = dp.size();
    }

    return max;
}

int main()
{
    string s = "aab";
    cout << lengthOfLongestSubstring(s);

    return 0;
}

