#define SIZE 100			//最大节点数
int UFSets[SIZE];			//集合元素数组(双亲指针数组)

//并查集初始化操作
void Initial(int S[]){		//传入数组
	for (int i=0;i<SIZE)
		S[i]=-1;			//表示所有子节点都为根节点
}

//并查集寻找操作
int Find(int S[],int x){	//传入数组和要查找的元素
	while(S[x]>=0)			//循环查找x的根
		x = S[x];			//x为双亲节点的序号
	return x;				//返回根节点
}

//联合操作
void Union(int S[],int Root1,int Root2){
	S[Root1] = Root2;		//将root1的双亲节点设为root2
}