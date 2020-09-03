void Prim(Graph G){
	int MinWeigh[G.vexnum];				//用于存放通过现有顶点到各个顶点最小的权值
	int adjvex[G.vexnum];				//用于存放各个顶点是由哪个顶点达到的
	for(int i=0; i<G.vexnum; i++){
		MinWeigh[i] = G.Edge[0][i];		//默认从第一个顶点开始建立，初始化为第一个顶点到其他顶点的距离
		adjvex[i] = 0;					//初始化邻接数组，全部置为0
	}
	int MinArc, MinVex; 				//设置两个数字，用于存放最小权值的边和其指向的顶点编号
	for(int i=1; i<G.vexnum; i++){		//循环除了初始顶点以外的点，建立最小生成树
		MinArc = MAX;					//先将最小边置为无穷大
		for(int j=1; j<G.vexnum; j++)	//第一步--挑出从顶点出发，到其他顶点权值最小的边
			if (MinWeigh[i] != 0 && MinWeigh[j] < MinArc){//如果当前边还没加入最小生成树，并且权值最小
				MinArc = MinWeigh[j];	//如果当前边比最小边小，则循环修改
				MinVex = j;				//并将这条边指向的顶点编号记录
		}
		MinWeigh[j] = 0;				//找出来之后，将其边权值置为0，表明已经归并进最小生成树里了
		for(int k=0; k<G.vexnum; k++)	//第二步--加入了新顶点之后，借助新顶点找出到其他顶点的最短距离
			if(MinWeigh[k]!=0 && G.Edge[MinVex][k]<MinWeigh[k]){
				MinWeigh[k] = G.Edge[MinVex][k];
				adjvex[k] = MinVex;		//更新路径，表明这个这个顶点最后是由新加入的顶点达到的
			}
	}
}

