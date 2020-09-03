void BinaryInsertSort(ElemType A[],int n){
	int low,high,mid;
	for(int i=2;i<=n;i++){				//从第二个元素开始排序整个数组
		A[0] = A[i];					//将要排序的元素放入哨兵位
		low = 1;high = i-1;
		while(low <= high){				//low=high后再执行一次
			mid = (high + low) / 2;		//向下取整
			if(A[0] < A[mid])			//如果元素小，high-1后比low小退出循环
				high = mid-1;			//实际要放置的位置是high+1或low
			else						//如果元素大，low+1比high大退出循环
				low = mid+1;			//实际要放置的位置也是high + 1或low
		}
		for(int j = i-1;j>low;j--)		//后面元素让位
			A[j+1] = A[j];
		A[low] = A[0];					//将元素放入正确的位置
	}
}