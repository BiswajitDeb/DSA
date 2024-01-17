#include<iostream>
#include<vector>
using namespace std;

int Possible_ways(int n,vector<int> &dp)
{
    int sum=0;
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<n;i++)
    {
        if(dp[i]==-1)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        else if(dp[i]==n)
            return 0;
        sum+=dp[i];
    }
    return sum;
}


int main()
{
    int n;
    cout<<"Enter number of stairs : "<<endl;
    cin>>n;
    vector<int> dp(n+1,-1);

    cout<<Possible_ways(n,dp);

}