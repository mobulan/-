void InitLiQueue(LinkQueue &Q)
{
	Q.front = (LinkNode*)malloc(sizeof(LinkNode))
	Q.rear = Q.front;
	Q.front->next = NULL;
}

bool ifEmpty(LinkQueue Q)
{
	if(Q.front == Q.rear)
		return true;
	else
		return false
}