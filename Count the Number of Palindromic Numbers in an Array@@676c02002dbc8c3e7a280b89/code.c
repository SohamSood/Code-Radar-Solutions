#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int p = 0;p<a;p++){
        int c = 0;
        int e;
        int d = myarr[p];
        int o = 0;
        int u = 0;
        while(d>0) {
            e = d%10;
            d = d/10;
            c++;  
        }
        int *myarr2 = malloc(c*(sizeof(int)));
        int r= 0;
        do(r++) {
            o = myarr[p]%10;
            myarr[p]=myarr[p]/10;
        } while(myarr[p]>0);
        
    }
}