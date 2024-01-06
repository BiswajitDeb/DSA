#include<iostream>
using namespace std;

int sumof_array(int array[],int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return array[0];

    int remaining = sumof_array(array+1,n-1);
    int sum=array[0]+remaining;
    return sum;



}


int main()
{
    int arr[6]={1,2,35,9,7,21};
    int sum = sumof_array(arr,6);
    cout<<sum;
}