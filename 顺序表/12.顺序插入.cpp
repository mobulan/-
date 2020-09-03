bool Insert(SqList &L,ElemType x){
	if(L.length > Maxsize)
		return false;
	for(int i=L.length;i>0 && L.data[i-1]>x;i--)
		L.data[i] = L.data[i-1];
	L.data[i] = x;
	return true;
}