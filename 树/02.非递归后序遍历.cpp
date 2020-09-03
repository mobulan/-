void PostOrder(BiTree T){			//非递归后序遍历
	InitStack(S);					//初始化栈
	BiTNode *p=T,*r=NULL;			//指向上一个被访问元素的r,也可以修改结构体
	while(p == NULL && IsEmpty(S)){	//增加是否访问过的标记
		if(p != NULL)				//p为空并且栈为空时停止
			Push(S,p);				//左孩子不为空，则入栈
			p = p->lchild;			//继续将带根节点的左孩子入栈
		}
		else{						//如果左孩子为空，则读取栈顶元素
			GetTop(S,p);			//如果栈顶的右孩子存在并且未被访问
			if(p->rchild && r!=p->rchild){
				p = p->rchild;		//右孩子入栈
				Push(S,p);			//并且继续指向右孩子的左孩子
				p = p->lchild;		//PS.因为某个节点后序遍历的前一个节点必然是
			}						//自己的右孩子，所以r节点会指向它，从而避免循环
			else{					//如果没访问过指的就不是右孩子,而是左子树的某个节点
				Pop(S,p);			//如果右孩子不存在或者访问过			
				visit(p);			//则访问当前节点并出栈
				r = p;				//标记为刚访问过
				p = NULL;
			}
		}
}