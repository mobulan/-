bool visited[MaxVertexNum];				//建立标记数组
void BFSTraverse(Graph G){				//广度优先遍历函数
	for(int i=0; i<G.vexnum; i++)		//初始化标记数组
		visited[i] = false;				//全部置为未访问
	for(int i=0; i<G.vexnum; i++)		//依次遍历所有节点
	{
		if(visited[i] == 0)				//如果该节点未被访问过
			DFS(G,i);					//则对该节点调用一次DFS
	}
}

void DFS(Graph G,int v){				//从v出发，深度优先遍历G
	visit(v);							//访问v
	visited[v] = true;					//标记为已访问
	for(w=FirstNeighbor(G,v);w>=0;w=NextNeighbor(G,v,w))
										//循环访问所有与v相连的节点
		if(!visited[v]){				//如果该节点还没访问过
			DFS(G,v);					//对它递归调用DFS
		}
}
