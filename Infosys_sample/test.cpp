#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int victory(vector<int> Scores)
{
    return max(Scores[0], Scores[1]);
}

int win_counter(int V, vector<int> V_health, int H)
{
    vector<int> Scores;
    int H_win = 0;
    int V_win = 0;
    for (int i = 0; i < V; i++)
    {
        if (V_health[i] < H)
            H_win++;
        else if (V_health[i] > H)
            V_win++;
        else
            continue;
    }

    Scores.push_back(H_win);
    Scores.push_back(V_win);

    return victory(Scores);
}

int main()
{
    // No of Villains
    int V;
    cin >> V;

    // No of Heroes
    int H;
    cin >> H;

    // Health of Villains
    vector<int> V_health(V);
    for (int i = 0; i < V; i++)
    {
        cin >> V_health[i];
    }

    // Health of Heroes
    int H_health;
    cin >> H_health;

    int remove = win_counter(V, V_health, H_health);
    cout << "The minimum number of villains to be removed : " << remove;

    return 0;
}
