// Your code here...
int findKthMissing(int *myarr,int a ,int target) {
    int maax(int *myarr,int a) {
    int maxx=myarr[0];
    for(int i = 0;i<a;i++) {
        if(myarr[i]>maxx) {
            maxx = myarr[i];
        }
    }
    return maxx;
}
    int count = 0;
    int no;
    int max = maax(myarr,a);
    for(int i = 1;i<max;i++) {
        if(count == target) {
            return no;
            break;
        }
        int e = 0;
        for(int j = 1;j<a;j++) {
            if(myarr[j] == i) {
                e++;
            }  
        }
        if(e == 0) {
            no = i;
            count++;
        }
    }
}
