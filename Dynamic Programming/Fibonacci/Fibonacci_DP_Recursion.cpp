#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int n,vector<int> &dp)
{
    // cout<<"Dp withing method : ";
    // for(int i=0;i<n;i++)
    // {
    //     cout<<dp[n];
    // }
    if(n==0||n==1)
    {
        return n;
    }
    if(dp[n]!=-1)
        return dp[n];

    dp[n]=fibonacci(n-1,dp)+fibonacci(n-2,dp);
    return dp[n];
}

int main()
{
    int n;
    cout<<"Enter term : "<<endl;
    cin>>n;

    vector<int> dp(n+1);
    for(int i=0;i<=n;i++)
    {
        dp[i]=-1;
    }

    // cout<<"Initial Dp array : ";
    // for(int i=0;i<n;i++)
    // {
    //     cout<<dp[i];
    // }

    cout<<fibonacci(n,dp)<<endl;

    return 0;

}