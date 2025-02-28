int isPrime(int a) {
    int e;
    for(int i = 2;i<a;i++) {
        if(a%i == 0) {
            e++;
        }
    }
    if((a == 0) || (a == 1) || (e != 0)) {
        return e;
    } else if((a == 2) || (e == 0)) {
        return 1;
    }
}