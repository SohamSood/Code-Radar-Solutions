// Your code here...
int binarySearch(int *myarr,int n,int target) {
    int e =0;
    int f = 0;
    for(int i =n-1;i>=0;i--) {
        if ((target == myarr[i])) {
            f = i;
            e++;
        }
    }
    // int j = (n+1)/2;
    // if(e == n) {
    //     return j;
    // }
    if(e == 0) {
        return -1;
    } else {
        return f;
    }
} 