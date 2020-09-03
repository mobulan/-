//入队
void EnQueue(LinkQueue &Q,ElemType x)
{
	LinkNode *s = (LinkNode*)malloc(sizeof(LinkNode));	//分配空间
	s->data = x;										//拷贝数据
	s->next = NULL;										//设置指针
	Q.rear->next = s;									//原来的末尾节点连接新节点
	Q.rear = s;											//新节点设置为尾节点
}														//插入不会失败

//出队
bool DeQueue(LinkQueue &Q,ElemType &x)
{
	if(Q.front == Q.rear)			//如果链表为空返回错误
		return false;
	LinkNode *q = Q.front->next;	//储存要删除的地址
	x = q->data;					//传参删掉的数据
	Q.front->next = q->next;		//front是头结点，连接原本第二个节点
	if(Q.rear == q)					//如果只有一个数据节点，及头节点的下一个就是尾节点
		Q.rear = Q.front;			//那么删除完之后，设置尾节点指针指向头结点
	free(q)
}