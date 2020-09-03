LinkList LinkLeafNode(BiTree T,LinkList head){
	LNode *r = head;
	BiTNode *p = T;
	if(p){
		LinkLeafNode(p->lchild,r);
		if(!p->child && !p->rchild){
			r->next = p;
			r = p;
		}
		LinkLeafNode(p->rchild,r);
	}
	r->next = NULL;
	return head;
}