LinkList List_HeadInsert(LinkList &L)		//返回值是单链表 导入单链表
{
	LNode *s;								//节点指针类型，代表当前插入节点
	int x;									//代表数据，可以为各个类型ElemType
	L=(LinkList)malloc(sizeof(LNode));		//新建头结点 为头结点分配空间
	L->next = NULL;							//初始化头结点 头节点指针为空
	cin >> x;								//输入数据
	while(x!=9999)							//设置输入的终止条件
	{
		s=(LNode*)malloc(sizeof(LNode));	//生成一个LNode类型的节点 起始位置赋给指针s
		s->data = x;						//将读入的数据赋给节点的数据部分
		s->next = L->next;					//将自己的指针指向原来的第一个节点
		L->next = s;						//头节点指针指向自己
		cin >> x;							//输入下一个数据
	}
	return L;								//返回单链表
}