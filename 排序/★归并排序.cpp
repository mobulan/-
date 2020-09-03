ElemType *B = new ElemType[];
void Merge(ElemType A[],int low,int mid,int high){
	int i,j,k;
	for(int i=low;i<=high;i++)
		B[i] = A[i];
	for(i=low,j=mid+1,k=i;i<=mid && j<=high;k++){
		if(B[i] <= B[j])
			A[k] = B[i++];
		else
			A[k] = B[j++];
	}
	while(i<=mid)
		A[k++] = A[i++];
	while (j <= high)
		A[k++] = A[j++]
}

void MergeSort(ElemType A[],int low,int high){
	if(low<high){
		int mid = (high+low)/2;
		MergeSort(A,low,mid);
		MergeSort(A,mid+1,high);
		Merge(A,low,mid,high);
	}
}