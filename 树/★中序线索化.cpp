typedef struct ThreadNode{
	ElemType data;
	struct ThreadNode *lchild,*rchild;
	int ltag,rtag;
}ThreadNode *ThreadTree;

void InThread(ThreadTree &p,ThreadTree &pre)	//当前节点和前节点
{
	InThread(p->lchild,pre)						//参考中序遍历，递归左子树
	
	if(p->lchild == NULL){						//替换中序遍历的访问过程
		p->lchild = pre;						//左孩子为空，则把左孩子指向前驱
		ltag = 1;								//左孩子位标记为线索
	}
	if(pre!=NULL && pre->rchild == NULL){		//前驱不为空，并且右孩子为空
		pre->rchild = p;						//则前驱的后继节点标为当前节点
		rtag = 1;								//右孩子位标记为线索
	}
	
	pre = p;									//当前节点置位前驱结点
	InThread(p->rchild,pre)						//参考中序遍历，递归右子树
}

void CreatInThread(ThreadTree T)
{
	ThreadTree pre = NULL;						//初始化前驱节点为空
	InThread(T,pre);							//对根节点执行以上函数
	pre->rchild = NULL;							//最右侧也就是最后一个节点的右孩子必定为空
	pre->rtag = 1;								//将其置为线索
}