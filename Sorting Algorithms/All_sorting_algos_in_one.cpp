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
//Complexity : O(n^2) & O(1)
//Consider the first element as minimum and compare it to the rest and find the minimum of them and swap them
vector<int> Selection_sort(vector<int> arr)
{
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
    swap(arr[min],arr[i]);
    }
    return arr;
}

//Insertion sort
//Complexity : O(n^2)
//Select an element and compare it to it's previous all elements and place it in between the indeces where the previos one is smaller and the next one is larger than the current element and shift rest of them to the right side.
vector<int> Insertion_sort(vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                //shift
                arr[j+1]=arr[j];
            }
            else 
                break;
        }
        arr[j+1]=temp;
    }
}

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


    cout<<"\nBubble sort : ";
    print(Bubble_sort(arr));

    cout<<"\nSelection sort : ";
    print(Selection_sort(arr));

    cout<<"\Insertion sort : ";
    print(Insertion_sort(arr));

    return 0;
}