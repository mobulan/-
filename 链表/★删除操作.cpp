//找到i-1号，将其指向i+1号，释放i号
p = GetElem(L,i-1);		//找到i-1号
q = p->next;			//保存i号的地址，好去释放他
p->next = q->next;		//将i+1的地址覆盖到i的地址
free(q);				//释放i号

//已知某个节点i，将i+1节点的数据覆盖到i,i指向i+2,删除i+1
q = p->next;				//保存i+1号节点的地址
p->data = q->next->data;	//把i+1的内容覆盖到i上
p->next = q->next;			//将i+2的地址赋给i的指针
free(q);					//释放i+1
uj jj