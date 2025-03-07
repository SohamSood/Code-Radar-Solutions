// Your code here...
int compressString(int *str,int *a) {
    for(int i= 0;i<(strlen(str));i++) {
        int count = 0;
        int var = str[i];
        for(int j =0;j<strlen(str);j++) {
            if(str[i] == str[j]) {
                count++;
            }
        }
    }
}