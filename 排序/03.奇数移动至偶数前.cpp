void OddEvenSort(ElemType A[],int n){
	for(int low=0,high=n-1,low<high;low++,high--){
		while(low<high && A[low]%2!=0)
			low++;
		while(low<high && A[high]%2!=1)
			high--;
		if(low<high)
			swap(A[low],A[high])
	}
}