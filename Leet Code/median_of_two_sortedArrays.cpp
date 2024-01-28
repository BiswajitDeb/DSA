#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int> &num1, vector<int> &num2)
{
    int i = 0, j = 0;
    vector<int> sorted;
    while (i < num1.size() && j < num2.size())
    {
        if (num1[i] <= num2[j])
        {
            sorted.push_back(num1[i]);
            i += 1;
        }
        else
        {
            sorted.push_back(num2[j]);
            j += 1;
        }
    }

    while (i < num1.size())
    {
        sorted.push_back(num1[i]);
        i += 1;
    }
    while (j < num2.size())
    {
        sorted.push_back(num2[j]);
        j += 1;
    }

    double median;
    int k = sorted.size();

    // cout<<sorted[k/2]<<endl;
    // cout<<sorted[(k/2)-1];
    // median = double(sorted[k/2] + sorted[(k/2)-1])/2;
    // cout<<median;
    if (sorted.size() % 2 == 0)
    {    
        median = double(sorted[k/2] + sorted[(k/2)-1])/2;
        return median;
    }
    else
    {
        median = sorted[k / 2];
        return median;
    }
}

int main()
{
    vector<int> num1{1,2};
    vector<int> num2{3,4};
    // int i=0;
    // while(i<2)
    // {
    //     cout<<num1[i];
    //     i+=1;
    // }
    cout<<findMedianSortedArrays(num1,num2);
    return 0;
}