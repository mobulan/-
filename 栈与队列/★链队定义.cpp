//每个节点的结构体
typedef struct
{
	Elemtype data;
	struct LinkNode *next;
}LinkNode;

//链队的结构体
typedef struct
{
	LinkNode *front,*rear;
}LinkQueue;
