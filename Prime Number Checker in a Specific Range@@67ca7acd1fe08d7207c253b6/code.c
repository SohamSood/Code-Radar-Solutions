// Your code here...
int printPrimesInRange(int a,int b) {
    for(int i = a;i<b;i++) {
        if( i == 2) {
            printf("2 ");
        } for(int j = 2;j<b;j++) {
            int e =0;
            if(i%j == 0) {
                e++;
            }
            if(e == 0) {
                printf("%d ",i);
            }
        }
    }
}