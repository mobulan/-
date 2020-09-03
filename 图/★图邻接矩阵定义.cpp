#define MaxVertexNum 100			//顶点数目最大值
typedef int VertexType;			//定义顶点的数据类型
typedef int EdgeType;				//边的权值为整型
typedef struct{
	VertexType Vex[MaxVertexNum];	//顶点表
	EdgeType Edge[MaxVertexNum][MaxVertexNum];
									//用二维数组存放边表
	int vexnum,arcnum;				//顶点和边的数目
}MGraph;							//结构体名称