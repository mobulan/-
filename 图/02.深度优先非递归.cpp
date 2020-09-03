void DFSNoneReCursion(Graph *G,int v){
	InitStack(S);
	bool visited[G.vexnum]={0};
	Push(S,v);
	visited[v]=true;
	while(IsEmpty(S) != true){
		int k = Pop(S);
		visit[k];
		for(int w = FirstNeighbour(G,v); w!=-1 ;w=NextNeighbour(G,w,v))
			if(visited[k]!=true){
				Push(S,w);
				visited[w]=true;
			}
	}
}