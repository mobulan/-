//入队
bool EnQueue(SqQueue &Q,ElemType x)
{
	if((Q.rear+1)%Maxsize == rear)		//牺牲一个数据元素判断是否为满
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear+1)%Maxsize；		//循环队列向后移动一位
	return true;
}

//出队
bool DeQueue(SqQueue &Q,ElemType &x)
{
	if (Q.rear == Q.front)				//判断是否为空
		return false;
	x = Q.data[Q.front];
	Q.front = (Q.front+1)%Maxsize;
	return true;
}