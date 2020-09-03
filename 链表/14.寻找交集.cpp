void Intersection(LinkList &A,LinkList &B){
	LNode *pa=A->next,*pb=B->next,*u,*r=A;
	A->next = NULL;
	while(pa!=NULL && pb!=NULL){
		if(pa->data < pb->data){
			u = pa;
			pa = pa->next;
			free(u)
		}
		else if(pa->data > pb->data){
			u = pb;
			pb = pb->next;
			free(u);
		}
		else{
			r->next = pa;
			r = pa;
			pa = pa->next;
			pb = pb->next;
		}
	}
	if(pa!=NULL)
		pb = pa;
	while(pb!=NULL){
		u = pb;
		pb = pb->next;
		free(u);
	}
	r->next = NULL;
	free(B);
}