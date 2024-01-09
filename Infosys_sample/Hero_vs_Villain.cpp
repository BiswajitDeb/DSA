#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int victory(vector<int> Scores)
{
    int remove=0;
    if(Scores[0]>Scores[1])
        remove=0;
    else if (Scores[0]<Scores[1])
        remove=Scores[1]-Scores[0];
    return remove;
}

int win_counter(int V,vector<int> V_health ,int H)
{
    vector<int> Scores;
    int H_win=0;
    int V_win=0;
    for(int i=0;i<V;i++)
    {
        if(V_health[i]<H)
            H_win++;
        else if(V_health[i]>H)
            V_win++;
        else
            continue;
    }

    Scores.push_back(H_win);
    Scores.push_back(V_win);

    victory(Scores);
}


int main()
{
    //No of Heroes
    int H;
    cin>>H;
    //No of Villains
    int V;
    cin>>V;

    //Health of Heroes
    int H_health;
    cin>>H_health;

    //Health of Villains
    vector<int> V_health(V);
    for(int i=0;i<V;i++)
    {
        cin>>V_health[i];
    }

    int remove = win_counter(V,V_health,H);
    cout<<"The minimum number of villains to be removed : "<<remove;
    //int max = *max_element(V_health.begin(), V_health.end());
    return 0;
}