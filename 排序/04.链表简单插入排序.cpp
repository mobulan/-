void SelectSort(LinkList &L){
	LinkList r,pre,p,min,minpre;
	r = new LNode;
	r->next = NULL;
	while(L->next){
		pre = L;p=pre->next;
		min=p;minpre=pre;
		while(p){
			if(p->data > min->data){
				min = p;
				minpre = pre;
			}
			pre = p;
			p = p->next;
		}
		minpre->next = min->next;
		min->next = r->next;
		r->next = min;
	}
	L->next = r->next;
}

void SelectSort(LinkList &L){
	for(LinkList p=L->next;p;p=p->next){
		LinkList min = p;
		for(LinkList t=p->next;t;t=t->next)
			if(t->data < min->data)
				min = t;
		if(min!=p){
			ElemType temp = min->data;
			min->data = p->data;
			p->data = temp;
		}
	}
}