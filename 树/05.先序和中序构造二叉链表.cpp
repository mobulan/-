BiTNode PreInCreat(ELemType A[],ElemType B[],int L1,int R1,int L2,int R2){
	BiTNode root = (BiTNode*)malloc(sizeof(BiTNode));
	int i; 
	if(L1>R1) return NULL;
	root -> data = A[L1];
	for(i=L2; B[i] != A[L1]; i++);
	root->lchiLd = PreInCreat(A,B,L1+1,L1+i-L2,L2,i-1);
	root->rchiLd = PreInCreat(A,B,L1+(i-L2)+1,R1,i+1,R2);
	return root;
}