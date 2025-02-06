#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    int e = 0;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int p = 0;p<a;p++) {
        scanf("%d",&myarr[p]);
    }
    for(int i = 0;i<a;i++) {
        e = e+(myarr[i]);
        printf("%d",e);
    }
}