int FindMid(int A[],int B[],int n){
    int l1 = 0,l2 = l1;
    int r1 = n-1,r2 = n-1;
    int m1 = (l1+r1)/2,m2 = m1;

    while(!(l1==m1 && l2==m2))
    {
        m1 = (l1+r1)/2;
        m2 = (l2+r2)/2;
        if(A[m1] == B[m2])
            return A[m1];
        if(A[m1] < B[m2])
        {
            if((l1+r1)%2 == 0)
            {
                l1 = m1;
                r2 = m2;
            }else{
                l1 = m1+1;
                r2 = m2;
            }
        }
        else
        if((l1+r1)%2 == 0)
        {
            r1 = m1;
            l2 = m2;
        }else{
            r1 = m1;
            l2 = m2+1;
        }
    }
    return A[m1]<B[m2]?A[m1]:B[m2];
}