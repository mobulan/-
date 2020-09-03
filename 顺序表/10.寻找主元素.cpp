int Majority(int A[],int n){
    int *B = new int[n];
    for(int i=0;i<n;i++)
        B[i] = 0;
    for(int i=0;i<n;i++)
        B[A[i]]++;
    for(int i=0;i<n;i++)
        if(B[i]>n/2)
            return i;
    return -1;
}