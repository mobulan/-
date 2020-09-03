void DeleteX(LinkList &L,ElemType x){
	LNode *p = L->next , *q;
	while(p != NULL){
		if(p->data == x){
			q = p;
			p = p->next;
			free(q);
		}
		else
			p = p->next;
	}
}