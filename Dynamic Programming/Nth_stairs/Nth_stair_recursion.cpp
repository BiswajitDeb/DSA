#include<iostream>
#include<vector>
using namespace std;

int Possible_ways(int n,int i)
{
    //base case
    if(i==n)
        return 1;
    if(i>n)
        return 0;
    return Possible_ways(n,i+1)+Possible_ways(n,i+2);
}

int main()
{
    int n;
    cout<<"Enter number of stairs : "<<endl;
    cin>>n;

    cout<<Possible_ways(n,0);

    return 0;
}