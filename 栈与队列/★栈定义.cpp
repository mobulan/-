#define Maxsize 50				//最大空间
typedef struct
{
	ElemType data[Maxsize];		//数组
	int top;					//指向栈顶的指针
}Sqstack;