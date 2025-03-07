int insertionSort(int *myarr,int a) {
    for(int i =0;i<a;i++) {
        for(int j=0;j<a;j++) {
            if(myarr[i]<myarr[j]) {
                int vari = myarr[j];
                myarr[j] = myarr[i];
                myarr[i] = vari;
            }
        }
    }
}  
int printArray(int *myarr,int n) {
    for(int i = 0;i<n;i++) {
        printf("%d ",myarr[i]);
    }
}