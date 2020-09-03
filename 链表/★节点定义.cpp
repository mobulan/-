typedef struct LNode        //定义单链表结点类型
{
	ElemType data;          //数据域
	struct LNode *next;     //指针域
}LNode,*LinkList;			//此指针指向单链表开头
							//这个指针可以代表整个单链表