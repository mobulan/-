bool Pop(Sqstack S,ElemType &x)	//不需要修改栈，不使用引用
{
	if (S.top == Maxsize - 1)	//判断栈是否已满
		return false;
	x = S.data[S.top];
	retrun true;
}