int bubbleSort(int *myarr,int a) {
    for(int i =0;i<a;i++) {
        for(int j=0;j<a;j++) {
            if(a[i]<a[j]) {
                int vari = a[j];
                a[j] = a[i];
                a[i] = vari;
            }
        }
    }
}  
int printArray(int *myarr,int n) {
    for(int i = 0;i<n;i++) {
        printf("%d ",myarr[i]);
    }
}