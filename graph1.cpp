Simple Graph implementation using adjacency list:

-----------------------------------------------------------------



#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> adj[5];

    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);

    for(int i=1;i<5;i++)
    {
        cout<<i;
         for(auto u:adj[i])
         {
             cout<<"-->"<<u;
         }
         cout<<endl;
    }




}
