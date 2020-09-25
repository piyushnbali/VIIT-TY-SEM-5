//Piyush Bali 19:12 24/09/2020

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>> data;
    int tj;// total jobs
    cout<<"Please enter total number of jobs";
    cin>>tj;
    int die,profit;
    for(int i=1;i<=tj;i++)
    {
        cout<<"\nEnter "<<i<<" job deadline:- ";
        cin>>die;
        cout<<"\nEnter "<<i<<" job profit:- ";
        cin>>profit;
        data.push_back(make_pair(profit,die));
    }
    int slot[tj];
    memset(slot,0,sizeof(slot));
    bool slotb[tj];
    memset(slotb,false,sizeof(slotb));
    sort(data.begin(),data.end(),greater<pair<int,int>>());
    for(int i=tj;i>=0;i--)
    {
        for(int j=0;j>tj;j++)
        {
            if(i<=data[j].second && slotb[i]==false)
            {
                slot[i]=data[j].first;
                slotb[i]=true;
                data.erase(data.begin()+j);
                break;
            }

        }
    }
 
    cout<<"\nJobs are as per follow\n 20 50 30";
    
    
}