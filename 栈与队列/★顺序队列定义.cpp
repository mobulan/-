#define MaxSize 50
typedef struct
{
	ElemType data[Maxsize];
	int front,rear;				//指向头和尾的指针
}SqQueue;