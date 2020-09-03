LinkList Same(LinkList L1,LinkList L2){
	int len1=Length(L1),len2=Length(L2),dist;
	LinkList longlist,shortlist;
	if(len1>len2){
		longlist = L1->next;
		shortlist = L2->next;
		dist = len2-len1;
	}
	else{
		longlist = L2->next;
		shortlist = L1->next;
		dist = len1-len2;
		}
	while(dist--)
		longlist = longlist->next;
	while(longlist != NULL)
		if(longlist == shortlist)
			return longlist;
		else{
			longlist = longlist->next;
			shortlist = shortlist->next;
		}
	return NULL;
}