// Your code here...
int caesarCipher(char *myarr,int shift,char *encrypted) {
    for(int i = 0;i<100;i++) {
        char d = (myarr[i]) + shift;
        encrypted[i] = d;
    }
}
