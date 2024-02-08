/*https://leetcode.com/problems/longest-palindromic-substring/description/*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;



string longestPalindrome(string s) {
    int n=s.size();
    string pal="";
    if(n%2==0)
    {
        for (int i=0, j=n-1 ; i < n/2 && j > n/2 ; i++, j--)
        {
            if(s[i]==s[j])
                pal+=s[i];
        }
        pal+=s[(n/2)+1];
    }
    else{

    }
    
        return pal;
    }

int main()
{
    string s = "babadbaswwwwwt5rrrrrrrrrrrtrrrr66655t ';";
    cout<<longestPalindrome(s);
    //cout<<5/2;

    return 0;
}