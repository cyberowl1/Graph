Graph using edgelist, containg weightless edge
----------------------------------------------


#include <bits/stdc++.h>

using namespace std;

class Graph{
    public:
    vector<pair<int,int> > edges;

    void insertEdge(int a,int b){
        edges.push_back(make_pair(a,b));
    }

};

int main()
{
    Graph g1;
    g1.insertEdge(1,2);
    g1.insertEdge(2,3);
    g1.insertEdge(2,4);
    g1.insertEdge(3,4);
    g1.insertEdge(4,1);


}
