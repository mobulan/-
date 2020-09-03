int Level(BiTree T,BiTNode *x){
	int level = 0;
	BiTree p = T;
	if(p){
		level++;
		while(p->data != x->data){
			if(p->data < x->data)
				p = p->lchild;
			else
				p = p->rchild;
			level++;
		}
	}
	return level;
}