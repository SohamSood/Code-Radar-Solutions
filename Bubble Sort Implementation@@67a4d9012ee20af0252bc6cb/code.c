int bubbleSort(int *myarr,int a) {
    
    int min=myarr[0];
    for(int i =0;i<a;i++) {
        if(min>myarr[i]) {
            min = myarr[i];
        }
    }
    int max=myarr[0];
    for(int i =0;i<a;i++) {
        if(max<myarr[i]) {
            max = myarr[i];
        }
    }
    for(int i = min;i<=max;i++) {
        int e = 0;
        for(int j = 0;j<a;j++) {
            if(myarr[j] == i) {
                e++;
            }
        }
        if(e == 0) {
            int r = 0;

        } else {
            return myarr[i];
        }
    }
}  
int printArray(int *myarr,int n) {
    for(int i = n;i>0;i--) {
        printf("%d ",myarr[i]);
    }
}