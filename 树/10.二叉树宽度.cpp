const int Maxsize = 100;
typedef struct
{
	BiTree data[Maxsize];
	int level[Maxsize];
	int front, rear;
}Q;

int BiTreeWidth(BiTree T){
	BiTree p = T; Q Q;
	int max = 0,level;
	Q.rear = Q.front = -1;
	Q.rear ++ ;
	Q.data[Q.rear] = p;
	Q.level[Q.rear] = 1;
	while(Q.front < Q.rear){
		Q.front ++;					//出队元素
		p = Q.data[Q.front];
		level = Q.level[Q.front];
		if(p->lchild){
			Q.rear++;
			Q.data[Q.rear] = p->lchild;
			Q.level[Q.rear] = level+1;
		}
		if(p->rchild)
			Q.rear++;
		Q.data[Q.rear] = p->rchild;
		Q.level[Q.rear] = level+1;
	}
	level = 1;
	for(int i=0, num=0;i<=Q.rear;level++){
		for(;i<=Q.rear && Q.level[i] == level;num++,i++);
		level = Q.level[i];
		if(num > max) max = num;
	}
	return max;
}