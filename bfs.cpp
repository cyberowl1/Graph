BFs ----
  ------------

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque <int> q;
   int a[7][7]={
    // 0 1 2 3 4 5 6
      {0,1,1,1,0,0,0},
      {1,0,1,0,0,0,0},
      {1,0,1,3,0,0,0},
      {1,0,1,0,1,0,0},
      {0,0,1,1,0,1,1},
      {0,0,0,0,4,0,0},
      {0,0,0,0,1,0,0}
 };
 int visited[7]={0,0,0,0,0,0,0};

//  Breadth-First Implementation:-
 int node;
 int i=1;
 cout<<i<<" ";
 q.push_back(i);
 visited[i]=1;

 while(!q.empty())
 {
     int node=q.front();
    q.pop_front();

     for(int j=0;j<7;j++)
     {
         if(a[node][j]==1 && visited[j]==0)
         {
             cout<<j<<" ";
             visited[j]=1;
             q.push_back(j);
         }
     }
 }


}
