#include<iostream>
#include<vector>
using namespace std;



//Bubble sort
//Complexity : O(n^2)
vector<int> Bubble_sort(vector<int> arr)
{   bool swapped = false;
    for(int i=0;i<arr.size()-1;i++)
    {
        for(int j=0;j<arr.size()-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        //optimized
        if(swapped==false)
            break;

    }

    return arr;
}


//Selection sort

//Insertion sort

//Megre sort

//Heap sort

//Quick sort

void print(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
}


int main()
{
    vector<int> arr{12,15,62,14,56,33,9,6,5};
    cout<<"Given vector/array : ";
    print(arr);
    cout<<endl;


    cout<<"Bubble sort : ";
    print(Bubble_sort(arr));


    return 0;
}