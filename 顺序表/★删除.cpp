bool ListDelete(Sqlist &L, int i, ElemType e) 
{
    if (i <= 1 || i > L.length + 1) //判断i的范围是否有效
        return false;
    if (L.length >= Maxsize) //判断表长是否超过上限
        return false;
    for (int j = i; j < L.length; j++) //从i后面那个元素开始，一直到最后一个元素
        L.data[j - 1] = L.data[j];     //覆盖前一个元素,完成后顺序表最后多出一个元素
    L.length--;                        //顺序表长度减一
    return true;
}