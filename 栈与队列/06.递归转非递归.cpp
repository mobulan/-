double Recursion(int n, double x){
	double *S = new double[n+1];
	S[0] = 1;S[1] = 2*x;
	for(int i=2;i<=n;i++){
		double res1 = 2*x*S[i-1],res2 = 2*(i-1)*S[i-2];
		S[i]=res1-res2;
	}
	return S[n];
}