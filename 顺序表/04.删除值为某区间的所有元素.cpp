bool DeleteStoT1(SqList &L,ElemType s,ElemType t){
	if(s>=t || L.length == 0)
		return false;
	int remain = 0;
	for(int i=0;i<L.length;i++)
		if(A[i]<s || A[i]>t)
			L.data[reamian++] = L.data[i];
	L.length = remain;
	return true
}

bool DeleteStoT2(SqList &L, ElemType s, ElemType t) {
	int start=0,end;				//有序表，(s,t)是连续的区间
	if (s >= t || L.length == 0)
		return false;
	for(start;start<L.length && L.data[start]<s; start++);
	if(start>=L.length)
		return false;				//如果整表没有比s大的返回错误
	for(end=start;end < L.length && L.data[end] >t; end++);
	while(end < L.length)			//找到区间结束的位置
		L.data[start++] = L.data[end++];//将后面的元素前移
	L.length = start;				//start从0开始，循环结束额外+1，正好是长度
	return true
}
