void FindPath(AGraph *G,int i,int j,int path[],int dist){
	dist++;
	path[dist] = i;
	visited[i] = true;
	if(i == j)
		print(path[]);
	for(ArcNode p=G->adjlist[i].firstarc;p;p=p->nextarc)
		if(visited[p->adjvex] == false)
			FindPath(G,p->adjvex,j,path,dist);
	visited[i] = false;
}