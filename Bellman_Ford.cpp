#include <bits/stdc++.h>
using namespace std;

struct edge
{
	int a,b,w;
};


int main(){
	int n,m;
	cout<<"Enter the number of node and edges:";
	cin>>n>>m;
	vector<edge> a(m);
	for (int i = 0; i < m; ++i)
	{
		
		cin>>a[i].a>>a[i].b>>a[i].w;
		
		
	}
	
	vector<int> dis(n+1,INT_MAX);
	int src;
	cout<<"Enter source node:";
	cin>>src;
	dis[src]=0;

	for (int i = 0; i < n-1; ++i)
	{
		for (auto e:a)
		{
			dis[e.b]=min(dis[e.b],dis[e.a]+e.w);
			
		}
	}
	cout<<"Enter the destination node:";
	int x;
	cin>>x;
	cout<<dis[x];
}