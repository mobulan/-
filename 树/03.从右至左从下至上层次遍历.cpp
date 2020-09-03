void LevelOrder(BiTree T)
{
	InitQueue(Q);
	InitStack(S);
	BiTree p = T;
	EnQueue(p);						//根节点入队
	while(isEmpty(Q) != true)		//只要队列不为空就继续执行
	{
		DeQueue(p);					//出队一个元素，出队函数规定出队的同时
		Push(S,p);					//会将p指向下一个队列元素（p是传引用）访问该元素
		if(p->lchild)				//如果左孩子不为空
			EnQueue(p->lchild);		//左孩子入队
		if(p->rchild)				//如果有孩子不为空
			EnQueue(p->rchild);		//右孩子入队
	}
	while(!IsEmpty(S)){
		Pop(S,p);
		visit(p);
	}
}