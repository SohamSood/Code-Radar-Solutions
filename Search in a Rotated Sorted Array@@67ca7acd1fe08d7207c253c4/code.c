// Your code here...
int searchInRotatedArray(int *a,int b,int c) {
    for(int i = 0;i<b;i++) {
        if(a[i] == c) {
            return i;
        }
    }
}