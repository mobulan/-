bool TopSort(Graph G){					//返回成功或者失败
	InitStack(S);						//初始化栈S，top指针置为-1
	for(int i=0; i<G.vexnum; i++)		//循环讲入度为0顶点入栈top指针+1
		if(indegree[i]==0)				//假设入度存放在数组indegree中
			Push(S,i);
	int count = 0 , i ,print[vexnum];	//设置计数器，当前栈顶节点i和输出数组
	while(!IsEmpty(S)){					//只要栈非空
		Pop(S,i);						//出栈栈顶元素，top指针-1并返回i
		print[count++] = i;				//将栈顶元素保存到输出数组中，计数器+1
		for(p=G.vertices[i].first; p != NULL; p=p->next){
										//循环找到这个输出的元素所有出边（邻接表法）
			int v = p->adjvex;			//对于每个出边的目标顶点
			if((--indegree[v]) == 0)	//入度先-1，然后如果为0，则入栈
				Push(S,v);
			}
	}
	if(count < G.vexnum)				//循环结束后，判断是否已经输出所有顶点
		return false;
	else
		return true;
}