void PreToPost(ElemType pre[],int l1,int r1,ElemType post[],int l2,int r2){
	int half;
	if(r2>=l1){
		post[r2] = pre[l1]
		half = (r2-l1)/2;
		PreToPost(pre,l1+1,l1+half,post,l2,l2+half-1);
		PreToPost(pre,l1+half+1,r1,post,l2+half,r2-1);
	}
}