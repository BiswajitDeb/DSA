#include<iostream>
#include<string>
#include<vector>
// #include <bits/stdc++.h> 
#include<algorithm>
using namespace std;
int main()
{
    string s1="ABCABC";
    string s2="ABC";
    vector<int> candies{2,3,5,1,3};
    int max= *max_element(candies.begin(),candies.end());
    cout<<max;
    return 0;
}