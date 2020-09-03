bool Judge(char A[],int){
	int I,O,i;
	for(i;A [i] != '\n';i++){
		if(A[i] = 'I')
			I++;
		else
			O++;
		if(O>I)
			return false;
	}
	if(I == O)
		return true;
	else
		return false;
}