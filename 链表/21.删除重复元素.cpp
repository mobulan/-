typedef struct LNode{
	char data;
	struct LNode *next;
}LNode,*LinkList;

void DeleteSameAbs(LinkList &L,int m,int n){
	bool *A = new bool[n+1];
	LNode *p = L->next,*r;
	while(p!=NULL){
		if(A[abs(p->data)] != 1){
			A[abs(p->data)] = 1;
			p = p->next;
		}
		else{
			r = p->next;
			p->next = r->next;
			p->data = r->data;
			free(r);
		}
	}
}