int Height(CSTree T){
	int hc,hc;
	if(T == NULL)
		return 0;
	else{
		hc = Height(T->child);
		hs = Height(T->sibl);
	}
	if(hc+1 > hs)
		return hc+1;
	else
		return hs;
}