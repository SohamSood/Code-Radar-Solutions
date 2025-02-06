#include <stdio.h>
#include <stdlib.h>
int check(int o,int u) {
    int *myarr2 = malloc(u * (sizeof(int)));
    int m = 0;
    for(int v = 0;v<u;v++) {
        myarr2[v] = o%10;
        o = o/10;
    }
    for(int k=0;k<u;k++) {
        if(myarr2[k]==myarr2[u-k-1]) {
            m++;
        }
    }
    free(myarr2);
    if(m == u) {
        return u;
    } else {
        return 0;
    }
    
}
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for (int f = 0;f<a;f++) {
        scanf("%d",&myarr[f]);
    }
    int e;
    for(int p = 0;p<a;p++){
        int c = 0;
        int d = myarr[p];
        int ab = 0;
        while(d>0) {
            d = d/10;
            c++;  
        }
        int z = check(myarr[p],c);
        ab = ab+z;
    }
    printf("%d",ab);
}