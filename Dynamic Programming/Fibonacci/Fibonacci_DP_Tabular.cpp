#include<iostream>
#include<vector>
using namespace std;

int fibonacci(int n,vector<int> dp)
{
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];
}

int main()
{
    int n;
    cout<<"Enter term : ";
    cin>>n;

    vector<int> dp(n);
    cout<<fibonacci(n,dp);

    return 0;
}