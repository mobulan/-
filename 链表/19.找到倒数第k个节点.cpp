typedef int ElemType;

typedef struct LNode{
	ElemType data;
	struct LNode *link;
}LNode,*LinkList;

bool ReverseSearch(LinkList list,int k){
	LNode *p=list->link;,*r=list->link;
	int count=0;
	while(p!=NULL){
		count++;
		p = p->link
		if(count>=k)
			r = r->link;
	}
	if(count < k)
		return 0;
	else{
		cout << r->data;
		return 1;
	}
}