// Your code here...
int findKthMissing(int *myarr,int a ,int target) {    
    int max=myarr[0];
    for(int i = 0;i<a;i++) {
        if(myarr[i]>max) {
            max = myarr[i];
        }
    }
    int count = 0;
    int no;
    while(count != target) {
        for(int i = 1;i<max;i++) {
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
    if(count == target) {
            return no;
        }
}
