typedef struct{				//新建结构体
	ElemType *data;
	int TableLen;
}SSTable;

int SearchSeq(SSTable ST , ElemType key){	//从后往前找，找到返回i
	ST.data[0] = key;
	for(int i=TableLen; ST.data[i] != key;i--);
	return i;								//找不到返回0
}