void DeleteMin(LinkList &L){
	LNode *p = L->next; *minp;
	ElemType min = L->data;
	while(p!=NULL){
		if(p->data < min){
			min = p->data;
			minp = p;
		}
		L = L->next;
	}
	p = minp;
	minp = minp->next;
	free(p);
}