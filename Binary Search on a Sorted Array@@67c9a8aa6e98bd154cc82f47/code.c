// Your code here...
int binarySearch(int *myarr,int n,int target) {
    int e =0;
    int f = 0;
    for(int i =0;i<n;i++) {
        if ((target == myarr[i])) {
            f = i;
            e++;
        }
    }
    int j = (n+1)/2;
    if(e == n) {
        return j;
    }
    else if( e == 0) {
        return -1;
    } else {
        return f;
    }
} 