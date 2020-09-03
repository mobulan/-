bool SonSequence(LinkList A,int m,LinkList B,int n){
	LNode *pa=A->next,*p=pa,*pb=B->next;
	while(pa&&pb){
		if(pa->data == pb->data){
			pa = pa->next;
			pb = pb->next;
		}
		else{
			p = p->next;
			pa = p;
			pb = B->next
		}
	}
	if(pb==NULL)
		return true;
	else
		return false;
}