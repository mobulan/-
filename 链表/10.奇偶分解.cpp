LinkList OddEven(LinkList &L){
	LinkList B = (LinkList)malloc(sizeof(LNode));
	B->next = NULL;
	int count=1;
	LNode *ra=L;*rb=B,*p = L->next;
	L->next = NULL;
	while(p!=NULL){
		if(count%2==0){
			rb->next=p;
			rb = p;
		}
		else{
			ra->next=p;
			ra=p
		}
	}
	ra->next==NULL;
	rb->next==NULL;
	return B;
}

LinkList OddEven(LinkList &A){
	LinkList B = (LinkList)malloc(sizeof(LNode));
	B->next = NULL;
	LNode *ra=A;*pb;*p=A->next;
	A->next == NULL;
	while(p!=NULL){
		ra->next = p;
		ra = p;
		p = p->next;
		if(p!=NULL)					//A尾插法，B头插法
			q = p->next;
		p->next = B->next;
		B->next = p;
		p = q;
	}
	ra->next == NULL;
	return B;
}