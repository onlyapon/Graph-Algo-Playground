#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter the number of vertices:";
	cin>>n;
	cout<<"Enter the number of edges:";
	cin>>m;
	vector<vector<int>> adj(n);
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

	vector<bool> visited(n,false);
	vector<int> p(n);
	vector<int> path;
	queue<int> q;
	q.push(sr);
	visited[sr]=true;
	p[sr]=-1;


	while(!q.empty()){
		int curr=q.front();
		q.pop();
		
		for(int a:adj[curr]){
			if (!visited[a])
			{
				q.push(a);
				visited[a]=true;
				p[a]=curr;
			}
		}
	}

	int des;
	cout<<"Enter destination:";
	cin>>des;

	for(int v=des;v!=-1;v=p[v]){
		path.push_back(v);
	}
	reverse(path.begin(),path.end());
	cout<<"Shrotest path:";
	for(int a:path){
		cout<<a<<" ";
	}
}