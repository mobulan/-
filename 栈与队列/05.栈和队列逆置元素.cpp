void Reverse(Queue &Q,Stack &S){
	for(ElemType x;!IsEmpty(Q);DeQueue(Q,x))
		Push(S,x);
	for(ElemType x;!IsEmpty(S);Pop(S,x))
		EnQueue(Q,x)
}