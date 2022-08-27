DFS implementation using matrix.
  
  ----------------------------
  #include <iostream>

using namespace std;
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

 void DFS(int i)
 {
     int j;
     cout<<i<<" ";
     visited[i]=1;
     for(int j=0;j<7;j++)
     {
         if(a[i][j]==1 && !visited[j])
         {
             DFS(j);
         }
     }
 }
int main()
{
   DFS(0);

}
