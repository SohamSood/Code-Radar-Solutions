// Your code here...
int printPrimesInRange(int a,int b) {
    int j = 0;
    for(int i = a;i<=b;i++) {
        int e =0;
        if(i == 0|| i == 1) {
            e++;
        }
        else if( i == 2 ) {
            printf("2 ");
            e++;
        } 
        for(int j = 2;j<i;j++) {
            if(i%j == 0) {
                e++;
            }    
        }
        if(e == 0) {
            if(i>0) {
                printf("%d ",i);
            }
        }
        j = j+e;
    }
    printf(" ,%d",j);
}