//Complexity O(2^n)
//Method : Top Down DP
#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;


int solve_TOP_DOWN(string & s1, string& s2, int i,int j,vector<vector<int>> &dp)
{
    //base case
    if(i==s1.length())
        return 0;
    if(j==s2.length())
        return 0;

    if(dp[i][j]!=-1)
        return dp[i][j];

    int ans=0;
    if(s1[i]==s2[j])
    {
        ans+=1+solve_TOP_DOWN(s1,s2,i+1,j+1,dp);
    }
    else{
        ans=max(solve_TOP_DOWN(s1,s2,i+1,j,dp),solve_TOP_DOWN(s1,s2,i,j+1,dp));
    }
    dp[i][j]=ans;
    return ans;
}

int solve_BOTTOM_UP(string & s1, string& s2,vector<vector<int>> &dp2)
{
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
    string s1="ABCAB";
    string s2="AECB";
    vector<vector<int>> dp(s1.length(),vector<int>(s2.length(),-1)); //dp(rows.column,-1)
    vector<vector<int>> dp2(s1.length()+1,vector<int>(s2.length()+1,0)); //dp(rows.column,-1)

    cout<<"TOP DOWN SOLUTION : "<<solve_TOP_DOWN(s1,s2,0,0,dp);
    cout<<endl;
    cout<<"BOTTOM UP SOLUTION : "<<solve_BOTTOM_UP(s1,s2,dp2);

    return 0;
}