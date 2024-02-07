#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;

int solve_BOTTOM_UP(string s)
{
    int n=s.length();
    if(n%2==0)//Even
    {
        for (int i = 0, j = 0; i < 10 && j < 10; i++, j++)
    }
    else
    {

    }
    vector<vector<int>> dp2(s1.length()+1,vector<int>(s2.length()+1,0));


    // cout<<"THis is bottom up";
    //Tabulation
    for(int i=s1.length()-1;i>=0;i--)
    {
        for(int j=s2.length()-1;j>=0;j--)
        {
            int ans = 0;
            if (s1[i] == s2[j])
            {
                ans = 1 + dp2[i+1][j+1];
            }
            else
            {
                ans = max(dp2[i][j+1],dp2[i+1][j]);
            }
            dp2[i][j] = ans;
            
        }
    }
    return dp2[0][0];
}

int main()
{
    string s="babad";

     //dp(rows.column,-1)
    cout<<"BOTTOM UP SOLUTION : "<<solve_BOTTOM_UP(s);

    return 0;
}