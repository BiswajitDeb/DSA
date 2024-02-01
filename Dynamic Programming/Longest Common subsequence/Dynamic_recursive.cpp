//Complexity O(2^n)
//Method : 
#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;


int solve(string & s1, string& s2, int i,int j,vector<vector<int>> &dp)
{
    //base case
    if(i==s1.length())
        return 0;
    if(j==s2.length())
        return 0;

    int ans=0;
    if(s1[i]==s2[j])
    {
        ans+=1+solve(s1,s2,i+1,j+1);
    }
    else{
        ans=max(solve(s1,s2,i+1,j),solve(s1,s2,i,j+1));
    }
    return ans;
}



int main()
{
    string s1="ABCAB";
    string s2="AECB";
    vector<vector<int>> dp(s1.length(),vector<int>(s2.length(),-1)); //dp(rows.column,-1)

    cout<<solve(s1,s2,0,0,dp);

    return 0;
}