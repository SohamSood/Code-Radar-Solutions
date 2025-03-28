int digitRightShift(int n) {
    int a = n;
    int count = 0;
    int c = n;
    while(a>0) {
        a = a/10;
        count++;
    }
    int myarr[count];
    int k = count;
    while(c>0) {
        int d = c%10;
        myarr[k-1] = d;
        c = c/10;
        k--;
    }
    int myarr2[count];
    for(int i = 0;i<count;i++) {
        if(i == 0) {
            myarr2[0] = myarr[count-1];
        } else {
            myarr2[i] = myarr[i-1];
        }
    }
    int no = 0;
    for(int i = 0;i<count;i++) {
        no = (no*10)+myarr2[i];
    }
    return no;
}