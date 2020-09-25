//Piyush Bali 19:12 24/09/2020

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> data;
    int tj;// total jobs
    cout<<"\nPlease enter total number of jobs\n";
    cin>>tj;
    int die,profit;
    for(int i=1;i<=tj;i++)
    {
        cout<<"\nEnter "<<i<<" job deadline\n";
        cin>>die;
        cout<<"\nEnter "<<i<<" job profit \n";
        cin>>profit;
        data.push_back(make_pair(profit,die));
    }
    int slot[tj];
    bool slot[tj];
    sort(data.begin(),data.end(),greater<int>());
    for(int i=0;i<tj;i++)
    {
        
    }
}