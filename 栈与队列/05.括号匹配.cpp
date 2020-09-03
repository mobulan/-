bool BracketMatch(char A[]){
	Stack S;
	InitStack(S);
	char e;
	for(int i=0;A[i]!='\n';i++){
		 switch(A[i]){
		 	case '(':Push(S,A[i]);break;
		 	case '[':Push(S, A[i]);break;
			case '{':Push(S, A[i]);break;
			case ')':Pop(S,e);
				if(e!='(') return false;
				break;
			case ']':Pop(S,e);
				if(e!='[') return false;
				break;
			case '}':Pop(S,e);
				if(e!='{') return false;
				break;
			default: break;
		 }
	}
	if(IsEmpty(S)) return true;
	else return false;
}