bool Symmetry(DLinkList L){
	LNode *p = L->next;*r = L->prior;
	while(p != r && r->next=p)
		if(p->data == r->data){
			p = p->next;
			r = r->prior;
		}
		else 
			return false;
	return true;
}