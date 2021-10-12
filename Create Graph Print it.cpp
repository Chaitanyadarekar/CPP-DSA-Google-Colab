#include <bits/stdc++.h>
#include <vector>
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
 
for(int i =0;i<=v;i++)
{cout<<i<<"--->	";
 for(int j=0;j<g[i].size();j++)
    {
        cout<<g[i][j]<<" ";
    }
 cout<<endl;
}
return 0;

    
 
}