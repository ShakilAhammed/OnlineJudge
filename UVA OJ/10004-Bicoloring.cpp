//Author : Shakil Ahammed

//Problem link - https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=945

#include<iostream>
#include<cstdio>
#include<vector>


using namespace std;

const int MAX = 205;

bool isBicolorable(vector<int> graph[MAX], bool visited[], int depthCache[], int start, int currentDepth) {
	
	visited[start] = true;
	depthCache[start] = currentDepth;
	
	for (int i = 0; i < graph[start].size(); i++)
	{
		if(visited[graph[start][i]]) {
			if((currentDepth - depthCache[graph[start][i]] + 1) % 2 != 0){
				return false;
			}
		}
		else{
			return isBicolorable(graph, visited, depthCache, graph[start][i], currentDepth + 1);
		}	
	}

	return true;
}

void init(vector<int>graph[MAX], bool visited[], int depth[]) {
	
	for (int i = 0; i < MAX; i++)
	{
		graph[i].clear();

		visited[i] = false;

		depth[i] = 0;
	}
	
}

int main() {

	while(true) {
		int nodes, edges, sn, dn;
		
		cin>>nodes;
		
		if(nodes == 0)break;

		cin>>edges;
		
		vector<int> graph[MAX];
		bool visited[MAX];
		int depthCache[MAX];

		init(graph, visited, depthCache);

		for (int i = 0; i < edges; i++)
		{
			cin>>sn>>dn;
			graph[sn].push_back(dn);
			graph[dn].push_back(sn);
		}

		cout<<(isBicolorable(graph, visited, depthCache,0, 0)?"BICOLORABLE." : "NOT BICOLORABLE.")<<endl; 
	}
	

	return 0;
}