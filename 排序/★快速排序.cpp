int Partition(ElemType A[],int low,int high){
	ElemType pivot = A[low];				//建立一个划分点，默认选第一个元素
	while(high < low){						//high = low 的时候就终止
		while(A[high] < pivot)				//从后往前选择第一个比划分点小的元素
			high--;
		A[low] = A[high];					//调换位置
		while(A[low] > pivot)				//从前往后选一个比划分点大的元素
			low++;
		A[high] = A[low];					//调换位置
	}
	A[low] = povit;							//再把划分点元素放到应有的位置
	return low;								//把划分点的位置返回，此时high = low
}
void QuickSort(ElemType A[],int low,int high){
	if(low < high){							//需要有两个及以上才需要排序
		int divide = Partition(A,low,high)	//第一步划分出两个子表
		QuickSort(A,low,divide-1);			//分别递归排序
		QuickSort(A,divide+1,high);
	}
}