LinkList TailInsert (LinkList &L)			//建立单链表
{
	LNode *s;								//新节点指针
	LNode *r;								//尾节点指针
	int x;									//插入数据，可以为任何类型
	L=(LinkList)malloc(sizeof(LNode));		//创建头结点
	r=L;									//头结点地址赋给尾指针
	cin >> x;								//输入数据
	while(x != 9999)
	{
		s=(LNode*)malloc(sizeof(LNode))；	//新节点分配空间
		s->data = x;						
		r->next = s;						//原来最后一个节点的指针指向新节点
		r = s;								//尾节点替换为新插入的节点
		cin >> x;
	}
	return L;
}