#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    int a=10;
    int b=11;
    v.push_back(a);
    v.push_back(b); 

    cout<<v[0];

    return 0;
}