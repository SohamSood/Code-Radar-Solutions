#include <stdio.h>
#include <stdlib.h>
int mian() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*sizeof(int));
    for (int u=0;u<a;u++) {
        scanf("%d",&myarr[u]);
    }
    int cout = 0;
    for(int i = 0;i<a;i++) {
        b=myarr[i];
        int e= 0;
        for(int j = 2;j<b;j++) {
            if(b%j == 0) {
                e = e+1;
            }
        }
        if(b == 0) {
            cout++;
        }
    }
    printf("%d",cout);
}