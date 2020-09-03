int i = 0, j = 0, k = 0; 		//分别是数组1，数组2和新数组的标记；
for (; i < L1.length && j < L2.length; k++)
 {
	if (L1[k] < L2[k])
		L[k] = L1[i++];
	else
		L[k] = L2[j++];
}
while (i < L1.size)
	L[k++] = L1[i++];
while (j < L2.size)
	L[k++] = L2[j++]