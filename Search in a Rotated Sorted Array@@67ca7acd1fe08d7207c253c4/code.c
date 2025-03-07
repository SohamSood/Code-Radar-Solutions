// Your code here...
int searchInRotatedArray(int *a,int b,int c) {
    int e =0;
    for(int i = 0;i<b;i++) {
        if(a[i] == c) {
            return i;
            e++;
        }
    }
    if(e == 0) {
        return -1;
    }
}