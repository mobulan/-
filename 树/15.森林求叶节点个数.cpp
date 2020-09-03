typedef struct Node{
	ElemType data;
	Node *child,*sibl;
}*CSTree,CSNode;

int Leaves(Tree T){
	int leaves=0;
	if(T->child == NULL)
		leaves++;
	if(T->child)
		leaves += Leaves(T->child);
	if(T->neigh)
		leaves += Leaves(T->sibl);
	return leaves;
}