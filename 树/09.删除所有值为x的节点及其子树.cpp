void DeleteNode(BiTree p){
	if(p->lchild)
		DeleteNode(p->lchild);
	if(p->rchild)
		DeleteNode(p->rchild);
	free(p);
}
void DeleteXTree(BiTree T,ElemType x){
	InitQueue(Q);
	BiTree p = T;
	EnQueue(Q,p);
	while(!IsEmpty(Q)){
		DeQueue(Q,p);
		if(p->data == x)
			DeleteNode(p);
		else{
			if(p->lchild)
				EnQueue(Q,p->lchild);
			if(p->rchild)
				EnQueue(Q,p->rchild);
		}
	}
}