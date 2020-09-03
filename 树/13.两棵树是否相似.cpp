bool Similar(BiTree T1,BiTree T2){
	bool leftS,rightS;
	if(T1==NULL && T2==NULL)
		return true;
	else if(T1==NULL && T2==NULL)
		return false;
	else{
		leftS = Similar(T1->lchild,T2->lchild);
		rightS = Similar(T1->rchild,T2->rchild);
		return leftS && rightS;
	}
}