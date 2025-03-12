// Your code here...
int binarySearch(int *myarr,int n,int target) {
    int e =0;
    int f = 0;
    for(int i =n-1;i>=0;i--) {
        if ((target == myarr[i])) {
            e++;
        }
    }
    if(e == 0) {
        return -1;
    } else {
        return f;
    }
} 