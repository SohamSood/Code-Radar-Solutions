int isPrime(int a) {
    int e = 0;
    for(int i = 2;i<a;i++) {
        if(a%i == 0) {
            e++;
        }
    }
    if((a == 0) || (a == 1) || (e != 0)) {
        return 0;
    } else if((a == 2) || (e == 0)) {
        return 1;
    }
}