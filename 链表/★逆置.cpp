while (p->next != r)
{
	temp = p->next;			//保存要移动的节点地址
	p->next = temp->next;	//要移动的后一个地址赋给头结点
	temp->next = r->next;	//把原来尾节点后面的节点地址给要移动的节点后面
	r->next = temp;			//尾节点的下一个指向要移动的节点
}