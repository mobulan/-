void Dijkatra(Graph G, int v){				//导入起始顶点
	int include[];							//记录是否包含进来的数组
	int path[];								//记录该顶点最后是由那个顶点到达的
	int dist[];								//记录各个顶点最短路径
	for(int i=0; i<G.vexnum; i++){			//加入初始顶点
		dist[i] = G.edge[v][i];				//初始化由初始顶点到其他各点的距离
		include[i] = 0;						//初始化包含数组，全部未包含
		if(G.edge[v][i] < Max)				//如果两点是联通的
			path[i] = v;					//则这些顶点标记为由初始顶点到达
		else
			path[i] = -1;					//否则就标记无法到达
	}
	include[v] = 1;							//初始顶点已经被包含进来了
	path[v] = -1;							//初始顶点不可能由其他任何顶点到达
	for(int i=0; i<G.vexnum; i++){			//对每个顶点都循环，依次加入所有顶点
		int MinDist = Max , MinVex;			//记录最短的边和其编号
		for(int j=0;j<G.vexnum;j++)			//挑出由初始顶点出发，到其他顶点最短的边
			if(include[j]==0 && dist[j]<MinDist){//在还没被包含的顶点里找最短的边
				MinDist = dist[j];
				MinVex = j;
			}
		inculde[MinVex] = 1;				//找到的最短边到达的顶点也被包含进来了
		for(int k=0; k<G.vexnum; k++)		//借助新加入的顶点，打筽其他顶点是否会有比现在更短的边
			if(include[k]==0 && dist[MinVex]+G.edge[MinVex][k]<dist[k])
				dist[k] = dist[MinVex] + G.edge[MinVex][k];//如果有，就更新最短路径
				path[k] = MinVex;
	}
}