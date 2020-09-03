void InOrder2(BiTree T)
{
	initStack(S);							//初始化一个空栈
	BitTree p=T;							//初始化操作指针
	while(p != NULL || isEmpty(S) != true)	//p指针为空并且栈为空时终止
	{
		if(p != NULL)						//如果指针不为空
		{
			Push(S,p);						//当前元素入栈
			p = p->lchild;					//左孩子不空则指向下一个左孩子
		}
		else								//指针不为空
		{
			Pop(S,p);						//栈顶出栈
			visit(p);						//访问该节点
			p = p->rchild;					//指向右孩子
		}
	}
}