#include<bits/stdc++.h> 
using namespace std;
bool visited[5]; 
void dfs(vector<int> adj[], int V, int s) 
{ 
	if(s==0)
	{	
		
		for(int i = 0; i < V; i++) 
			visited[i] = false;
		visited[s]=true;

	}
	cout<<s<<" ";
	
	for(int v:adj[s]){
		if(visited[v]==false){
			   visited[v]=true;
		       dfs(adj,V,v);
		    }
		} 
	 
}
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{ 
	int V=5;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,1,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3);
	addEdge(adj,3,4);
	addEdge(adj,2,4);

	cout << "Following is DFS : "<< endl; 
	dfs(adj,V,0); 

	return 0; 
}