#define Max_Tree_Size 100		//最大节点数

typedef struct{					//节点定义
	ElemType data;				//数据元素
	int parent;					//双亲位置
}PTNode;						

typedef struct{					//树定义
	PTNode nodes[Max_Tree_Size];//双亲表示
	int n;						//节点数
}PTree;

//孩子表示法相似

//孩子兄弟表示法
typedef struct{
	ElemType data;
	struct CSNode *firstchild,*nextsibling;	
								//第一个孩子和右兄弟
}CSNode,*CSTree;