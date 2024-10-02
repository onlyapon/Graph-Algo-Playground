#include <bits/stdc++.h>
using namespace std;



void dfs(int x,vector<vector<int>> &adj,vector<bool> &visited){
    cout<<x<<" ";
	visited[x]=true;
	for (int a:adj[x])
	{
		if (!visited[a])
		{
			dfs(a,adj,visited);
		}
	}
}

int main(){
	int n,m;
	cout<<"Enter the number of vertices:";
	cin>>n;
	cout<<"Enter the number of edges:";
	cin>>m;
	

	vector<vector<int>> adj(n);
	vector<bool> visited(n,false);
	cout<<"Enter edges in format(u v):";
	
	for (int i = 0; i < m; ++i)
	{
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	int sr;
	cout<<"Enter the source node:";
	cin>>sr;
    dfs(sr,adj,visited);

}