void DeleteX1(SqList &L,ElemType x){
	int remain = 0;					//用于记录不是x的元素数目
	for(int i=0; i<L.length ; i++)	//i和remain分别计数
		if(A[i] != x)				//如果不是x
			L.data[remain++]=L.data[i];//将其元素值移动到前一个不是x的元素后面
	L.length = remain;				//更新顺序表长度
}

void void DeleteX1(SqList &L, ElemType x) {
	int move = 0;					//记录是x的元素数目
	for(int i=0;i<L.lenght;i++){
		if(L.data[i] == x)			//如果是x，加一
			k++
		else						//后面不是x的元素
			L.data[i-k] = L[i];		//每有一个x就要往前移动一位
	}
	L.length = L.length-k;			//更新顺序表长度
}