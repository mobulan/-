const int MAX = 9999; 					//定义一个无穷大
void BFSMinDistance(Graph G,int u){
//建立一个d[u]数组，用来储存从u到各个节点的最短路径
	for(int i=0; i<G.vexnum; i++)
		d[i] = MAX;						//初始化路径长度
	visited[u] = true;					//标记起始顶点已访问
	d[u] = 0;							//自身的路径长度为0
	EnQueue(Q,u);						//当前顶点入队
	while(!isEmpty(Q)){					//队列非空则继续循环
		DeQueue(Q,u);					//当前队头元素出队
		for(w=FirstNeighbor(G,u); w>=0; w=NextNeighbor(G,u,w))
			if(!visited[w]){			//如果当前节点没被访问过
				visited[w] = true;		//标记为访问
				d[w] = d[u]+1;			//路径长度加一
				EnQueue(Q,w);			//将该节点入队
			}
	}					
	
}