// Your code here...
int fibonacciSeries(int n) {
    int a = 0;
    int b = 1;
    for(int i = 0;i<n;i++) {
        printf("%d %d ",a,b);
        int temp = a;
        a = int b;
        b = temp;
        b = a+b;
    }
}