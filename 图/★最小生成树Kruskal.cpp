typedef struct Edge{						//建立一个储存所有边的结构体
	int a,b;
	int weigh;
};

void Kruskal(Graph G,Edge edge[],int parent[]){
	HeapSort(edge);							//对所有边堆排序
	Initial(parent);						//初始化并查集，全部置为-1
	for(int i=0;i<G.arcnum;i++){			//对所有边循环
		int aRoot = Find(parent,edge[i].a);	//使用并查集找到根节点
		int bRoot = Find(parent,edge[i].b);
		if(aRoot != bRoot)					//如果根节点不同则联合，表示不构成回路
			Union(parent,aRoot,bRoot);
	}
}
