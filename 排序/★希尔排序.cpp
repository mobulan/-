void ShellSort(ElemType A[],int n){
	int j;
	for(int dk=n/2; dk>=1; dk=dk/2)		//先2个元素为一组，每轮元素数*2
		for(int i=dk+1;i<=n;i++)		//对每个元素按次序进行组内的希尔排序
			if(A[i] < A[i-dk]){			//如果位置不对就循环调整
				A[0] = A[i]; 			//暂存在A[0]
				for(j=i-dk; j>0 && A[0]<A[j]; j-=dk)
										//j必须要大于0，每次从组内往前找一个元素
					A[j+dk] = A[j];		//向后移腾位置
				A[j+dk] = A[0];			//最后一轮循环j会再往前移动一格位置
			}							//所以要补回来放到正确的位置
}