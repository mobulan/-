int MinInteger(int A[],int n){
	bool *B = new bool[n+2];
	for(int i=0;i<n;i++)
		B[i] = 0;
	for(int i=0;i<n;i++)
		if(A[i]<=n && A[i]>=0)
			B[A[i]] = true;
	for(int i=1;i<=n;i++)
		if(B[i] == false)
			break;
	return i;
}