// Your code here...
int binarySearch(int *myarr,int n,int target) {
    int e =0;
    int f = 0;
    for(int i =0;i<n;i++) {   
        e--; 
        if ((target == myarr[i]) && (e == 0)) {
            f = i;
            e++;
        }
    }
    if(e == n) {
        return myarr[(n+1)/2];
    }
    else if( e == 0) {
        return -1;
    } else {
        return f;
    }
} 