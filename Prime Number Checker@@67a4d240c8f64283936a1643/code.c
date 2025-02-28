int isPrime(int a) {
    int e;
    for(int i = 2;i<a;i++) {
        if(a%i == 0) {
            printf("0 \n");
            e++;
        }
    }
    if((a == 0) || (a == 1)) {
        printf("0 \n");
    } else if((a == 2) || (e == 0)) {
        printf("1 \n");
    }
}