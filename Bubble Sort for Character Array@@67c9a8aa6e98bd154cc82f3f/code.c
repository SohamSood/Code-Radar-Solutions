// Your code here...
int bubbleSort(char *myarr,int a) {
    for(int i =0;i<a;i++) {
        for(int j =0;j<a;j++) {
            if(myarr[i] < myarr[j]) {
                int vari = myarr[j];
                myarr[j] = myarr[i];
                myarr[i] = vari; 
            }
        }
    }
}
int printArray(char *myarr,int a) {
    for(int i =0;i<a;i++) {
        printf("%c ",myarr[i]);
    }
}