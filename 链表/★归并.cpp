//比较两个链表头元素大小，把小的那个放到新链表开头
while(p->next != NULL && q->next != NULL)
{
	if(p->next-data < q->next->data)
	r->next = p->next;
	p->next = p->next->next;
	r = r->next;
}
//如果两个链表的不为空就把剩余的节点移到新链表最后
if(p->next != NULL)
	r->next = p->next;
	
if(q->next != NULL)
	r-next = q->next;
free(p);free(q);			//释放原来链表