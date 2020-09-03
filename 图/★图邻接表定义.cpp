#define MaxVertexNum 100			//顶点数目最大值
typedef char VertexType; 			//定义顶点的数据类型

typedef struct ArcNode{				//结构体内调用自身，需要提前声明结构体名称
	int adjvex;						//该弧所指向的顶点（默认顶点是整型）
	struct ArcNode *next;			//指向下一条弧的指针
	InfoType info;					//网的边权值
}ArcNode；							//边表节点

typedef struct Vnode{				//顶点表节点
	VertexType data;				//顶点节点数据
	ArcNode *first;					//指向第一条边的指针
}Vnode,AdjList[MaxVertexNum];

typedef struct{						//邻接表
	AdjList vertices;				//邻接表有若干个顶点表
	int vexnum,arcnum;				//图的顶点和边数
}ALGraph;							//邻接表储存的图的类型