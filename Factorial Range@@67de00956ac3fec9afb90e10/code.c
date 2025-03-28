// Your code here...
int factorialRange(int a,int b) {
    if((b>a) || (a<0)) {
        printf("Invalid range");
    }
    else {
        for(int i = a;i<=b;i++) {
            int fact = 1;
            for(int j = i;j>0;j--) {
                fact = fact*j;
            }
            printf("%d \n",fact);
        }
    }
}