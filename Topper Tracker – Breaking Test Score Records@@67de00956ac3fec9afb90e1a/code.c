int trackScores(int *myarr,int a,int *result) {
    int max = myarr[0];
    int min = myarr[0];
    int countmax = 0;
    int countmin = 0;
    for(int i  = 0;i<a;i++) {
        if(myarr[i]>max) {
            max = myarr[i];
            countmax++;
        }
        if(myarr[i]<min) {
            min = myarr[i];
            countmin++;
        }
    }
    result[0] = countmax;
    result[1] = countmin;
}