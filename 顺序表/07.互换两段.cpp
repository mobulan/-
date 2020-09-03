void Reverse(ElemType A[],int low,int high){
	for(low,high;low<high;low++,high--){
		ElemType temp = A[low];
		A[low] = A[high];
		A[high] = temp;
	}
}

void Exchange(ElemType A[],int m,int n){
	Reverse(A,0,m+n-1);
	Reverse(A,0,n-1);
	Reverse(A,n,m+n-1);
}
