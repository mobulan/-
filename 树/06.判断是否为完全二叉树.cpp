bool IsComplete(BiTree T){
	InitQueue(Q);
	BiTree p;
	if(T == NULL) return ture;
	EnQueue(Q,T);
	while(!IsEmpty(Q)){
		DeQueue(Q,p);
		if(p){
			EnQueue(Q,p->lchild);
			EnQueue(Q,p->rchild);
		}
		else{
			DeQueue(Q,p);
			if(p!=NULL)
				return false;
		}
		return ture;
	}
}