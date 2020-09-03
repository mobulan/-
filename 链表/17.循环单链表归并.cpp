void Link(LinkList &h1,LinkList &h2){
	LNode *p1 = h1; *p2 = h2;
	while(p1->next != h1)
		p1 = p1->next;
	p1->next = h2;
	while(p2->next != h2)
		p2->p2->next;
	p2->next = h1;
}