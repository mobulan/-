#define MaxSize 100
#define ElemType int
typedef struct
{
	ElemType data[MaxSize];
	int front, rear;
	bool tag;
} Queue;

bool EnQueue(Queue &Q,ElemType x){
	if(Q.rear==Q.front && Q.tag == 1)
		return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear+1) % MaxSize;
	Q.tag = 1;
	return true;
}

bool DeQueue(Queue &Q,ElemType &x){
	if(Q.rear==Q.front && Q.tag == 0)
		return false;
	x = Q.data[Q.front];
	Q.front = (Q.front+1)%MaxSize;
	Q.tag = 0;
	return true
}