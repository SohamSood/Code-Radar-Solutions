// Your code here...
int printPrimesInRange(int a,int b) {
    for(int i = a;i<=b;i++) {
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
        printf("%d %d \n",e,i);
    }
}