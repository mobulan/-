//初始化
void InitQueue(SqQueue &Q)
{
	Q.rear = Q.front = 0;		//都指向循环队列的第一个元素
}

//判断是否为空
bool isEmpty(SqQueue Q)
{
	if(Q.rear == Q.front)		//如果头尾指针相同则为空
		return true;
	else
		return false;
}