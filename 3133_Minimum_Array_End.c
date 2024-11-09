long long minEnd(int n, int x) {
    if(n==1){
        return x;
    }
    n=n-1;
    int len=log2(n)+1;
    int arr[len];
    int k=len-1;
    while(n!=0){
        int t=n%2;
        arr[k]=t;
        n=n/2;
        k--;
    }
    k=len-1;
    long long int ret=0;
    int i=0;
    while(x!=0 || k!=-1){
        int t=x%2;
        if(t==0 && k>-1){
            t=arr[k];
            k--;
        }
        ret=ret+(t*pow(2,i));
        i++;
        x=x/2;
    }
    return ret;
}
