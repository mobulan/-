bool CharSymmerty(LinkList &L,int n){
	float t = n/2;
	LNode *p = L->next;
	char S[n/2];
	int top = -1;
	
	for(;t>0;t--,p=p->next)
		S[++top] = p->data;
		
	if(t%2 != 0)
		p=p->next;
		
	while(p!=NULL && p->data == S[top--])
			p = p->next;
			
	if(top == -1)
		return true;
	else
		return false;
}