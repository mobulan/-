int i=0,j=L.size-1;			//头尾各设置一个标记
while(i<j)
{
	temp = L[i];
	L[i] = L[j];
	L[j] = tmep;
	i++ ; j--;
}