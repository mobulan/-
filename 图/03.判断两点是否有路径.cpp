bool ExistPathDFS(AGraph G,int i,int j){
	bool visited[G.vexnum+1]={0};
	if(i==j)
		return true;
	else{
		visited[i] = true;
		for(int p=FirstNeighbour(G,i);p!=-1;p=NextNeighbour(G,i,p))
			if(visited[p]!=true&&ExistPathDFS(G,p,j))
				return true;
	}
	return false;
}