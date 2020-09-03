//进栈
bool Push(Sqstack &S, ElemType x)	//返回是否进栈成功
{
	if(S.top == Maxsize-1)			//判断栈是否已满
		return false;
	S.data[++S.top] = x;			//先将指针向后移动一位
	return true;					//再赋值，最后返回成功
}

//出栈
bool Pop(Sqstack &S,ElemType &x)
{
	if (S.top == Maxsize - 1)		//判断栈是否已满
		return false;
	x = S.data[S.top--];			//先将当前值赋给x，再将指针减一；
	return true;
}