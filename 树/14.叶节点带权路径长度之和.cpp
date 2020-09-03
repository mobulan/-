//先序遍历
int WPL(BiTree T){return WPLPre(T,0);}
int WPLPre(BiTree T,int deep){
	static int wpl = 0;
	if(T->lchild==NULL && T->rchild==NULL)
		wpl += deep*T->weight;
	if(T->lchild)
		WPLPre(T->lchild,deep+1);
	if(T->rchild)
		WPLPre(T->rchild,deep+1);
	return wpl;
}

//层次遍历，参考习题04
const int Maxsize = 100;
int WPLLevel(BiTree T){
	BiTree Q[Maxsize],p;
	int front=rear=-1,last=0,level=0,wpl=0;
	Q[++rear] = T;
	while(front<rear){
		p = Q.[++front];
		if(p->lchild==NULL && p->rchild==NULL)
			wpl += level * p->weight;
		if(p->lchild)
			Q[++rear] = p->lchild;
		if(p->rchild)
			Q[++rear] = p->rchild;
		if(front = last){
			last = rear;
			level++;
		}
	}
	return wpl;
}