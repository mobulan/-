bool visited[MaxVertexNum];				//建立标记数组
void BFSTraverse(Graph G){				//广度优先遍历函数
	for(int i=0; i<G.vexnum; i++)		//初始化标记数组
		visited[i] = false;				//全部置为未访问
	IntiQueue(Q);						//建立辅助队列
	for(int i=0; i<G.vexnum; i++)		//依次遍历所有节点
	{
		if(visited[i] == 0)				//如果该节点未被访问过
			BFS(G,i);					//则对该节点调用一次BFS
	}
}

void BFS(Graph G,int v){				//从某个节点出发，广度优先遍历
	visit(v);							//访问该节点
	visited[v] = true;					//标记数组设置为已访问
	Enqueue(Q,v);						//该节点入队
	while(!isEmpty(Q)){					//队列不为空则继续循环
		DeQueue(Q,v);					//当前节点出队
		for(w=FirstNeighbor(G,v);w>=0;w=NextNeighbor(G,v,w))
										//遍历所有以该节点相连的节点
			if(visited[w] == 0){		//如果没被访问过
				visit(w);				//访问该相邻节点
				visited[w]=true;		//标记数组设置已访问
				Enqueue(Q,w);			//将相邻节点的相邻节点入队
			}
	}
}