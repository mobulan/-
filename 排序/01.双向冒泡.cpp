void BubbleSort(ElemType A[],int n){
	bool flag = ture;
	int low = 0,high = n-1;
	while(low<high && flag){
		flag = false;
		for(int i=low,i<high;i++){
			flag = true;
			swap(A[i],A[i+1])
		}
		high--;
		for(int i=high,i>low,i--){
			flag = ture;
			swap(A[i-1],A[i])
		}
		low++;
	}
}