void Reverse(LinkList &L){
	LNode *r,*p,*temp;
	p = L;
	while(p != NULL){
		if(L->next == NULL)
			r = p;
		p = p->next;
	}
	p = L;
	while(p->next != r){
		temp = p->next;
		p->next = temp->next;
		temp->next = r->next;
		r->next = temp;
	}
}

void Reverse(LinkList &L){
	LNode *p,*r;
	p = L->next;
	L->next = NULL;
	while(p != NULL){
		r = p->next;
		p->next = L->next;
		L->next = p;
		p = r;
	}
}