#include <stdio.h>
#include <stdlib.h>
int check(int o,int u) {
    int *myarr2 = malloc(u*(sizeof(int)));
    for(int v = 0;v<u;v++) {
        myarr[v] = o%10;
        o = o/10;
    }
}
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int p = 0;p<a;p++){
        int c = 0;
        int e;
        int d = myarr[p];
        int n = myarr[p];
        while(d>0) {
            e = d%10;
            d = d/10;
            c++;  
        }
        z = check(n,c);
    }
}