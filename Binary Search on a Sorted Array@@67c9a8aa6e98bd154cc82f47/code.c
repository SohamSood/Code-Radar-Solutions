// Your code here...
int binarySearch(int *myarr,int n,int target) {
    int e =0;
    for(int i =0;i<n;i++) {
        if ((target == myarr[i]) && (e == 0)) {
            return i;
            e++;
        }
    }
    if( e == 0) {
        return -1;
    }
} 