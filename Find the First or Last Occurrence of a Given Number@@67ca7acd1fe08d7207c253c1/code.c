int findOccurrence(int *myarr,int n,int target,char mode) {
    int e =0;
    if(mode == 'L') {
        for(int i = n;i>0;i--) {
            if((myarr[i] == target) && (e == 0)) {
                return i;
                e++;
            }
        }
    }
    else if(mode == 'F') {
        for(int i = 0;i<n;i++) {
            if((myarr[i] == target) && (e == 0)) {
                return i;
                e++;
            }
        }
    }
    if(e == 0) {
        return -1;
    }
}