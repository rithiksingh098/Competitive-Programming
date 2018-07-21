#include <iostream>
#include <vector>
using namespace std;
#define ll long long int
const int MAX = 1e5+5;//this is how you define max unless it will be ll as you have used e in it
vector<int> G[MAX];
bool vis[MAX];
int n,m,a,b,count=0;//n nodes,m edges,a ,b are the nodes of edges
void dfs(int s)//s is the node to start
{
	vis[s]=true;
	for(int u: G[s])
	{
		if(vis[u]) continue;
		dfs(u);
	}
}
void init()
{
	for(int i=0;i<n;i++)
	{
		G[i].clear();//clear the vector of i the node
		vis[i]=false;
	}
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		init();
		for(int i=0;i<m;i++)
		{
			cin>>a>>b;
			G[a].push_back(b);
			G[b].push_back(a);
		}
		for(int i=0;i<n;i++)
		{
			if(vis[i]) continue;
			dfs(i);
			count++;
			
		}
		cout<<count<<endl;
	}
	return 0;
}
