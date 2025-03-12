// Your code here...
int findKthMissing(int *myarr,int a ,int target) {    
    int max=myarr[0];
    for(int i = 1;i<a;i++) {
        if(myarr[i]>max) {
            max = myarr[i];
        }
    }
    int count = 0;
    int no;
    for(int i = 1;count<target;i++) {
            int e = 0;
            for(int j = 0;j<a;j++) {
                if(myarr[j] == i) {
                    e++;
                    break;
                }  
            }
            if(e == 0) {
                no = i;
                count++;
            }
        }
    if(count == target) {
            return no;
        }
}
