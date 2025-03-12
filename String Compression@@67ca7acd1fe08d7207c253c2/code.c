// Your code here...
int compressString(char *myarr,char *myarr2) {
    int a = 0;
    while (myarr[a] != '\0') {
        a++;
    }
    int index = 0;
    for(int i = 0;i<a;i++) {
        int count = 0;
        for(int j = 0;j<a;j++) {
            if(myarr[i] == myarr[j]) {
                count++;
            }
        }
        if(count == 1) {
            myarr2[index] = myarr[i];
            index++;
        } else {
            myarr2[index] = myarr[i];
            myarr2[index+1] = count;
            index = index+2;
        }
    }
}