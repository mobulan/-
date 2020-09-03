bool IsTree(Graph *G){
	bool visited[G.vexnum]={false};
	int Vnum=Enum=0;
	DFS(G,1,Vnum,Enum,visited);	//从顶点1开始深度优先遍历
	if(Vnum==G.vexnum && Enum=G.vexnum-1)
		return true;
	else
		return false
}
void DFS(Graph *G,int v,int &Vnum,int &Enum,bool visited[]){
	visited[v]=true;
	Vnum++;
	for(int w = FirstNeighbour(G,v); w!=-1 ;w=NextNeighbour(G,w,v),Enum++)
		if(visited[w]!=false)
			DFS(G,w,Vnum,Enum,visited);
}