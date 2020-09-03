bool DeleteSame(SqList &L){
	if (L.length <= 0)
		return false;
	int remain = 0;
	for(remain,int i=1;i<L.length;i++)
		if(A[remain] != A[i])
			A[++remain] = A[i];	//思路相似，不过++remain在数组下标的位置
	L.length = remain+1;		//所以最后要额外加一
}