ElemType PreNode(BiTree T,int k){
	static int i=0;
	ElemType res;
	while(T!=NULL){
		i++;
		if(i == k)
			return T->data;
		PreNode(T->lchild);
		PreNode(T->rchild);
	}
	return -1;
}