void ReversePrint(LinkList L){
	LinkList L2;
	LNode *p;
	L2 = (LinkList)malloc(sizeof(LNode));
	L2->next = NULL;
	while(L != NULL){
		p = (LNode*)malloc(sizeof(LNode));
		p->data = L->data;
		p->next = L2->next;
		L2->next = p;
		L = L->next;
	}
	while(L2->next != NULL){
		print(L2->next);
	}
}

void ReversePrint(LinkList L){
	if(L->next != NULL)
		ReversePrint(L->next);
	if(L != NULL)
		print(L->data);
}