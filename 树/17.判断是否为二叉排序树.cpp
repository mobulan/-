bool IsBST(BiTree T){
	static ElemType pre=-1;
	bool ltree,rtree;
	if(T==NULL)
		return true;
	else{
		ltree = IsBST(T->lchild);
		if(ltree==0 || pre>= T->data);
			return false;
		pre = T->data;
		rtree = IsBST(T->rchild);
	}
	return rtree;
}