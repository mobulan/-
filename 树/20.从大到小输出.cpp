void OutPut(BSTree T,ElemType k){
	if(T == NULL)
		return;
	if(T->rchild)
		OutPut(T->rchild);
	if(T->data >= k)
		cout << T->data;
	if(T->lchild)
		OutPut(T->lchild);
}