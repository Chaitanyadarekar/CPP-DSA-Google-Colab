
#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;
int main()
{   
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int v,e;
cin>>v>>e;

vector<int> g[v+1];
for (int i=0;i<e;i++)
{
    int x,y;
 cin>>x>>y;

 g[x].push_back(y);
 g[y].push_back(x);
}
 

vector<int> visited(v,0);
vector <int> pv;
visited[0]=1;
queue<int> q;
q.push(0);
 
 while(!q.empty())
 {
  int t;
  t=q.front();
  
  q.pop();
  pv.push_back(t);

  for(auto x:g[t])
  {
      if(!visited[x]){
          visited[x]=1;
          q.push(x);
      }
  }


 
 }
 

  for (auto i: pv)
   { 
       cout<<i<<endl;
   }
return 0;

    
 
}