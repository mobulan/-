typedef struct LNode{
	char data;
	struct LNode *next;
}LNode,*LinkList;

int Length(LinkList L){
	int count=0;
	LNode *p = L->next;
	for(;p!=NULL;p=p->next)
		count++;
	return count;
}

LinkList SearchSuffix(LinkList str1,LinkList str2){
	int m,n;
	LNode *p,*r;
	m = Length(str1);
	n = Length(str2);
	for(p=str1->next;n<m;m--)
		p = p->next;
	for(r=str2->next;m<n;n--)
		r = r->next;
	while(p->NULL && p!=r){
		p = p->next;
		r = r->next;
	}
	return p;
}