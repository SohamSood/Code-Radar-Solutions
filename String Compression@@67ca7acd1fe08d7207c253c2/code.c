int compressString(char *myarr, char *myarr2) {
    int a = 0;
    while (myarr[a] != '\0') {
        a++;
    }
    int index = 0;
    for (int i = 0; i < a; i++) {
        int count = 0;
        for (int j = 0; j < a; j++) {
            if (myarr[i] == myarr[j]) {
                count++;
            }
        }
        int b = 0;
        while (myarr2[b] != '\0') {
            b++;
        }
        int c = 0;
        for(int k = 0;k<b;k++) {
            if(myarr[i] == myarr2[k]) {
                c++;
            }
        }
        if (c == 0) {
            if (count == 1) {
                myarr2[index] = myarr[i];
                index++;
            } else {
                myarr2[index] = myarr[i];
                myarr2[index + 1] = count + '0';
                index = index + 2;
            }
        }
    }
}