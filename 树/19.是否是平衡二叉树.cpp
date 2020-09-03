bool IsAVL(BiTree T,int &h){
	bool bl = br = b = false;
	int hl = hr = 0;
	if(T == NULL){
		h = 0;
		return true;	
	}
	else if(T->lchild==NULL && T->rchild==NULL){
		h = 1;
		return true;
	}
	else{
		bl = IsAVL(T->lchild,hl);
		br = IsAVL(T->rchild,h2);
		h = (hl>hr ? hl:hr) + 1;
		if(abs(hl-hr)<2)
			b = bl && br;
		else
			b = false;
	}
	return b;
}