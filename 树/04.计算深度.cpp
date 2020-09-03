int BiTreeDepth(BiTree T){
	if(T == NULL) return 0;			//如果树为空，返回0
	InitQueue(Q);					//初始化队列，front和rear都为0
	EnQueue(Q,T);					//根节点入队
	BiNode *p;						//工作指针p
	int last = 1,level = 0;			//目前层最后一个节点的下标序号
	while(!IsEmpty(Q)){				//队列不为空循环
		DeQueue(Q,p);				//出队队首元素，指针指向它，front++
		if(p->lchild)				//有左孩子，左孩子入队
			Enqueue(Q,p->lchild);
		if(p->rchild)				//有右孩子，右孩子入队
			Enqueue(Q,p->rchild);
		if(Q.front = last){			//如果指针指向了当前层最后一个节点
			level++;				//说明所有可能有的孩子全入队了，层+1
			last = Q.rear;			//并且指向当前队列最后一个节点
		}							//即下一层的最后一个节点
	}
	return level;					//如果队列为空返回层数
}


int BiTreeDepth(BiTree T){
	int ldep=0,rdep=0;
	if(T == NULL) return 0;			//空树返回0
	ldep = BiTreeDepth(T->lchild);	//向左子树调用
	rdep = BiTreeDepth(T->rchild);	//向右子树调用
	if(ldep>rdep)					//最后返回最大高度加根节点
		return ldep+1;
	else
		return rdep+1;
}