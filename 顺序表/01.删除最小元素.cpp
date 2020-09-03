bool DeleteMin(SqList &L,ElemType &e){
	if(L.length<=0)
		return false;
	int m = 0;
	for(int i=1;i<L.length;i++)
		if(L.data[i]<L.data[m])
			m = i;
	e = A[m];
	A[m] = A[L.length-1]
	L.length--;
	return true;
}