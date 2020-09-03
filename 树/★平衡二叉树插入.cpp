void Judege_AVL(BiTree bt,int &balance, int &h){
	int bl=0,br=0,hl=0,hr=0;
	if (bt == NULL){
		h = 0;
		balance =1;
	}
	if (bt->lchild == NULL&bt->rchild == NULL){
		h = 1;
		balance = 1;
	}
	else{
		Judege_AVL(BiTree bt->lchild, int bl, int hl);
		Judege_AVL(BiTree bt->rchild, int br, int hr);
		if(h1 > hr)
			h = hl+r;
		else
			h = hr+r;
		if(abs(hl-hr) < 2 && b1 ==1 && b2==1)
			balance = 1;
		else
			balance = 0;
	}
}