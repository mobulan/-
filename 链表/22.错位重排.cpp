void ChangeList(Node *L){
	Node *p,*t,*r,*s;
	p = r = L->next;
	while(r!=NULL){
		p = p->next;
		r = r->next;
		if(r->next!=NULL)
			r = r->next;
	}
	s = p->next;
	p->next = NULL;
	while(s!=NULL){
		r = s->next;
		s->next = p->next;
		p->next = s;
		s = r;
	}
	s = p->next;
	t = L->next;
	p->next = NULL;
	while(s != NULL && t!=NULL){
		r = s;
		s = s->next;
		r->next = t->next;
		t->next = r;
		t = r->next;
	}
}