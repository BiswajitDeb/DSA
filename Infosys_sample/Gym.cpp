#include<iostream>
#include<algorithm>
using namespace std;

void twice(int Energy_E, int energy)
{
    for(int i=0;i<2;i++)
    {
        if(Energy_E>0)
            Energy_E - energy;
    }
}



int main()
{
    int Energy_E;
    cin>>Energy_E;

    int N;
    cin>>N;

    int energy_per_exercise[N];
    for(int i=0;i<N;i++){
        cout<<"Energy : ";
        cin>>energy_per_exercise[i];
    }

    sort(energy_per_exercise,energy_per_exercise+N,greater<int>());
    cout<<"After";

    int i=0;
    while(Energy_E>0)
    {
        twice(Energy_E,energy_per_exercise[i]);
        i++;
    }

    if(Energy_E>0)
        cout<< i;
    else
        cout<< -1;

    return 0;
}