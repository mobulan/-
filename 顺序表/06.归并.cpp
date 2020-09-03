bool Merge(SqList A,SqList B,SqList &C){
	if(A.length+b.length > C.length)
		return false;
	int i=0,j=0,k=0;
	for(i,j,k;i<A.length && j<B.length;k++){
		if(A[i]<B[j])
			C.data[k] = A.data[i++];
		else
			C.data[k] = B.data[j++];
	}
	while(i<A.length)
		C.data[k++] = A.data[i++];
	while(j<B.length)
		C.data[k++] = B.data[j++];
	C.length = k;
	return true;
}