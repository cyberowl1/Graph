DFs implementation on graph implemented using adjacency list.
  ------------------------------------------------------
  
  
  #include <bits/stdc++.h>
using namespace std;

vector<int> g[8];
bool visited[8];
vector<vector<int>> cc;
vector<int> curent_vec;
void dfs(int vertex)
{
    curent_vec.push_back(vertex);
    cout<<vertex;
     visited[vertex]=true;
    for(int child:g[vertex])
    {
        cout<<child<<endl;
        if(visited[child]){
            continue;
        }
        dfs(child);
    }
}


int main()
{
// 1->2->3->5->7
    // ->4  //->1
g[1].push_back(2);
g[2].push_back(3);
g[2].push_back(4);
g[3].push_back(1);
g[3].push_back(5);
g[5].push_back(7);
int count=0;
for(int i=1;i<6;i++)
{
    curent_vec.clear();
    if(visited[i])
    {
        continue;
    }
    dfs(i);
    cc.push_back(curent_vec);

}

for(auto u:cc)
{

    for(int vertex: u)
    {
        cout<<vertex;
    }
    cout<<endl;

}


// cout<<"here"<<count<<endl;
}
