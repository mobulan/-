int max = p->next->data;
int min = p->next->data;
for (;p != NULL;p = p->next)
{
	if (p->data < min)
	min = p->data;
	if (p->data > max)
	max = p->data;
}