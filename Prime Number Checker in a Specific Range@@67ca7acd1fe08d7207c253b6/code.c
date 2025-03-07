// Your code here...
int printPrimesInRange(int a,int b) {
    for(int i = a;i<b;i++) {
        int e =0;
        if( i == 2 ) {
            printf("2 ");
            e++;
        } 
        for(int j = 2;j<b;j++) {
            if(i%j == 0) {
                e++;
            }
            
        }
        if(e == 0) {
            // printf("%d ",i);
            return i ;
        } else {
            printf("%d ",e);
        }
    }
}