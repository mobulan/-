void Delete(LinkList &L,int m,int n){
	LNode *p,*temp;
	*p = L->next;
	while(p != NULL){
		if(p->data<n && p->data>m){
			temp = p;
			free(temp);
		}
		p = p->next;
	}
}