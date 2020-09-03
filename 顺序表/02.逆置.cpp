void Reverse(SqList &L){
	for(int i=0,j=L.length;i<j;i++,j--){
		Elemtype temp = L.data[i];
		L.data[j] = L.data[i];
		L.data[j] = temp;
	}
}