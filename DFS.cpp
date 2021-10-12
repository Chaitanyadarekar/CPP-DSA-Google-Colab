#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

vector<int> dfs(vector<int> &ans,int src, vector<int> &vis, vector<int> g[]){
    
    
    ans.push_back(src);
    vis[src]=1;

    for(auto x: g[src])
    {
        if(!vis[x])
        {
            dfs(ans,x,vis,g);
        }
    }
    return ans;
}


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
 
vector<int> visited (v,0);
vector<int> ans;
vector<int> x=dfs( ans,0,visited, g);
 
 for(auto x: ans)
 {
     cout<<x<<" ";
 }
 

return 0;

    
 
}