ElemType CommAncestor(Tree T,int i,int j){
	if(T[i]>0 && T[j]>0){
		while(i != j){
			if(i>j)
				i = i/2;
			else
				j = j/2;
		}
		return T[i];
	}
}