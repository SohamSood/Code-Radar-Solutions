#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for (int f = 0;f<a;f++) {
        scanf("%d",&myarr[f]);
    }
    int e = 0;
    for(int i = 0;i<a;i++) {
        int c = myarr[i];
        int f = 0;
        while(c>0) {
            f = (f*10) + (c%10);
            c = c/10;
        }
        if(f == myarr[i]) {
            e++;
        }
    }
    printf("%d",e);
}