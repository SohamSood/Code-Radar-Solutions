int kthSmallest(int *myarr,int n,int k) {
    for(int i = 0;i<n;i++) {
        for(int j = 0;j<n;j++) {
            if(myarr[i]<myarr[j]) {
                int temp = myarr[j];
                myarr[j] = myarr[i];
                myarr[i] = temp;
            }
        }
    }
    if(n>k) {
        printf("-1");
    } else {
        myarr[k-1];
    }
}