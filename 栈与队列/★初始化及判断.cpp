//栈的初始化
void InitStack(Sqstack &S)
{
	S.top == -1;			//栈顶指针初始化为-1
}

//判断栈是否为空
bool StackEmpty(Sqstack S)
{
	if(S.top == -1)			//栈顶指针是否为-1
		return true;
	else
		return false;
}