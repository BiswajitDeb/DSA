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
    return arr;
}

//Megre sort
vector<int> Merge(vector<int> arr,int start, int end)
{
    int mid=(start+end)/2;
    int len1=mid-start+1;
    int len2=end-mid;

    vector<int> first(len1);
    vector<int> second(len2);

    //copy values
    int main_array_index=start;
    for(int i=0;i<len1;i++)
        first[i]=arr[main_array_index++];

    for(int i=0;i<len2;i++)
        second[i]=arr[main_array_index++];

    //merge 2 sorted arrays
    int index1=0;int index2=0;
    main_array_index=start;

    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
            arr[main_array_index++]=first[index1++];
        else
            arr[main_array_index++]=second[index2++];
    }

    while(index1<len1)
    {
        arr[main_array_index++]=first[index1++];
    }
    while(index2<len2)
    {
        arr[main_array_index++]=second[index2++];
    }

    return arr;
}
vector<int> Merge_sort(vector<int> arr,int start,int end)
{
    //Base case
    if(start>=end)
        return;
    int mid = (start+end)/2;
    //left side sorting
    Merge_sort(arr,start,mid);

    //Right side sorting
    Merge_sort(arr,mid+1,end);

    return arr;
}
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

    cout<<"\Merge sort : ";
    print(Merge_sort(arr,0,arr.size()-1));

    return 0;
}