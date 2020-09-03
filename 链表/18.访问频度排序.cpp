DLinkList Locate(DLinkList &L,int x){
	DNode *p= L->next,*r = L;
	while(p != NULL && p->data!=x)
		p = p->next;
	if(p==NULL)
		return p;
	else{
		p.freq++;
		if(p->next!=NULL)
			p->next->pred = p->pred;
		p->pre->next = p->next;
		r = p->pre;
		while(p.freq <= r.freq && r!=L)
			r = r->pred;
		p->next = r->next;
		p->pre = r;
		r->next = p;
		p->next->pre = p;
		
	}
	return p;
}