// Your code here...
int insertionSort(char *myarr,int a) {
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<a;j++) {
            if(myarr[i]<myarr[j]) {
                int temp = myarr[j];
                myarr[j] = myarr[i];
                myarr[i] = temp;
            }
        }
    }
}
int printArray(char *myarr;int a) {
    for(int i=0;i<a;i++) {
        printf("%d ",myarr[i]);
    }
}