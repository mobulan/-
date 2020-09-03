void AdjustDown(ElemType A[],int k,int n){//以某个节点为根节点向下整理成大根堆
	A[0] = A[k];						//先将根节点放在0处
	for(int i=2*k; i<=n; i*=2){		//搜索该节点的子树
		if(i<n && A[i]<A[i+1])			//如果右子树更大
			i++;						//则把标记移动到右子树上
		if(A[0] >= A[i])				//如果根节点比最大的孩子节点要大
			break;						//那么这颗子树不需要调整
		else{							//并继续搜索这个根节点的左子树
			A[k] = A[i];				//如果不对，那就交换位置
			k = i;						//并更新原根节点应有的位置
		}
	}
	A[k] = A[0];						//循环结束，原根节点找到了自己应有的位置
}

void BuildMaxHeap(ElemType A[], int n) {//建立大根堆
	for (int i = n / 2; i > 0; i--)		//对每个双亲节点向下调整
		AdjustDown(A, i, n);			//对数组进行大根堆调整
}

void HeapSort(ElemType A[],int n){		//堆排序		
	BuildMaxHeap(A,n);					//先初始化大根堆
	for(int i=n;i>1;i--){				//对每个元素都循环一遍
		swap(A[1],A[i]);				//调整后最大的元素一定在根节点
		AdjustDown(A,1,i-1);			//将他换到最后一个，他应有的位置
	}									//这样必然破坏剩余的大根堆结构
}										//再将剩余的完全二叉树重新调整成大根堆

