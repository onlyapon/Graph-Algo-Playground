#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter the number of vertices:";
	cin>>n;
	cout<<"Enter the number of edges:";
	cin>>m;
	vector<vector<int>> adj(n);
	cout<<"Enter edges in format(u v)";
	for (int i = 0; i < m; ++i)
	{
		int x,y;
		
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}

	int sr;
	cout<<"Enter the source node";
	cin>>sr;

	vector<bool> visited(n,false);
	queue<int> q;
	q.push(sr);
	visited[sr]=true;


	while(!q.empty()){
		int curr=q.front();
		q.pop();
		
		for(int a:adj[curr]){
			if (!visited[a])
			{
				q.push(a);
				visited[a]=true;
			}
		}
	}
}