#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void twice(int &Energy_E, int energy, int &counter)
{
    for(int i = 0; i < 2; i++)
    {
        if(Energy_E >= energy){
            Energy_E -= energy;
            counter++;
            // cout << "Current Energy: " << Energy_E << endl;
            // cout << "Current counter: " << counter << endl;
        }
        else
            break;
    }
}

int main()
{
    int Energy_E;
    cin >> Energy_E;

    int N;
    cin >> N;

    vector<int> energy_per_exercise(N);
    for(int i = 0; i < N; i++){
        cout << "Energy : ";
        cin >> energy_per_exercise[i];
    }

    sort(energy_per_exercise.begin(), energy_per_exercise.end(), greater<int>());

    int counter = 0;
    int index = 0;

    while (Energy_E > 0 && index < N)
    {
        twice(Energy_E, energy_per_exercise[index], counter);
        index++;
    }

    cout << endl;
    if (Energy_E <= 0)
    {
        cout << "No of exercises: " << counter << endl;
        cout << "Energy left: " << Energy_E;
    }
    else
        cout << -1;

    return 0;
}
