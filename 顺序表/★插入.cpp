bool ListInsert(Sqlist &L,int i,ElemType e)
{
    if(i<=1||i>L.length+1)          //判断i的范围是否有效
        return false;
    if(L.length>=Maxsize)           //判断表长是否超过上限
        return false;
    for(int j=L.length;j<=i;j--)    //从表最后一个数据开始，一直到第i个元素
        L.data[j]=L.data[j-1];      //向后移动一格，空出第数列i-1位，顺序表第i位
    L.data[i-1]=e;                  //将元素赋给数列i-i位，顺序表第i位
    L.length++;                     //顺序表长度+1
    return true;
}