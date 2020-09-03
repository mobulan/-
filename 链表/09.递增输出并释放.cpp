void InsertSort(LinkList &L){
	LNode *p = L->next;*pre;
	LNode *r = p->next;
	p = r;
	while(p!=NULL){
		r = r->next;
		pre = L;
		while(pre->next!=NULL &&pre->next->data < p->data)
			pre = pre->next;
		p->next = pre->next;
		pre->next = p;
		p = r;
	}
	pre = L->next;
	while(pre!=NULL){
		print(pre->data);
		p = pre;
		pre = pre->next;
		free(p);
	}
	free(L);
}
