int BinarySearch(ElemType A[],int n,ElemType x){
    int low = 0,high = n-1,mid;
    while(low <= high){
        mid = (high + low)/2;
        if(A[mid] == x)
            return mid;
        else if(A[mid] > x)
            high = mid-1;
        else low = mid+1;
    }
    return low;
}

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Insert(ElemType A[],int n,int i,ElemType x){
    int j = n-1;
    for(;j >= i;j--)
        A[j+1] = A[j];
    A[j+1] = x;
}

void SearchExchangeInsert(ElemType A[],int n,ElemType x){
    int pos = BinarySearch(A,n,x);
    if(A[pos]==x && pos!=n-1)
        swap(A[pos],A[pos+1]);
    else
        Insert(A,n,pos,x);
}