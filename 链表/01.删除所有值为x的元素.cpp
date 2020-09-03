void DeleteX(LinkList &L,ElemType x){
	LNode *p;
	if(L == NULL)
		return false;
	if(L->data == x){
		p = L;
		L = L->next;
		free(p);
		DeleteX(L,x);
	}
	else
		Delete(L->next,x);
		
}