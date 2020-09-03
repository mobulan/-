void DeleteSame(LinkList &L){
	LNode *remain=L->next;*p;
	while(p!=NULL){
		p = remain->next;
		if(remain->data == p->data){
			remain->next = p->next;
			free(p);
		}
		else
			remian = remian->next;
	}
}