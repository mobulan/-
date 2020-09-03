LNode *LocateElem(Linklist L, ElemType e)	
{
	LNode *p = L->next;						//指向头结点
	while(p != NUll && p->data == e)		//循环判断是否为空或者找到了
		p=p->next;							//没找到就找下一个
	return p;								//返回节点指针
}