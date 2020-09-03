int max = L[0], min = L[0];
for (int i = 0; i < n; i++)
{
	if (L[i] < min)
		min = L[i];
	if (L[i] > max)
		max = L[i];
}