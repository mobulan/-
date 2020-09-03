int BinarySearch(SeqList L,ElemType key){
	int low = 0;					//low标记初始在第一个元素
	int high = L.TableLen-1;		//high标记在最后一个元素
	int mid;						
	while(low<=high){				//high，low相同时还要继续执行一次
		mid = (low+high)/2;			//mid向下取整
		if(L.data[mid] == key)		//如果数值相同返回位置
			return mid;
		else if(L.data[mid] > key)	//如果小则从前半段找
			high = mid - 1;
		else						//如果大则从前半段查找
			low = mid + 1;
	}
	return -1;						//没找到返回-1
}