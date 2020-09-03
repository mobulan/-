//先找到第i-1节点，令其指向新节点，新节点指向原第i号
p=GetElem(L,i-1);	//找到第i-1号节点
s->next = p->next;	//新节点的指针指向原第i号
p->next = s;		//i-1的指针指向新节点

//在某个节点后插改为前插 交换插入后两个节点的次序
s->next = p->next;
p->next = s;
temp = p->data;
p->data = s->data;
s->data = temp;