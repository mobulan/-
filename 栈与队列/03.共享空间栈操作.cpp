#define MaxSize 100

typedef struct{
	int Stack[MaxSize];
	int top[2];
}Stack;

Stack S;
S.top[0] = -1;
S.top[2] = MaxSize;

int Push(int i,int x){
	if(i<1 || i>2)
		return 0;
	if(top[0]-top[1] == -1)
		return 0;
	switch(i){
	
		case 1: S.Stack[++S.top[0]] = x; 
		return 1;
		break;
		
		case 2: S.Stack[--S.top[1]] = x; break;
		return 1;
		break;
	}
}

int Pop(int i,int x){
	if (i < 1 || i > 2)
		return 0;
	switch(i){
	
		case 1:
			if(S.top[i-1] == -1)
				return 0;
			else
				return S.Stack[S.top[0]--];
		break;
				
		case 2:
			if (S.top[1] == MaxSize)
				return 0;
			else
				return S.Stack[S.top[1]++];
		break;
	}
}