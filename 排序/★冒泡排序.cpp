void BubbleSort(ElemType A[],int n){
	for(int i=0; i<n-1; i++){			//从第一个元素到n-1个元素
		bool flag = false;				//记录本次循环是否交换了
		for(int j=n-1;j>i;j--)			//从后往前，找到最小的元素
			if(A[j]>A[j+1]){			//如果当前元素更小
				swap(A[j],A[j+1]);		//交换位置，更小的到前面
				flag = true				//记录本次循环交换过了
			}
		if(flag == false)				//如果本次循环没有交换
			return;						//代表后面的元素都比他大
	}
}