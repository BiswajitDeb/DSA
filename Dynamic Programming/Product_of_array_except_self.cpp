#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print_array(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}

vector<int> Product_of_Array(vector<int> arr)
{
    vector<int> result;
    int multiply=1;
    int zerocount=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
            zerocount+=1;
        else
            multiply*=arr[i];
    }
    //If 0 is present
    //find() complexity -> o(n)
    if(find(arr.begin(), arr.end(), 0) != arr.end())
    {
        for(int i=0;i<arr.size();i++)
            {   
                if(zerocount>1)
                    result.push_back(0);
                else
                {
                    if(arr[i]==0)
                        result.push_back(multiply);
                    else
                        result.push_back(0);
                }
            }
    } 
    //If 0 is not present in the array
    else
    {
        for(int i=0;i<arr.size();i++)
        {
            int temp=multiply;
            result.push_back(temp/arr[i]);
        }
    }
    return result;
}

int main()
{
    //vector<int> arr{-1,1,0,-3,3};
    //vector<int> arr{1,2,3,4};
    vector<int> arr{0,0,1};
    print_array(Product_of_Array(arr));
    return 0;
}

/*
        if(arr[i]==0)
            result.push_back(multiply);
        else
        {
            int temp=multiply;
            result.push_back(temp/arr[i]);
        }
*/