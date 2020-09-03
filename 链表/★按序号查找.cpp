LNode *GetElem(LinkList L,int i)	//指针函数，返回的是个及节点指针
{
	int j=1;						//计数器
	LNode *p;						//新建指向单链表节点的指针p
	p=L->next;						//将头结点指针赋给p
	if(i==0)						//如果链表为空，返回头结点
		return L;
	if(i<1)							//非法返回空
		return NULL;
	while(p!=0 && j<i)				//指针不为空或者还没找到对应数 循环
	{
		p=p->next;					//该节点指向下个节点的指针赋给p
		j++							//循环i-1次，指向第i个节点地址被找到
	}
	return p;						//返回节点指针，如果i>表长则返回空
}