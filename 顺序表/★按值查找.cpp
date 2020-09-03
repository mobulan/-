int LocateElem(Sqlist &L, ElemType e)
{
    for (int i = 1; i < L.length; i++)  //遍历顺序表
        if (L.data[i] == e)
            return i + 1;               //顺序表序号是数组序号+1
    return 0;
}