LinkList MutualNode(LinkList A,LinkList B){
	LNode *pa=A->next,*pb=B->next;*p,*r;
	LinkList C = (LinkList)malloc(sizeof(LNode));
	C->next = NULL;
	r = C;
	while(pa&&pb){
		if(pa->data < pb->data)
			pa = pa->next;
		else if(pa->data > pb->Ldata)
			pb = pb->next;
		else{
			p = (LNode*)malloc(sizeof(LNode));
			p->data = pa->data;
			p->next = NULL;
			r->next = p;
			r = p;
			pa = pa->next;
			pb = pb->next;
		}
	}
	r->next = NULL;
	return C;
}