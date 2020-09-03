int DoubleSon(BiTree T){
	if(T == NULL)
		return 0;
	else if(T->lchild!=NULL && T->rchild!=NULL)
		return DoubleSon(BiTree T->lchild)+DoubleSon(BiTree T->rchild)+1;
	else
		return DoubleSon(BiTree T->lchild)+DoubleSon(BiTree T->rchild);
}