LinkList Merge(LinkList A,LinkList B){
	LNode *pa=A->next,*pb=B->next,*p;
	A->next = NULL;
	while(pa!=NULL && pb != NULL){
		if(pa->data < pb->data){
			p = pa->next;
			pa->next = A->next;
			A->next = pa;
			pa = p;
		}
		else{
			p = pb->next;
			pb->next = A->next;
			A->next = pb;
			pb = p;
		}
	}
	while(pa!=NULL){
		p = pa->next;
		pa->next = A->next;
		A->next = pa;
		pa = p;
	}
	while(pb!=NULL){
		p = pb->next;
		pb->next = A->next;
		A->next = pb;
		pb = p;
	}
	free(B);
	return A;
}